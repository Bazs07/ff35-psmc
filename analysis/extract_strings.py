#!/usr/bin/env python3
"""Extract addressed ASCII and UTF-16 strings from firmware binaries."""

from __future__ import annotations

import argparse
import json
import re
from pathlib import Path


ASCII_RE_TEMPLATE = rb"[\x20-\x7e]{%d,}"


def strings(path: Path, minimum: int) -> list[dict[str, object]]:
    data = path.read_bytes()
    result: list[dict[str, object]] = []
    for match in re.finditer(ASCII_RE_TEMPLATE % minimum, data):
        result.append(
            {
                "offset": match.start(),
                "encoding": "ascii",
                "text": match.group().decode("ascii"),
            }
        )
    # Both byte orders occur in embedded targets.  Keep only strings with at
    # least ``minimum`` visible characters and trim the zero interleaving.
    for endian, pattern, char_index in (
        ("utf16le", rb"(?:[\x20-\x7e]\x00){%d,}" % minimum, 0),
        ("utf16be", rb"(?:\x00[\x20-\x7e]){%d,}" % minimum, 1),
    ):
        for match in re.finditer(pattern, data):
            value = match.group()[char_index::2].decode("ascii")
            result.append(
                {"offset": match.start(), "encoding": endian, "text": value}
            )
    return sorted(result, key=lambda item: (item["offset"], item["encoding"]))


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("files", nargs="+", type=Path)
    parser.add_argument("--minimum", type=int, default=5)
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()
    for path in args.files:
        found = strings(path, args.minimum)
        if args.json:
            print(json.dumps({"file": str(path), "strings": found}))
            continue
        print(f"FILE {path}")
        for item in found:
            print(
                f"0x{item['offset']:08X}\t{item['encoding']}\t{item['text']}"
            )


if __name__ == "__main__":
    main()
