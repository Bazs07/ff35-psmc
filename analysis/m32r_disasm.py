#!/usr/bin/env python3
"""Small table-driven M32R/M32RX disassembler for the IPMA host image.

The decoder reads the machine-generated opcode descriptions from GNU
binutils.  It is intentionally a listing/triage tool rather than a full code
analyser: its purpose is to expose branches, calls, constants and data
references so equivalent Pre-FL and FL functions can be compared.

The expected source files are ``m32r-opc.c`` beside this script under
``tool_sources/m32r``.  They can be obtained from the GNU binutils-gdb tree.
"""

from __future__ import annotations

import argparse
import re
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True)
class Format:
    bits: int
    mask: int


@dataclass(frozen=True)
class Instruction:
    order: int
    template: str
    fmt: Format
    base: int

    @property
    def mnemonic(self) -> str:
        return self.template.split()[0]


OPERANDS = {
    "acc": (8, 1, False),
    "accd": (4, 2, False),
    "accs": (12, 2, False),
    "dcr": (4, 4, False),
    "disp16": (16, 16, True),
    "disp24": (8, 24, True),
    "disp8": (8, 8, True),
    "dr": (4, 4, False),
    "hi16": (16, 16, False),
    "imm1": (15, 1, False),
    "scr": (12, 4, False),
    "simm16": (16, 16, True),
    "simm8": (8, 8, True),
    "slo16": (16, 16, True),
    "sr": (12, 4, False),
    "src1": (4, 4, False),
    "src2": (12, 4, False),
    "uimm16": (16, 16, False),
    "uimm24": (8, 24, False),
    "uimm3": (5, 3, False),
    "uimm4": (12, 4, False),
    "uimm5": (11, 5, False),
    "uimm8": (8, 8, False),
    "ulo16": (16, 16, False),
}


REGISTERS = [
    "r0",
    "r1",
    "r2",
    "r3",
    "r4",
    "r5",
    "r6",
    "r7",
    "r8",
    "r9",
    "r10",
    "r11",
    "r12",
    "fp",
    "lr",
    "sp",
]

CONTROL_REGISTERS = [
    "psw",
    "cbr",
    "spi",
    "spu",
    "bpc",
    "cr5",
    "cr6",
    "cr7",
    "bbpsw",
    "cr9",
    "cr10",
    "cr11",
    "cr12",
    "cr13",
    "bbpc",
    "evb",
]


def normalize_comment(value: str) -> str:
    return " ".join(line.strip(" *\t") for line in value.splitlines()).strip()


def load_tables(source_dir: Path) -> list[Instruction]:
    opc = (source_dir / "m32r-opc.c").read_text(encoding="utf-8")
    formats: dict[str, Format] = {}
    fmt_re = re.compile(
        r"static const CGEN_IFMT\s+(ifmt_\w+).*?=\s*\{\s*"
        r"(\d+)\s*,\s*(\d+)\s*,\s*(0x[0-9a-fA-F]+)",
        re.DOTALL,
    )
    for match in fmt_re.finditer(opc):
        formats[match.group(1)] = Format(
            bits=int(match.group(2)), mask=int(match.group(4), 16)
        )

    table_marker = "static const CGEN_OPCODE m32r_cgen_insn_opcode_table"
    start = opc.index(table_marker)
    # Macro instructions follow the real instruction table and must not be
    # mixed into the decoder.
    end = opc.index("static const CGEN_IBASE m32r_cgen_macro_insn_table", start)
    body = opc[start:end]

    entry_re = re.compile(
        r"&\s*(ifmt_\w+)\s*,\s*\{\s*(0x[0-9a-fA-F]+)\s*\}",
        re.DOTALL,
    )
    comment_re = re.compile(r"/\*(.*?)\*/", re.DOTALL)
    comments = list(comment_re.finditer(body))
    instructions: list[Instruction] = []
    comment_index = 0
    previous_end = 0
    for order, match in enumerate(entry_re.finditer(body)):
        while comment_index + 1 < len(comments) and comments[comment_index + 1].end() < match.start():
            comment_index += 1
        candidates = [
            comment
            for comment in comments
            if previous_end <= comment.start() < match.start()
        ]
        if not candidates:
            previous_end = match.end()
            continue
        template = normalize_comment(candidates[-1].group(1))
        fmt = formats.get(match.group(1))
        if fmt is not None and template and not template.lower().startswith("special null"):
            instructions.append(
                Instruction(order, template, fmt, int(match.group(2), 16))
            )
        previous_end = match.end()

    if len(instructions) < 100:
        raise RuntimeError(f"Only {len(instructions)} opcode entries parsed")
    return instructions


