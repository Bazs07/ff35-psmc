#!/usr/bin/env python3
"""Decode and compare the IPMA AsBuilt feature-bit lookup tables.

The M32R routine at 0x3BD3C (BM5T) / 0x2BC44 (F1FT) searches 64 records.
Each 12-byte record contains a feature selector plus an AsBuilt byte and bit
index.  This script keeps every byte visible until all record fields are named.
"""

from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True)
class Image:
    name: str
    path: Path
    base: int
    table: int


IMAGES = (
    Image(
        "Pre-FL BM5T-14F397-AG",
        Path(r"C:\UCDS_v3\PSMC mod\Pre FL\IPMA\Extracted\BM5T-14F397-AG.block00.0x00020000.bin"),
        0x00020000,
        0x000E0634,
    ),
    Image(
        "FL F1FT-14F397-AG",
        Path(r"C:\UCDS_v3\PSMC mod\FL\IPMA\Extracted\F1FT-14F397-AG.block00.0x00010000.bin"),
        0x00010000,
        0x000D6208,
    ),
)


def records(image: Image) -> list[bytes]:
    data = image.path.read_bytes()
    offset = image.table - image.base
    table = data[offset : offset + 64 * 12]
    if len(table) != 64 * 12:
        raise ValueError(f"Truncated table in {image.path}")
    return [table[i : i + 12] for i in range(0, len(table), 12)]


def describe(index: int, address: int, record: bytes) -> str:
    selector = int.from_bytes(record[0:4], "big")
    # The code uses record[7] as the byte offset and record[11] as bit index.
    return (
        f"{index:02d} 0x{address:08X}  {record.hex(' ')}  "
        f"selector=0x{selector:08X} byte={record[7]:2d} bit={record[11]}"
    )


def main() -> None:
    decoded: list[list[bytes]] = []
    for image in IMAGES:
        rows = records(image)
        decoded.append(rows)
        print(f"\n[{image.name}] table=0x{image.table:08X}")
        for index, record in enumerate(rows):
            print(describe(index, image.table + index * 12, record))

    print("\n[Same selector comparison]")
    pre_by_selector = {int.from_bytes(r[:4], "big"): (i, r) for i, r in enumerate(decoded[0])}
    fl_by_selector = {int.from_bytes(r[:4], "big"): (i, r) for i, r in enumerate(decoded[1])}
    for selector in sorted(pre_by_selector.keys() | fl_by_selector.keys()):
        pre = pre_by_selector.get(selector)
        fl = fl_by_selector.get(selector)
        if pre is None:
            print(f"selector=0x{selector:08X}: FL-only row {fl[0]:02d} {fl[1].hex(' ')}")
        elif fl is None:
            print(f"selector=0x{selector:08X}: Pre-only row {pre[0]:02d} {pre[1].hex(' ')}")
        elif pre[1] != fl[1]:
            print(
                f"selector=0x{selector:08X}: Pre {pre[0]:02d} {pre[1].hex(' ')} | "
                f"FL {fl[0]:02d} {fl[1].hex(' ')}"
            )


if __name__ == "__main__":
    main()
