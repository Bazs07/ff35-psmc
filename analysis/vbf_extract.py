#!/usr/bin/env python3
"""Minimal Ford/Volvo VBF 2.x inspector and extractor.

The textual header is followed by one or more binary records:
    uint32_be address, uint32_be length, payload[length], uint16_be checksum

The script deliberately never modifies the source VBF.  It can emit the
payload blocks and a JSON manifest for repeatable firmware comparison.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path


def find_header_end(raw: bytes) -> int:
    """Return the first byte after the top-level ``header { ... }`` block."""
    text = raw.decode("latin-1")
    match = re.search(r"\bheader\s*\{", text)
    if not match:
        raise ValueError("VBF header block not found")

    depth = 1
    i = match.end()
    in_string = False
    in_line_comment = False
    in_block_comment = False
    escaped = False

    while i < len(text):
        ch = text[i]
        nxt = text[i + 1] if i + 1 < len(text) else ""

        if in_line_comment:
            if ch in "\r\n":
                in_line_comment = False
            i += 1
            continue
        if in_block_comment:
            if ch == "*" and nxt == "/":
                in_block_comment = False
                i += 2
            else:
                i += 1
            continue
        if in_string:
            if escaped:
                escaped = False
            elif ch == "\\":
                escaped = True
            elif ch == '"':
                in_string = False
            i += 1
            continue

        if ch == "/" and nxt == "/":
            in_line_comment = True
            i += 2
            continue
        if ch == "/" and nxt == "*":
            in_block_comment = True
            i += 2
            continue
        if ch == '"':
            in_string = True
            i += 1
            continue
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                end = i + 1
                while end < len(raw) and raw[end] in b" \t\r\n":
                    end += 1
                return end
        i += 1

    raise ValueError("Unterminated VBF header block")


def parse_header(header: str) -> dict[str, object]:
    def value(pattern: str) -> str | None:
        m = re.search(pattern, header, re.IGNORECASE | re.MULTILINE)
        return m.group(1) if m else None

    part = value(r'\bsw_part_number\s*=\s*"([^"]+)"')
    if not part:
        desc = value(r'\bdescription\s*=\s*\{\s*"([^"]+)"')
        part = desc
    return {
        "vbf_version": value(r"\bvbf_version\s*=\s*([^;]+)"),
        "part_number": part,
        "part_type": value(r"\bsw_part_type\s*=\s*([^;]+)"),
        "ecu_address": value(r"\becu_address\s*=\s*([^;]+)"),
        "data_format_identifier": value(
            r"\bdata_format_identifier\s*=\s*([^;]+)"
        ),
        "file_checksum": value(r"\bfile_checksum\s*=\s*([^;]+)"),
    }


def checksum_candidates(payload: bytes) -> dict[str, int]:
    return {
        "sum16": sum(payload) & 0xFFFF,
        "twos_complement_sum16": (-sum(payload)) & 0xFFFF,
        "ones_complement_sum16": (~sum(payload)) & 0xFFFF,
    }


def parse_records(raw: bytes, offset: int) -> tuple[list[dict[str, object]], int]:
    records: list[dict[str, object]] = []
    cursor = offset
    while cursor + 8 <= len(raw):
        address = int.from_bytes(raw[cursor : cursor + 4], "big")
        length = int.from_bytes(raw[cursor + 4 : cursor + 8], "big")
        payload_start = cursor + 8
        payload_end = payload_start + length
        checksum_end = payload_end + 2
        if length == 0 or checksum_end > len(raw):
            break
        payload = raw[payload_start:payload_end]
        stored_checksum = int.from_bytes(raw[payload_end:checksum_end], "big")
        candidates = checksum_candidates(payload)
        records.append(
            {
                "index": len(records),
                "record_offset": cursor,
                "address": address,
                "length": length,
                "payload_offset": payload_start,
                "stored_checksum": stored_checksum,
                "checksum_matches": [
                    name for name, val in candidates.items() if val == stored_checksum
                ],
                "sha256": hashlib.sha256(payload).hexdigest(),
                "payload": payload,
            }
        )
        cursor = checksum_end
    return records, cursor


def inspect(path: Path, output_dir: Path | None) -> dict[str, object]:
    raw = path.read_bytes()
    header_end = find_header_end(raw)
    header_text = raw[:header_end].decode("latin-1")
    records, parsed_end = parse_records(raw, header_end)

    result: dict[str, object] = {
        "source": str(path.resolve()),
        "source_size": len(raw),
        "source_sha256": hashlib.sha256(raw).hexdigest(),
        "header_end": header_end,
        "header": parse_header(header_text),
        "records": [
            {k: v for k, v in record.items() if k != "payload"}
            for record in records
        ],
        "parsed_end": parsed_end,
        "trailing_bytes": len(raw) - parsed_end,
        "trailing_hex": raw[parsed_end:].hex(),
    }

    if output_dir is not None:
        output_dir.mkdir(parents=True, exist_ok=True)
        stem = path.stem
        (output_dir / f"{stem}.header.txt").write_text(header_text, encoding="utf-8")
        for record in records:
            name = (
                f"{stem}.block{record['index']:02d}."
                f"0x{record['address']:08X}.bin"
            )
            (output_dir / name).write_bytes(record["payload"])
        (output_dir / f"{stem}.manifest.json").write_text(
            json.dumps(result, indent=2), encoding="utf-8"
        )
    return result


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("vbf", nargs="+", type=Path)
    parser.add_argument("--output-dir", type=Path)
    args = parser.parse_args()

    all_results = [inspect(path, args.output_dir) for path in args.vbf]
    print(json.dumps(all_results, indent=2))


if __name__ == "__main__":
    main()
