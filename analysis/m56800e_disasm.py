#!/usr/bin/env python3
"""Focused NXP/Freescale DSP56800E disassembler for PSCM triage.

This intentionally decodes only instructions already needed for PSCM control-
flow and absolute X-memory analysis.  Opcode layouts come from the official
DSP56800E/EX Core Reference Manual (DSP56800ERM).  Unknown words remain visible
as ``.word`` so no interpretation is silently invented.

VBF segment addresses are byte addresses.  The 56800E program counter uses
16-bit program-word addresses, therefore ``P = VBF_address / 2``.
"""

from __future__ import annotations

import argparse
from dataclasses import dataclass
from pathlib import Path


def sign_extend(value: int, bits: int) -> int:
    sign = 1 << (bits - 1)
    return (value ^ sign) - sign


def abs19(opcode: int, low: int) -> int:
    high = (((opcode >> 3) & 1) << 2) | (((opcode >> 1) & 1) << 1) | (opcode & 1)
    return (high << 16) | low


def reg3(opcode: int) -> int:
    return (((opcode >> 3) & 1) << 2) | (((opcode >> 1) & 1) << 1) | (opcode & 1)


@dataclass(frozen=True)
class Decoded:
    size: int
    text: str


def decode(words: list[int], index: int, pc: int) -> Decoded:
    op = words[index]
    following = words[index + 1 : index + 4]

    if op == 0xE700:
        return Decoded(1, "NOP")
    if op == 0xE708:
        return Decoded(1, "RTS")
    if op == 0xE709:
        return Decoded(1, "RTI")
    if op == 0xE70D:
        return Decoded(1, "RTID")
    if op == 0xE71F:
        return Decoded(1, "JMP (N)")

    if op & 0xFFF4 == 0xE614:
        return Decoded(1, f"JSR (reg3:{reg3(op)})")

    if following and op & 0xFFF4 == 0xE254:
        return Decoded(2, f"JSR P:0x{abs19(op, following[0]):05X}")
    if following and op & 0xFFF4 == 0xE154:
        return Decoded(2, f"JMP P:0x{abs19(op, following[0]):05X}")

    if following and op & 0xFFFC == 0xE26C:
        offset = sign_extend(((op & 0x3) << 16) | following[0], 18)
        return Decoded(2, f"BSR P:0x{pc + 2 + offset:05X} ; rel {offset:+#x}")
    if following and op & 0xFFFC == 0xE16C:
        offset = sign_extend(((op & 0x3) << 16) | following[0], 18)
        return Decoded(2, f"BRA P:0x{pc + 2 + offset:05X} ; rel {offset:+#x}")
    if op & 0xFF80 == 0xA900:
        offset = sign_extend(op & 0x7F, 7)
        return Decoded(1, f"BRA P:0x{pc + 1 + offset:05X} ; rel {offset:+#x}")
    # Bcc <OFFSET7>:  1010 CCCC 0A aaaaaa   (bit7 == 0)
    if op & 0xF080 == 0xA000:
        cc = {0: "cc", 1: "cs", 2: "ne", 3: "eq", 4: "ge", 5: "lt", 6: "gt", 7: "le",
              0xC: "hi", 0xD: "ls", 0xE: "nn", 0xF: "nr"}.get((op >> 8) & 0xF, "?")
        offset = sign_extend(op & 0x7F, 7)
        return Decoded(1, f"B{cc} P:0x{pc + 1 + offset:05X} ; rel {offset:+#x}")

    if following and op & 0xF07F == 0xF07C:
        register = (op >> 7) & 0x1F
        return Decoded(2, f"MOVE.W X:0x{following[0]:04X},reg5:{register}")
    if following and op & 0xF07F == 0xD07C:
        register = (op >> 7) & 0x1F
        return Decoded(2, f"MOVE.W reg5:{register},X:0x{following[0]:04X}")
    if following and op == 0xD67C:
        return Decoded(2, f"MOVE.W X:0x{following[0]:04X},Y")
    if len(following) >= 2 and op == 0x8654:
        return Decoded(3, f"MOVE.W #0x{following[1]:04X},X:0x{following[0]:04X}")
    if following and op & 0xFFE0 == 0x8740:
        register = op & 0x1F
        return Decoded(2, f"MOVE.W #0x{following[0]:04X},reg5:{register}")

    # Bit-field ops, 16-bit mask in the following word (DSP56800ERM A.2, verified encodings)
    if len(following) >= 2 and op == 0x8C54:          # 1000110001010100
        return Decoded(3, f"BFTSTH #0x{following[1]:04X},X:0x{following[0]:04X} ; test bits==1")
    if len(following) >= 2 and op == 0x8854:          # 1000100001010100
        return Decoded(3, f"BFTSTL #0x{following[1]:04X},X:0x{following[0]:04X} ; test bits==0")
    if following and op & 0xFFE0 == 0x8D40:           # 10001101010ddddd
        return Decoded(2, f"BFTSTH #0x{following[0]:04X},reg5:{op & 0x1F} ; test bits==1")
    if following and op & 0xFFE0 == 0x8140:           # 10000001010ddddd
        return Decoded(2, f"BFCLR #0x{following[0]:04X},reg5:{op & 0x1F}")
    if following and op & 0xFFE0 == 0x8540:           # 10000101010ddddd
        return Decoded(2, f"BFCHG #0x{following[0]:04X},reg5:{op & 0x1F}")
    if op == 0x4E44 and following:                    # 0100111001000100
        return Decoded(2, f"DEC.W X:0x{following[0]:04X}")

    return Decoded(1, f".word 0x{op:04X}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("image", type=Path)
    parser.add_argument("--byte-base", type=lambda value: int(value, 0), required=True)
    parser.add_argument("--start", type=lambda value: int(value, 0))
    parser.add_argument("--end", type=lambda value: int(value, 0))
    parser.add_argument("--calls-only", action="store_true")
    args = parser.parse_args()

    data = args.image.read_bytes()
    if len(data) & 1:
        raise ValueError("Program image must contain whole 16-bit words")
    words = [int.from_bytes(data[i : i + 2], "little") for i in range(0, len(data), 2)]
    pc_base = args.byte_base // 2
    start = pc_base if args.start is None else args.start
    end = pc_base + len(words) if args.end is None else args.end
    index = max(0, start - pc_base)
    limit = min(len(words), end - pc_base)

    while index < limit:
        pc = pc_base + index
        insn = decode(words, index, pc)
        if index + insn.size > len(words):
            insn = Decoded(1, f".word 0x{words[index]:04X}")
        if not args.calls_only or insn.text.startswith(("JSR", "BSR")):
            raw = " ".join(f"{word:04X}" for word in words[index : index + insn.size])
            print(f"P:0x{pc:05X}  {raw:<19} {insn.text}")
        index += insn.size


if __name__ == "__main__":
    main()
