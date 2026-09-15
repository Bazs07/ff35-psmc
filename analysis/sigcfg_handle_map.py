#!/usr/bin/env python3
"""Align the Pre-FL and FL PSCM SIGCFG (14C386) signal descriptors and emit a
cross-version handle map.

Input: the two decoded descriptor dumps produced by ``pscm_sigcfg_decode.py``
(``pscm_pre_sigcfg_decoded.txt`` / ``pscm_fl_sigcfg_decoded.txt``).  Those dumps
are text and are checked in, so this tool does *not* need the raw firmware
blocks (which are stored via Git-LFS).

Each 10-byte descriptor is: h0 (source handle), group_word (signal bank),
h1 (secondary/validity handle), shift(raw[6]), mask(raw[7]), ctl(raw[8],
one-hot destination selector), flags(raw[9]).

Between Pre-FL (83 descriptors) and FL (85) the *engine* is unchanged but the
handle numbers in banks 7F75/7F74 are relocated and two new fields are
inserted.  We align, per bank, on the version-invariant tuple
(shift, mask, ctl-population-order, flags) and report:
  * the Pre->FL h0/h1 handle remapping,
  * descriptors that exist only in FL (the genuinely new signals),
  * descriptors that exist only in Pre-FL (removed).

The alignment is order-preserving within a bank (a Needleman-Wunsch style LCS
on the invariant tuple), which matches how the FSC generator lays the table out.
"""
from __future__ import annotations
import re, sys
from pathlib import Path
from dataclasses import dataclass

HERE = Path(__file__).resolve().parent

@dataclass(frozen=True)
class Desc:
    idx: int
    off: int
    h0: int
    group: int
    h1: int
    shift: int
    mask: int
    ctl: int
    flags: int
    @property
    def inv(self):
        # version-invariant signature of a field within its bank:
        # what is extracted (shift+mask) and where it is routed (ctl+flags).
        return (self.shift, self.mask, self.flags)

LINE = re.compile(
    r'(\d+) file\+0x([0-9A-Fa-f]+) h0=([0-9A-Fa-f]+) group=([0-9A-Fa-f]+) '
    r'h1=([0-9A-Fa-f]+) data\[(\d+)\] mask=([0-9A-Fa-f]+) ctl=([0-9A-Fa-f]+) '
    r'flags=([0-9A-Fa-f]+)')

def load(path: Path) -> list[Desc]:
    out = []
    for ln in path.read_text().splitlines():
        m = LINE.search(ln)
        if not m:
            continue
        idx, off, h0, g, h1, sh, mask, ctl, fl = m.groups()
        out.append(Desc(int(idx), int(off, 16), int(h0, 16), int(g, 16),
                        int(h1, 16), int(sh), int(mask, 16), int(ctl, 16),
                        int(fl, 16)))
    return out

def lcs_align(a: list[Desc], b: list[Desc]):
    """Order-preserving alignment of two descriptor lists on .inv.
    Returns list of (da|None, db|None)."""
    n, m = len(a), len(b)
    dp = [[0]*(m+1) for _ in range(n+1)]
    for i in range(n-1, -1, -1):
        for j in range(m-1, -1, -1):
            if a[i].inv == b[j].inv:
                dp[i][j] = dp[i+1][j+1] + 1
            else:
                dp[i][j] = max(dp[i+1][j], dp[i][j+1])
    i = j = 0
    pairs = []
    while i < n and j < m:
        if a[i].inv == b[j].inv:
            pairs.append((a[i], b[j])); i += 1; j += 1
        elif dp[i+1][j] >= dp[i][j+1]:
            pairs.append((a[i], None)); i += 1
        else:
            pairs.append((None, b[j])); j += 1
    while i < n:
        pairs.append((a[i], None)); i += 1
    while j < m:
        pairs.append((None, b[j])); j += 1
    return pairs

