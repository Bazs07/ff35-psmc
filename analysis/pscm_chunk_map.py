#!/usr/bin/env python3
"""Map exact relocated PSCM code chunks and report unmatched source ranges.

This is a triage aid, not a semantic diff.  It is useful before the 56800E
decoder is complete because identical code moved by a linker can still be
recognized.  Absolute calls/constants break exact runs, so small gaps are
expected even inside homologous functions.
"""

from __future__ import annotations

import argparse
from collections import Counter, defaultdict
from pathlib import Path


PRE = Path(r"C:\UCDS_v3\PSMC mod\Pre FL\PSMC\Extracted\BV6T-14C217-AF.block01.0x0001C000.bin")
FL = Path(r"C:\UCDS_v3\PSMC mod\FL\PSMC\Extracted\CV6T-14C217-AR.block01.0x0001C000.bin")
BYTE_BASE = 0x0001C000


def useful(chunk: bytes) -> bool:
    return chunk not in {bytes(len(chunk)), b"\xff" * len(chunk)} and len(set(chunk)) > 2


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--window", type=int, default=32)
    parser.add_argument("--step", type=int, default=2)
    parser.add_argument("--min-unmatched", type=lambda x: int(x, 0), default=0x100)
    args = parser.parse_args()

    pre = PRE.read_bytes()
    fl = FL.read_bytes()
    positions: dict[bytes, list[int]] = defaultdict(list)
    for offset in range(0, len(fl) - args.window + 1, args.step):
        chunk = fl[offset : offset + args.window]
        if useful(chunk):
            positions[chunk].append(offset)

    mapping: dict[int, int] = {}
    deltas: Counter[int] = Counter()
    for offset in range(0, len(pre) - args.window + 1, args.step):
        chunk = pre[offset : offset + args.window]
        matches = positions.get(chunk)
        if matches and len(matches) == 1:
            mapping[offset] = matches[0]
            deltas[matches[0] - offset] += 1

    print(f"pre={len(pre):#x} fl={len(fl):#x} window={args.window} step={args.step}")
    print(f"unique exact windows={len(mapping)} ({100*len(mapping)/((len(pre)-args.window)//args.step+1):.2f}%)")
    print("top relocation deltas (byte offsets within block):")
    for delta, count in deltas.most_common(12):
        print(f"  {delta:+#x}: {count} windows")

    matched = bytearray(len(pre))
    for offset in mapping:
        matched[offset : offset + args.window] = b"\x01" * args.window

    print(f"unmatched Pre-FL byte ranges >= {args.min_unmatched:#x}:")
    start = None
    for index, value in enumerate(matched + b"\x01"):
        if value == 0 and start is None:
            start = index
        elif value and start is not None:
            if index - start >= args.min_unmatched and useful(pre[start:index]):
                vbf_start = BYTE_BASE + start
                vbf_end = BYTE_BASE + index
                print(
                    f"  file+0x{start:05X}..0x{index:05X} ({index-start:#x})  "
                    f"VBF 0x{vbf_start:06X}..0x{vbf_end:06X}  "
                    f"P 0x{vbf_start//2:05X}..0x{vbf_end//2:05X}"
                )
            start = None


if __name__ == "__main__":
    main()
