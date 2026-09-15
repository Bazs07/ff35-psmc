#!/usr/bin/env python3
"""Enumerate the Focus IPMA calibration (F1FT-14F398-AG) variant records.

Usage: ipma_cal_records.py <F1FT-14F398-AG.block00.0x00902000.bin>

The calibration is a big-endian float container loaded at 0x902000 with a
"BootNfo\\0" header, magic 0xAA5AA555 at +0x0C, and no payload CRC (so it is
runtime-editable). It holds **13 variant records at stride 0x624 (1572 B)**; the
live one is chosen by the record-selection chain documented in
ff35-ipma/docs/CALIBRATION_RECORD_SELECTION.md (config key -> descriptor index
0..12).

Key per-record LKA fields (record-relative offsets, verified by cross-record diff):
    +0x1B8  LKA activation speed threshold (km/h)   [the 11x-at-stride-0x624 "60.0"]
    +0x1B0  LKA lower/hysteresis speed (km/h)
    +0x084  a secondary window speed (6.0 or 65.0 depending on sub-type)
"""
import struct, sys

BASE = 0x902000
STRIDE = 0x624
NREC = 13

def main():
    b = open(sys.argv[1], 'rb').read()
    def f(off): return struct.unpack_from('>f', b, off)[0] if 0 <= off <= len(b)-4 else float('nan')
    print(f"cal blob {len(b)} B, base 0x{BASE:X}, magic@+0xC=0x{struct.unpack_from('>I',b,0xC)[0]:08X}")
    print(f"{NREC} records @ stride 0x{STRIDE:X}\n")
    print("rec  @addr      LKA_thr(+1B8)  lower(+1B0)  +0x84   note")
    for k in range(NREC):
        ro = k*STRIDE
        thr, lo, sec = f(ro+0x1B8), f(ro+0x1B0), f(ro+0x84)
        note = ""
        if abs(thr) < 1.0: note = "unused/zero"
        elif thr == 150: note = "special (non-standard record)"
        elif thr != 60: note = f"*** LOW-THRESHOLD VARIANT ({thr:.0f} km/h) ***"
        print(f" {k:2d}  0x{BASE+ro:06X}   {thr:7.2f}       {lo:6.2f}     {sec:6.2f}  {note}")
    variants = {k: f(k*STRIDE+0x1B8) for k in range(NREC)}
    print("\nLKA-threshold set across records:", sorted({round(v,1) for v in variants.values() if v>=1.0}))
    print("records with LKA threshold != 60 km/h:",
          [(k, round(variants[k],1)) for k in range(NREC) if abs(variants[k])>=1.0 and variants[k]!=60.0])

if __name__ == "__main__":
    main()
