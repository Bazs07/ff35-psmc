#!/usr/bin/env python3
"""Find integer constants and short byte patterns in extracted firmware blocks."""

from __future__ import annotations

import argparse
from pathlib import Path


def find_all(data: bytes, needle: bytes):
    start = 0
    while True:
        pos = data.find(needle, start)
        if pos < 0:
            return
        yield pos
        start = pos + 1


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("files", nargs="+", type=Path)
    parser.add_argument(
        "--values",
        default="0x3CA,0x3CB,0x3CC,0x3A8,0x3AB,0x082,0xDE00,0xDE01,0xDE02,0xDE03",
    )
    args = parser.parse_args()
    values = [int(value, 0) for value in args.values.split(",")]

    for path in args.files:
        data = path.read_bytes()
        print(f"FILE {path} size=0x{len(data):X}")
        for value in values:
            widths = sorted({2, 4, max(1, (value.bit_length() + 7) // 8)})
            variants: list[tuple[str, bytes]] = []
            for width in widths:
                if value >= 1 << (width * 8):
                    continue
                variants.append((f"be{width * 8}", value.to_bytes(width, "big")))
                variants.append((f"le{width * 8}", value.to_bytes(width, "little")))
            seen: set[tuple[int, bytes]] = set()
            hits: list[str] = []
            for label, needle in variants:
                for offset in find_all(data, needle):
                    key = (offset, needle)
                    if key in seen:
                        continue
                    seen.add(key)
                    lo = max(0, offset - 8)
                    hi = min(len(data), offset + len(needle) + 8)
                    hits.append(
                        f"{label}@0x{offset:X} [{data[lo:hi].hex(' ')}]"
                    )
            if hits:
                print(f"  0x{value:X}: " + "; ".join(hits[:40]))
                if len(hits) > 40:
                    print(f"    ... {len(hits) - 40} more")


if __name__ == "__main__":
    main()
