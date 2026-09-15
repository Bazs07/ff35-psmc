#!/usr/bin/env python3
"""Enumerate the Focus IPMA As-Built configuration-parameter descriptor table.

The config accessor 0x8904C (see ipma_cal_record_selection.py) fetches a config
parameter by numeric id from a 16-byte-entry descriptor table at 0xE2448. This
tool walks that table and dumps every valid parameter: its length, the default
template it points at (@+8), and the group field — recovering, with no firmware
blob, a map of the IPMA's As-Built configuration parameters. Reads only the
checked-in Focus M32R listing (`ipma_fl_m32r.lst`).

16-byte descriptor layout (empirical):
    [0:4]   parameter hash/id word
    [4:6]   length (bytes)                 -> accessor reads via @(0x4)
    [6:8]   0xFFFF marker
    [8:12]  default-template pointer        -> accessor reads via @(0x8)
    [12:14] group/section word (0x29 dominates; 0x20/0x21 for identity/DID)
    [14]    sub-group
    [15]    index within group

Anchors proven elsewhere:
  * identity block carries part-number defaults (0x000 "ADCGmbH",
    0x0CB "BM5T-19H406-AA", 0x0CC "BM5T-14F403-AA", 0x116 "BM5T-14F397-BA").
  * 12-byte params (0x022-0x024, 0x0BE, 0x0C5/0x0C6/0x0C8, 0x117) are the
    As-Built config DIDs; 0x117 (+0x119) is the calibration-selection key.
  * DE03 (= As-Built 706-04-01, the LCA config) is the 12-byte block held at
    RAM 0x82D8F3 (config struct 0x82D768 + 0x18B), read by getter 0xB32A4.
"""
from __future__ import annotations
import re
from pathlib import Path
from collections import Counter

LST = Path(__file__).resolve().parent / "ipma_fl_m32r.lst"
LST_PRE = Path(__file__).resolve().parent / "ipma_pre_m32r.lst"
TABLE = 0xE2448        # FL config-descriptor table base
TABLE_PRE = 0xE98C0    # Pre-FL config-descriptor table base (same accessor idiom)
_ROW = re.compile(r'^0x([0-9A-Fa-f]{8})\s+((?:[0-9a-f]{2} ){3}[0-9a-f]{2})')


def load_mem(path):
    mem = {}
    for ln in path.read_text(errors="replace").splitlines():
        m = _ROW.match(ln)
        if m:
            a = int(m.group(1), 16)
            for i, t in enumerate(m.group(2).split()):
                mem[a + i] = int(t, 16)
    return mem


def main():
    mem = load_mem(LST)
    def has(s, n): return all(s + i in mem for s2 in (s,) for i in range(n))
    def rd(s, n): return bytes(mem.get(s + i, 0) for i in range(n))
    def asc(b): return ''.join(chr(c) if 32 <= c < 127 else '.' for c in b)

    rows = []
    for cid in range(0x300):
        e = TABLE + cid * 16
        if not has(e, 16):
            break
        d = rd(e, 16)
        length = int.from_bytes(d[4:6], 'big')
        marker = int.from_bytes(d[6:8], 'big')
        dptr = int.from_bytes(d[8:12], 'big')
        if marker == 0xFFFF and 0 < length <= 64 and 0xE0000 <= dptr <= 0xF4E38:
            rows.append((cid, d, length, dptr))

    print(f"IPMA config-param table @0x{TABLE:X}: {len(rows)} valid parameters\n")
    print("cid   len  group  default-template")
    for cid, d, length, dptr in rows:
        t = rd(dptr, min(length, 20))
        grp = int.from_bytes(d[12:14], 'big')
        s = f"|{asc(t)}|" if any(32 <= c < 127 for c in t) else t[:8].hex(' ')
        print(f"0x{cid:03X} {length:3d}   0x{grp:02X}   {s}")

    print("\nASCII/part-number defaults:")
    for cid, d, length, dptr in rows:
        t = rd(dptr, min(length, 20))
        pr = sum(1 for c in t if 32 <= c < 127)
        if pr >= 4 and pr >= len(t) * 0.6:
            print(f"  0x{cid:03X} |{asc(t)}|")
    print("\n12-byte As-Built config-DID params:", 
          [f"0x{cid:03X}" for cid, d, l, dp in rows if l == 12])
    print("group-word histogram:", dict(sorted(Counter(int.from_bytes(d[12:14],'big') for _,d,_,_ in rows).items())))


def enum(mem, base):
    def has(s, n): return all(s + i in mem for i in range(n))
    def rd(s, n): return bytes(mem.get(s + i, 0) for i in range(n))
    lo, hi = min(mem), max(mem)
    out = {}
    for cid in range(0x300):
        e = base + cid * 16
        if not has(e, 16):
            break
        d = rd(e, 16)
        ln = int.from_bytes(d[4:6], "big"); mk = int.from_bytes(d[6:8], "big"); dp = int.from_bytes(d[8:12], "big")
        if mk == 0xFFFF and 0 < ln <= 64 and lo <= dp <= hi:
            out[cid] = (ln, int.from_bytes(d[12:14], "big"), rd(dp, min(ln, 20)))
    return out


def diff():
    fl = enum(load_mem(LST), TABLE)
    pre = enum(load_mem(LST_PRE), TABLE_PRE)
    print(f"Pre-FL params={len(pre)} (table @0x{TABLE_PRE:X})  FL params={len(fl)} (table @0x{TABLE:X})")
    add = sorted(set(fl) - set(pre)); rem = sorted(set(pre) - set(fl))
    lench = [c for c in fl if c in pre and fl[c][0] != pre[c][0]]
    print("FL-only config params:", [f"0x{c:03X}" for c in add])
    print("Pre-FL-only config params:", [f"0x{c:03X}" for c in rem])
    print("length-changed params:", [(f"0x{c:03X}", pre[c][0], "->", fl[c][0]) for c in lench])
    for c in add:
        ln, grp, tmpl = fl[c]
        print(f"  new FL param 0x{c:03X}: len={ln} group=0x{grp:02X} default={tmpl.hex(' ')}")


if __name__ == "__main__":
    main()
    print("\n===== Pre-FL vs FL config-table diff =====")
    diff()
