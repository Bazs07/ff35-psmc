#!/usr/bin/env python3
"""Locate M32192 Full-CAN register references and Ford CAN IDs in IPMA images.

The M32192 stores a standard 11-bit CAN identifier in two message-slot bytes:

    SID0 byte = identifier[10:6]
    SID1 byte = identifier[5:0]

The register bytes therefore contain ``id >> 6`` and ``id & 0x3f``.  This
utility reports that representation as well as ordinary big/little-endian
16/32-bit forms and references to the CAN SFR range (0x00801000-0x008016ff).
It does not modify the firmware.
"""

from __future__ import annotations

import argparse
from pathlib import Path


DEFAULT_IDS = (0x3CA, 0x3CB, 0x3CC, 0x3D8)


def find_all(data: bytes, needle: bytes) -> list[int]:
    hits: list[int] = []
    start = 0
    while True:
        pos = data.find(needle, start)
        if pos < 0:
            return hits
        hits.append(pos)
        start = pos + 1


def hex_context(data: bytes, offset: int, radius: int = 16) -> str:
    lo = max(0, offset - radius)
    hi = min(len(data), offset + radius)
    return f"[{lo:08X}:{hi:08X}] " + data[lo:hi].hex(" ").upper()


def sid_bytes(can_id: int) -> bytes:
    if not 0 <= can_id <= 0x7FF:
        raise ValueError(f"not an 11-bit CAN identifier: 0x{can_id:X}")
    return bytes((can_id >> 6, can_id & 0x3F))


def report_pattern(
    label: str,
    data: bytes,
    image_base: int,
    needle: bytes,
    max_hits: int,
) -> None:
    hits = find_all(data, needle)
    print(f"  {label:<18} {needle.hex(' ').upper():<18} hits={len(hits)}")
    for off in hits[:max_hits]:
        print(f"    file+0x{off:08X} cpu=0x{image_base + off:08X} {hex_context(data, off)}")
    if len(hits) > max_hits:
        print(f"    ... {len(hits) - max_hits} more")


def report_sfr_candidates(data: bytes, image_base: int, max_hits: int) -> None:
    candidates: list[tuple[int, str, int]] = []
    for off in range(len(data) - 3):
        word = int.from_bytes(data[off : off + 4], "big")
        forms = (
            ("be32", word),
            ("be32>>8", word >> 8),
        )
        for kind, value in forms:
            if 0x00801000 <= value <= 0x008016FF:
                candidates.append((off, kind, value))
        # M32R ld24: 1110rrrr aaaaaaaa aaaaaaaa aaaaaaaa
        if data[off] & 0xF0 == 0xE0:
            value = int.from_bytes(data[off + 1 : off + 4], "big")
            if 0x00801000 <= value <= 0x008016FF:
                candidates.append((off, f"ld24 r{data[off] & 0xF}", value))

    # Overlapping forms can describe the same bytes.  Keep distinct semantics,
    # but make the listing deterministic and compact.
    unique = sorted(set(candidates))
    print(f"\nM32192 CAN SFR candidates: {len(unique)}")
    for off, kind, value in unique[:max_hits]:
        print(
            f"  file+0x{off:08X} cpu=0x{image_base + off:08X} "
            f"{kind:<9} -> 0x{value:08X} {hex_context(data, off)}"
        )
    if len(unique) > max_hits:
        print(f"  ... {len(unique) - max_hits} more")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("image", type=Path)
    parser.add_argument("--base", type=lambda s: int(s, 0), required=True)
    parser.add_argument(
        "--id",
        dest="ids",
        action="append",
        type=lambda s: int(s, 0),
        help="11-bit CAN ID; repeat as needed (defaults: 0x3CA,0x3CB,0x3CC,0x3D8)",
    )
    parser.add_argument("--max-hits", type=int, default=20)
    args = parser.parse_args()

    data = args.image.read_bytes()
    ids = tuple(args.ids) if args.ids else DEFAULT_IDS
    print(f"image={args.image}")
    print(f"size=0x{len(data):X} base=0x{args.base:X}")

    for can_id in ids:
        print(f"\nCAN ID 0x{can_id:03X}")
        report_pattern("M32192 SID", data, args.base, sid_bytes(can_id), args.max_hits)
        report_pattern("16-bit BE", data, args.base, can_id.to_bytes(2, "big"), args.max_hits)
        report_pattern("16-bit LE", data, args.base, can_id.to_bytes(2, "little"), args.max_hits)
        report_pattern("32-bit BE", data, args.base, can_id.to_bytes(4, "big"), args.max_hits)
        report_pattern("32-bit LE", data, args.base, can_id.to_bytes(4, "little"), args.max_hits)

    report_sfr_candidates(data, args.base, args.max_hits)


if __name__ == "__main__":
    main()