def main():
    pre = load(HERE / "pscm_pre_sigcfg_decoded.txt")
    fl  = load(HERE / "pscm_fl_sigcfg_decoded.txt")
    banks = sorted({d.group for d in pre} | {d.group for d in fl})
    remap: dict[int, int] = {}
    conflicts: list[str] = []
    new_fields = []
    dropped = []
    print(f"# PSCM 14C386 SIGCFG cross-version handle map")
    print(f"# Pre-FL descriptors={len(pre)}  FL descriptors={len(fl)}\n")
    for bank in banks:
        a = [d for d in pre if d.group == bank]
        b = [d for d in fl if d.group == bank]
        pairs = lcs_align(a, b)
        matched = sum(1 for x, y in pairs if x and y)
        print(f"== bank {bank:04X}  pre={len(a):2d} fl={len(b):2d} matched={matched} ==")
        for x, y in pairs:
            if x and y:
                for pv, fv in ((x.h0, y.h0), (x.h1, y.h1)):
                    if pv == 0 and fv == 0:
                        continue
                    if pv in remap and remap[pv] != fv:
                        conflicts.append(f"{pv:04X}->{remap[pv]:04X} vs ->{fv:04X}")
                    remap[pv] = fv
                tag = "" if (x.h0 == y.h0 and x.h1 == y.h1) else "  <== handle relocated"
                print(f"   PRE {x.h0:04X}/{x.h1:04X}  ->  FL {y.h0:04X}/{y.h1:04X}"
                      f"  [sh{y.shift} mask{y.mask:02X} sel{y.ctl:02X} fl{y.flags:02X}]{tag}")
            elif y and not x:
                new_fields.append(y)
                print(f"   ++ FL-ONLY  h0={y.h0:04X}/{y.h1:04X} idx{y.idx} @0x{y.off:04X}"
                      f"  sh{y.shift} mask{y.mask:02X} sel{y.ctl:02X} fl{y.flags:02X}")
            elif x and not y:
                dropped.append(x)
                print(f"   -- PRE-ONLY h0={x.h0:04X}/{x.h1:04X} idx{x.idx} @0x{x.off:04X}"
                      f"  sh{x.shift} mask{x.mask:02X} sel{x.ctl:02X} fl{x.flags:02X}")
        print()
    def width(mask: int) -> int:
        return bin(mask).count("1") if mask else 16
    print("== net field change per bank (added / removed) ==")
    from collections import defaultdict
    add_by_bank = defaultdict(list)
    rem_by_bank = defaultdict(list)
    for d in new_fields:
        add_by_bank[d.group].append(d)
    for d in dropped:
        rem_by_bank[d.group].append(d)
    for bank in banks:
        a, r = add_by_bank.get(bank, []), rem_by_bank.get(bank, [])
        if not a and not r:
            continue
        print(f"   bank {bank:04X}: +{len(a)} -{len(r)}")
        for d in r:
            print(f"      -- removed  h0={d.h0:04X} {width(d.mask)}-bit "
                  f"(mask{d.mask:02X} sh{d.shift} sel{d.ctl:02X} fl{d.flags:02X})")
        for d in a:
            print(f"      ++ added    h0={d.h0:04X} {width(d.mask)}-bit "
                  f"(mask{d.mask:02X} sh{d.shift} sel{d.ctl:02X} fl{d.flags:02X})")
    print()
    print("== Pre-FL -> FL handle remap (source/validity handles) ==")
    for pv in sorted(remap):
        arrow = "" if pv == remap[pv] else "   (relocated)"
        print(f"   {pv:04X} -> {remap[pv]:04X}{arrow}")
    print(f"\nnew FL-only fields: {len(new_fields)}   dropped Pre-only fields: {len(dropped)}")
    if conflicts:
        print("\n!! handle-remap conflicts (alignment ambiguity):")
        for c in conflicts:
            print("   " + c)
    else:
        print("handle remap is internally consistent (no conflicting mappings).")

if __name__ == "__main__":
    main()

