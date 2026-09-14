#!/usr/bin/env python3
"""Decode and align the 10-byte PSCM SIGCFG signal descriptors."""

from __future__ import annotations

import argparse
import difflib
from pathlib import Path


HEADER_SIZE = 0x56
RECORD_SIZE = 10
FOOTER_SIZE = 2


def records(path: Path) -> tuple[bytes, list[bytes], bytes]:
    data = path.read_bytes()
    body = data[HEADER_SIZE : len(data) - FOOTER_SIZE]
    if len(body) % RECORD_SIZE:
        raise ValueError(f"Unexpected SIGCFG size for {path}: {len(data)}")
    return (
        data[:HEADER_SIZE],
        [body[i : i + RECORD_SIZE] for i in range(0, len(body), RECORD_SIZE)],
        data[-FOOTER_SIZE:],
    )


def describe(record: bytes) -> str:
    words_le = [int.from_bytes(record[i : i + 2], "little") for i in range(0, 10, 2)]
    return " ".join(f"{value:04X}" for value in words_le)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("old", type=Path)
    parser.add_argument("new", type=Path)
    parser.add_argument(
        "--signal-records",
        action="store_true",
        help="compare only the leading signal descriptors (83 Pre / 85 FL)",
    )
    parser.add_argument(
        "--normalize-handles",
        action="store_true",
        help="align descriptors by buffer/mask/flags while ignoring relocated signal handles",
    )
    args = parser.parse_args()
    old_header, old_records, old_footer = records(args.old)
    new_header, new_records, new_footer = records(args.new)
    if args.signal_records:
        old_records = old_records[:83]
        new_records = new_records[:85]
    print(
        f"old_records={len(old_records)} new_records={len(new_records)} "
        f"header_equal={old_header == new_header} footer_equal={old_footer == new_footer}"
    )
    def key(record: bytes):
        if not args.normalize_handles:
            return record
        words = [int.from_bytes(record[i : i + 2], "little") for i in range(0, 10, 2)]
        # words[0] and words[2] are generated/relocated signal handles.  The
        # message buffer, bit extraction field and flags remain semantic.
        return words[1], words[3], words[4]

    matcher = difflib.SequenceMatcher(
        a=[key(record) for record in old_records],
        b=[key(record) for record in new_records],
        autojunk=False,
    )
    for tag, i1, i2, j1, j2 in matcher.get_opcodes():
        if tag == "equal":
            continue
        print(f"{tag} old[{i1}:{i2}] new[{j1}:{j2}]")
        for index in range(i1, i2):
            print(
                f"  - {index:03d} @0x{HEADER_SIZE + index * RECORD_SIZE:04X} "
                f"{describe(old_records[index])}  {old_records[index].hex(' ')}"
            )
        for index in range(j1, j2):
            print(
                f"  + {index:03d} @0x{HEADER_SIZE + index * RECORD_SIZE:04X} "
                f"{describe(new_records[index])}  {new_records[index].hex(' ')}"
            )


if __name__ == "__main__":
    main()
