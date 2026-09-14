#!/usr/bin/env python3
"""Find direct DSP56800E absolute X-memory references in PSCM program images.

PSCM program words are little-endian in the VBF blocks.  Program addresses are
word addresses, while VBF segment addresses are byte addresses.  The decoder is
deliberately narrow: it recognizes the absolute MOVE.W forms needed to prove
direct reads/writes of signal-buffer addresses and shows undecoded neighbours.
"""

from __future__ import annotations

import argparse
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True)
class Image:
    name: str
    path: Path
    byte_base: int


IMAGES = (
    Image(
        "Pre-FL BV6T-14C217-AF",
        Path(r"C:\UCDS_v3\PSMC mod\Pre FL\PSMC\Extracted\BV6T-14C217-AF.block01.0x0001C000.bin"),
        0x0001C000,
    ),
    Image(
        "FL CV6T-14C217-AR",
        Path(r"C:\UCDS_v3\PSMC mod\FL\PSMC\Extracted\CV6T-14C217-AR.block01.0x0001C000.bin"),
        0x0001C000,
    ),
)


def words(path: Path) -> list[int]:
    data = path.read_bytes()
    if len(data) & 1:
        raise ValueError(f"Odd-sized program block: {path}")
    return [int.from_bytes(data[i : i + 2], "little") for i in range(0, len(data), 2)]


def decode_absolute_move(opcode: int, address: int, following: int | None) -> str | None:
    reg = (opcode >> 7) & 0x1F
    if opcode & 0xF07F == 0xF07C:
        return f"MOVE.W X:0x{address:04X},reg5({reg})"
    if opcode & 0xF07F == 0xD07C:
        return f"MOVE.W reg5({reg}),X:0x{address:04X}"
    if opcode == 0xD67C:
        return f"MOVE.W X:0x{address:04X},Y"
    if opcode == 0x8654:
        suffix = "<missing>" if following is None else f"0x{following:04X}"
        return f"MOVE.W #{suffix},X:0x{address:04X}"
    return None


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "targets",
        nargs="*",
        type=lambda value: int(value, 0),
        default=[0x7F74, 0x7F75],
        help="X-memory word addresses (default: 0x7F74 0x7F75)",
    )
    parser.add_argument(
        "--all",
        action="store_true",
        help="show every recognized absolute MOVE.W instead of filtering targets",
    )
    args = parser.parse_args()
    targets = set(args.targets)

    for image in IMAGES:
        program = words(image.path)
        print(f"\n[{image.name}]")
        found = 0
        for index, value in enumerate(program):
            if not args.all and value not in targets:
                continue
            cpu_pc = image.byte_base // 2 + index
            prev = program[index - 1] if index else 0
            next_word = program[index + 1] if index + 1 < len(program) else None
            decoded = decode_absolute_move(prev, value, next_word)
            if decoded is None:
                continue
            found += 1
            raw = f"{prev:04X} {value:04X}"
            if prev == 0x8654 and next_word is not None:
                raw += f" {next_word:04X}"
            print(f"P:0x{cpu_pc - 1:05X}  {raw:<14} {decoded}")
        if not found:
            print("No recognized direct absolute MOVE.W references.")


if __name__ == "__main__":
    main()
