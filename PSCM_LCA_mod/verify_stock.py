#!/usr/bin/env python3
"""
verify_stock.py — self-check that the patch/checksum implementation is correct,
run against the UNMODIFIED stock firmware. It flashes nothing and modifies nothing.

It proves three things on your own dump:
  1. the five stock defect sites carry the exact bytes iglooom documented,
  2. the Word A (CRC-16/MCRF4XX) algorithm reproduces the stored 0xD110,
  3. the Word B (sum16le) algorithm reproduces the stored 0x3216,
and reports that a full patch would touch exactly 22 block-1 bytes.

Inputs are your own extracted block images:
    python3 verify_stock.py  b0(0x9800)  b1(0x64000)  cal_14C218(0x12800)
"""
import struct, sys
from apply_lca_patch import crc16_mcrf4xx, sum16le, EDITS

STOCK_SITES = [
    (0x38F00, 'F07C 0904 4C01 A203'),   # LE words
    (0x397F6, 'FF7C 2DC1 A209'),
    (0x3B160, 'A303'),
    (0x39F5C, 'AFE2'),
    (0x3A05E, 'B04E'),
]

def le_words(buf, off, nwords):
    return ' '.join(f'{struct.unpack_from("<H", buf, off+2*i)[0]:04X}' for i in range(nwords))

def main():
    b0 = open(sys.argv[1], 'rb').read()
    b1 = bytearray(open(sys.argv[2], 'rb').read())
    cal = open(sys.argv[3], 'rb').read()
    assert len(b0) == 0x9800 and len(b1) == 0x64000 and len(cal) == 0x12800, "unexpected block sizes"

    ok = True
    print("== stock defect sites ==")
    for off, exp in STOCK_SITES:
        got = le_words(b1, off, len(exp.split()))
        good = got == exp
        ok &= good
        print(f"  @0x{off:05X}  {got:20} expect {exp:20} {'OK' if good else 'MISMATCH'}")

    print("== stored internal checksums ==")
    sA = struct.unpack_from('<H', b1, 0x63FEA)[0]
    sB = struct.unpack_from('<H', b1, 0x63FEC)[0]
    print(f"  stored Word A = 0x{sA:04X}   stored Word B = 0x{sB:04X}")

    cA = crc16_mcrf4xx(bytes(b0) + bytes(b1[0x1800:0x63FEA]))
    img = bytes(b0) + bytes(cal) + bytes(b1)
    cB = sum16le(img[0:0x7FFEC])
    print(f"  calc  Word A = 0x{cA:04X}   {'OK' if cA==sA else 'MISMATCH'}")
    print(f"  calc  Word B = 0x{cB:04X}   {'OK' if cB==sB else 'MISMATCH'}")
    print(f"  14C218 sum16 = 0x{sum16le(cal):04X}   (must be 0xFFFF)")
    ok &= (cA == sA and cB == sB and sum16le(cal) == 0xFFFF)

    # dry-run patch to count changed bytes
    stock = bytes(b1); tmp = bytearray(b1)
    for off, new in EDITS: tmp[off:off+len(new)] = new
    patch_bytes = sum(1 for i in range(len(tmp)) if tmp[i] != stock[i])
    print(f"== dry-run: edit bytes changed = {patch_bytes} (+2 Word A +2 Word B = "
          f"{patch_bytes+4} total, expect 22) ==")

    print("\nRESULT:", "ALL CHECKS PASS" if ok else "FAILED")
    sys.exit(0 if ok else 1)

if __name__ == '__main__':
    main()
