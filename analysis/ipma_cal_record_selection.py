#!/usr/bin/env python3
"""Reverse-engineer the Focus IPMA calibration record-selection chain end to end.

Prior state (docs/CALIBRATION_RECORD_SELECTION.md): the consumer at 0x000AD1B4
reads the live descriptor index as the byte at (arg0+7), but where that struct's
byte came from was untraced ("the runtime value is not statically known").

This tool closes that gap using only the checked-in Focus M32R listing
(`ipma_fl_m32r.lst`) — no firmware blob needed. The chain, recovered by reading
the callers of 0xAD1B4 (at 0xB3790/0xB37B4, both passing arg0 = ctx+0x1B4) and
the populator 0xB5AD8, is a two-stage table lookup keyed by a config identity:

  ctx[0x1A8..] holds a 7-byte config key  (6 bytes + 1 byte at +8),
     populated from the module config/NVM area via 0x2CD04 (reads 0x804150,
     0x82FFA3/4 — the persistent config region), i.e. an As-Built-derived
     vehicle identity, not a live sensor value.
  0xB5AD8 searches an 8-byte-stride table (tableA @0xE89ED, 380 entries) for the
     entry whose first 6 bytes == key[0:6] and byte[6] == key1; the matched
     entry's byte[7] is an index r8.
  r8 indexes a 12-byte-record table (tableB @0xE8824); that record is copied to
     ctx[0x1B4], and its byte[7] is the calibration DESCRIPTOR INDEX that
     0xAD1B4 then uses to pick the live calibration record.

Result: the live descriptor index is a *pure, deterministic function* of the
car's 6+1-byte config key, and the whole reachable set is enumerable here.
"""
from __future__ import annotations
import re
from pathlib import Path
from collections import Counter, defaultdict

LST = Path(__file__).resolve().parent / "ipma_fl_m32r.lst"
TABLE_A = 0xE89ED   # 8-byte entries: [key0..key5][key6][result_index r8]
TABLE_A_N = 380
TABLE_B = 0xE8824   # 12-byte records; byte[7] = calibration descriptor index

_ROW = re.compile(r'^0x([0-9A-Fa-f]{8})\s+((?:[0-9a-f]{2} ){3}[0-9a-f]{2})')


def load_mem(path: Path) -> dict[int, int]:
    mem: dict[int, int] = {}
    for ln in path.read_text(errors="replace").splitlines():
        m = _ROW.match(ln)
        if not m:
            continue
        addr = int(m.group(1), 16)
        for i, tok in enumerate(m.group(2).split()):
            mem[addr + i] = int(tok, 16)
    return mem


def rd(mem, start, length):
    return bytes(mem.get(start + i, 0) for i in range(length))


def missing(mem, start, length):
    return sum(1 for i in range(length) if start + i not in mem)


def main() -> None:
    mem = load_mem(LST)
    assert missing(mem, TABLE_A, TABLE_A_N * 8) == 0, "tableA not fully present in listing"

    a_entries = [rd(mem, TABLE_A + i * 8, 8) for i in range(TABLE_A_N)]

    # Compose: 7-byte key -> r8 -> tableB[r8].byte7 = descriptor index
    comp: dict[tuple[str, int], int] = {}
    di_hist: Counter[int] = Counter()
    for e in a_entries:
        r8 = e[7]
        di = rd(mem, TABLE_B + r8 * 12, 12)[7]
        comp[(e[:6].hex(" "), e[6])] = di
        di_hist[di] += 1

    prefixes: dict[str, dict[int, int]] = defaultdict(dict)
    for (k6, k1), di in comp.items():
        prefixes[k6][k1] = di

    print(f"tableA @0x{TABLE_A:X} ({TABLE_A_N}x8)  tableB @0x{TABLE_B:X} (12B records)")
    print(f"distinct 6-byte config prefixes : {len(prefixes)}")
    print(f"reachable descriptor indices    : {sorted(di_hist)}  (13 total)")
    print(f"descriptor-index histogram      : {dict(sorted(di_hist.items()))}")
    print()
    print("config prefix (6B) | key1 -> descriptor index")
    for k6 in sorted(prefixes):
        row = dict(sorted(prefixes[k6].items()))
        note = "" if len(set(row.values())) == 1 else "   <- key1 low-bit selects a sub-variant"
        print(f"  {k6} | {row}{note}")


if __name__ == "__main__":
    main()