def extract(value: int, total_bits: int, start: int, length: int, signed: bool) -> int:
    shift = total_bits - (start + length)
    result = (value >> shift) & ((1 << length) - 1)
    if signed and result & (1 << (length - 1)):
        result -= 1 << length
    return result


def register(value: int, control: bool = False) -> str:
    names = CONTROL_REGISTERS if control else REGISTERS
    return names[value] if 0 <= value < len(names) else f"r?{value}"


def format_operand(name: str, value: int, bits: int, pc: int) -> str:
    if name in {"dr", "sr", "src1", "src2"}:
        return register(value)
    if name in {"dcr", "scr"}:
        return register(value, control=True)
    if name in {"acc", "accd", "accs"}:
        return f"a{value}"
    if name == "hash":
        return "#"
    if name == "imm1":
        return f"#{value + 1}"
    if name == "disp8":
        target = (pc & ~3) + value * 4
        return f"0x{target:08X}"
    if name in {"disp16", "disp24"}:
        target = pc + value * 4
        return f"0x{target:08X}"
    if name in {"hi16", "slo16", "ulo16"}:
        return f"0x{value & 0xFFFF:X}"
    if name.startswith("simm"):
        return f"#{value}"
    if name.startswith("uimm"):
        return f"#0x{value:X}"
    return str(value)


PLACEHOLDER_RE = re.compile(r"\$(" + "|".join(
    sorted(list(OPERANDS) + ["hash"], key=len, reverse=True)
) + r")")


def render(insn: Instruction, value: int, pc: int) -> str:
    def replacement(match: re.Match[str]) -> str:
        name = match.group(1)
        if name == "hash":
            return "#"
        start, length, signed = OPERANDS[name]
        operand = extract(value, insn.fmt.bits, start, length, signed)
        return format_operand(name, operand, insn.fmt.bits, pc)

    return PLACEHOLDER_RE.sub(replacement, insn.template)


def decode(value: int, bits: int, pc: int, table: list[Instruction]) -> str:
    matches = [
        insn
        for insn in table
        if insn.fmt.bits == bits and value & insn.fmt.mask == insn.base
    ]
    if not matches:
        return f".word 0x{value:0{bits // 4}X}"
    # More fixed bits means a more specific instruction.  Preserve GNU table
    # order as the tie breaker.
    matches.sort(key=lambda item: (-item.fmt.mask.bit_count(), item.order))
    return render(matches[0], value, pc)


def listing(
    data: bytes,
    load_address: int,
    start: int,
    end: int,
    table: list[Instruction],
) -> list[str]:
    start &= ~3
    end = min(len(data), (end + 3) & ~3)
    result: list[str] = []
    for offset in range(start, end, 4):
        chunk = data[offset : offset + 4]
        if len(chunk) < 4:
            break
        pc = load_address + offset
        raw = chunk.hex(" ")
        if chunk[0] & 0x80:
            value = int.from_bytes(chunk, "big")
            text = decode(value, 32, pc, table)
        else:
            left = int.from_bytes(chunk[:2], "big")
            right = int.from_bytes(chunk[2:], "big")
            left_text = decode(left, 16, pc, table)
            parallel = bool(right & 0x8000)
            if parallel:
                right &= 0x7FFF
            right_text = decode(right, 16, pc, table)
            text = f"{left_text}{' || ' if parallel else ' -> '}{right_text}"
        result.append(f"0x{pc:08X}  {raw:<11}  {text}")
    return result


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("binary", type=Path)
    parser.add_argument("--load-address", type=lambda x: int(x, 0), required=True)
    parser.add_argument("--start", type=lambda x: int(x, 0), default=0)
    parser.add_argument("--length", type=lambda x: int(x, 0), default=0x100)
    parser.add_argument(
        "--source-dir",
        type=Path,
        default=Path(__file__).with_name("tool_sources") / "m32r",
    )
    args = parser.parse_args()
    table = load_tables(args.source_dir)
    data = args.binary.read_bytes()
    for line in listing(
        data,
        args.load_address,
        args.start,
        args.start + args.length,
        table,
    ):
        print(line)


if __name__ == "__main__":
    main()
