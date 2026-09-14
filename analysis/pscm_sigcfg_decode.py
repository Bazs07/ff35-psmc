#!/usr/bin/env python3
"""Inspect the leading Ford PSCM SIGCFG signal-descriptor table.

The 14C386 payload begins with a 0x56-byte root structure followed by fixed
10-byte signal descriptors.  Comparison of the Pre-FL and FL images shows that
the last four bytes of each descriptor contain a byte offset, a bit mask, and
two control bytes.  The names of the remaining fields are intentionally kept
conservative until the generated FSC runtime is decoded completely.

This tool is read-only.  It can list descriptors, group them by their second
word, and search for the three masks used by Lane_Assist_Data1 (0x3CA):
bits 7:5, 4:2 and 1:0 -> E0, 1C and 03.
"""

from __future__ import annotations

import argparse
from collections import defaultdict
from dataclasses import dataclass
from pathlib import Path


HEADER_SIZE = 0x56
RECORD_SIZE = 10


@dataclass(frozen=True)
class SignalDescriptor:
    index: int
    file_offset: int
    handle0: int
    group_word: int
    handle1: int
    byte_offset: int
    bit_mask: int
    control: int
    flags: int

    @classmethod
    def from_bytes(cls, index: int, raw: bytes) -> "SignalDescriptor":
        if len(raw) != RECORD_SIZE:
            raise ValueError(f"descriptor {index} has {len(raw)} bytes")
        return cls(
            index=index,
            file_offset=HEADER_SIZE + index * RECORD_SIZE,
            handle0=int.from_bytes(raw[0:2], "little"),
            group_word=int.from_bytes(raw[2:4], "little"),
            handle1=int.from_bytes(raw[4:6], "little"),
            byte_offset=raw[6],
            bit_mask=raw[7],
            control=raw[8],
            flags=raw[9],
        )

    def render(self) -> str:
        return (
            f"{self.index:03d} file+0x{self.file_offset:04X} "
            f"h0={self.handle0:04X} group={self.group_word:04X} "
            f"h1={self.handle1:04X} data[{self.byte_offset}] "
            f"mask={self.bit_mask:02X} ctl={self.control:02X} flags={self.flags:02X}"
        )


def read_descriptors(path: Path, count: int) -> tuple[bytes, list[SignalDescriptor]]:
    data = path.read_bytes()
    end = HEADER_SIZE + count * RECORD_SIZE
    if len(data) < end:
        raise ValueError(f"{path} is too short for {count} descriptors")
    result = []
    for index in range(count):
        start = HEADER_SIZE + index * RECORD_SIZE
        result.append(SignalDescriptor.from_bytes(index, data[start : start + RECORD_SIZE]))
    return data[:HEADER_SIZE], result


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("image", type=Path)
    parser.add_argument("--count", type=int, required=True)
    parser.add_argument("--list", action="store_true", dest="list_all")
    parser.add_argument("--groups", action="store_true")
    parser.add_argument(
        "--find-lad1",
        action="store_true",
        help="find E0/1C/03 mask triples sharing a group word and byte offset",
    )
    args = parser.parse_args()

    header, descriptors = read_descriptors(args.image, args.count)
    header_words = [int.from_bytes(header[i : i + 2], "little") for i in range(0, len(header), 2)]
    print(f"image={args.image} descriptors={len(descriptors)}")
    print("root_words=" + " ".join(f"{word:04X}" for word in header_words))

    if args.list_all:
        for descriptor in descriptors:
            print(descriptor.render())

    grouped: dict[int, list[SignalDescriptor]] = defaultdict(list)
    for descriptor in descriptors:
        grouped[descriptor.group_word].append(descriptor)

    if args.groups:
        for group_word, members in sorted(grouped.items()):
            print(f"\ngroup={group_word:04X} members={len(members)}")
            for descriptor in members:
                print("  " + descriptor.render())

    if args.find_lad1:
        required = {0xE0, 0x1C, 0x03}
        print("\nLane_Assist_Data1 mask-triple candidates:")
        found = 0
        for group_word, members in sorted(grouped.items()):
            by_offset: dict[int, list[SignalDescriptor]] = defaultdict(list)
            for descriptor in members:
                by_offset[descriptor.byte_offset].append(descriptor)
            for byte_offset, at_offset in sorted(by_offset.items()):
                masks = {descriptor.bit_mask for descriptor in at_offset}
                if required <= masks:
                    found += 1
                    print(f"group={group_word:04X} data[{byte_offset}] masks={sorted(masks)}")
                    for descriptor in at_offset:
                        if descriptor.bit_mask in required:
                            print("  " + descriptor.render())
        if not found:
            print("  no exact E0/1C/03 triple")


if __name__ == "__main__":
    main()
