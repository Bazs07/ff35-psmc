#!/usr/bin/env python3
"""
apply_lca_patch.py — reproduce iglooom's CV6T-14C217-AR LCA-enable PSCM firmware
patch on your OWN stock VBF, with full internal + container checksum repair.

Credit: the patch (5 firmware defects + checksum scheme) was discovered and
road-tested by iglooom — https://github.com/iglooom/PSCM_Firmware_Mod
(PSCM_LCA_enabler.md, PSCM_internal_checksums.md). This script is an independent
re-implementation from those published facts; the checksum algorithms here were
verified to reproduce the stock words (Word A=0xD110, Word B=0x3216) on our own
dump before use. See PSCM_LCA_mod/README.md.

⚠ SAFETY / LEGAL: this modifies a steering-actuator (EPS) control module. Static
research on your own vehicle only. Flashing is entirely at your own risk, must be
bench/closed-course validated with a recovery path, and may have type-approval /
road-legal implications. Nothing here flashes anything — it only writes a file.

Usage:
    python3 apply_lca_patch.py STOCK_14C217.VBF  PAIRED_14C218(.VBF|.bin)  OUT_ENABLED.VBF
"""
import struct, re, sys, zlib, hashlib

# ---- checksums -------------------------------------------------------------
def crc16_mcrf4xx(data):                       # block-1 Word A
    crc = 0xFFFF
    for b in data:
        crc ^= b
        for _ in range(8):
            crc = (crc >> 1) ^ 0x8408 if crc & 1 else crc >> 1
    return crc

def crc16_ccitt_false(data):                   # VBF per-block container CRC
    crc = 0xFFFF
    for b in data:
        crc ^= b << 8
        for _ in range(8):
            crc = ((crc << 1) ^ 0x1021) & 0xFFFF if crc & 0x8000 else (crc << 1) & 0xFFFF
    return crc

def sum16le(data):                             # block-1 Word B
    s = 0
    for i in range(0, len(data) - 1, 2):
        s = (s + struct.unpack_from('<H', data, i)[0]) & 0xFFFF
    return s

# ---- VBF container ---------------------------------------------------------
def parse_vbf(d):
    hs = d.find(b'header'); i = d.find(b'{', hs); depth = 0; j = i
    while j < len(d):
        c = d[j:j+1]
        if c == b'{': depth += 1
        elif c == b'}':
            depth -= 1
            if depth == 0: break
        j += 1
    hdr_end = j + 1
    p = hdr_end
    while d[p:p+1] in (b'\r', b'\n', b'\t', b' ', b';'): p += 1
    blocks = []
    while p + 8 <= len(d):
        addr, length = struct.unpack_from('>II', d, p)
        if length == 0 or p + 8 + length + 2 > len(d): break
        blocks.append({'off': p, 'addr': addr, 'len': length,
                       'data': bytearray(d[p+8:p+8+length])})
        p = p + 8 + length + 2
    return blocks, p

# ---- the five defect patches (byte offsets into block-1 data) --------------
EDITS = [
    (0x38F00, bytes.fromhex('00E700E700E700E7')),  # P:$2A780 NOP guard  (X:$2DDE=4)
    (0x397F6, bytes.fromhex('00E700E700E7')),      # P:$2ABFB NOP X:$2DC1!=0 inhibit
    (0x3B160, bytes.fromhex('00E7')),              # P:$2B8B0 NOP code-5 avail=1 branch
    (0x39F5C, bytes.fromhex('D8AF')),              # P:$2AFAE ramp table AFE2->AFD8
    (0x3A05E, bytes.fromhex('31B0')),              # P:$2B02F authority table B04E->B031
]

def main():
    stock, paired, outp = sys.argv[1], sys.argv[2], sys.argv[3]
    d = open(stock, 'rb').read()
    cald = open(paired, 'rb').read()
    blocks, tail = parse_vbf(d)
    b0 = next(b for b in blocks if b['addr'] == 0x00000000)['data']
    b1 = next(b for b in blocks if b['addr'] == 0x0001C000)['data']
    if len(cald) == 0x12800:                       # raw 14C218 cal image
        cal = bytearray(cald)
    else:
        cblocks, _ = parse_vbf(cald)
        cal = next(b for b in cblocks if b['addr'] == 0x00009800)['data']
    if sum16le(bytes(cal)) != 0xFFFF:
        sys.exit("ERROR: paired 14C218 sum16 != 0xFFFF; Word B would be invalid.")

    changed = 0
    for off, new in EDITS:
        changed += sum(1 for k in range(len(new)) if b1[off+k] != new[k])
        b1[off:off+len(new)] = new

    wA = crc16_mcrf4xx(bytes(b0) + bytes(b1[0x1800:0x63FEA]))
    struct.pack_into('<H', b1, 0x63FEA, wA)
    img = bytes(b0) + bytes(cal) + bytes(b1)
    wB = sum16le(img[0:0x7FFEC])
    struct.pack_into('<H', b1, 0x63FEC, wB)

    b0off = blocks[0]['off']
    out = bytearray(d[:b0off])
    for b in blocks:
        out += struct.pack('>II', b['addr'], b['len'])
        out += bytes(b['data'])
        out += struct.pack('>H', crc16_ccitt_false(bytes(b['data'])))
    out += d[tail:]
    fc = zlib.crc32(bytes(out[b0off:])) & 0xFFFFFFFF
    out = bytearray(re.sub(rb'(file_checksum\s*=\s*)0x[0-9A-Fa-f]+',
                           (r'\g<1>0x%08X' % fc).encode(), bytes(out), count=1))
    open(outp, 'wb').write(out)

    print(f"block-1 data bytes changed by edits : {changed} (expect 18)")
    print(f"Word A (MCRF4XX) @0x63FEA           : 0x{wA:04X}")
    print(f"Word B (sum16le) @0x63FEC           : 0x{wB:04X}")
    print(f"VBF file_checksum (CRC-32)          : 0x{fc:08X}")
    print(f"output                              : {outp}")
    print(f"output sha256                       : {hashlib.sha256(bytes(out)).hexdigest()}")

if __name__ == '__main__':
    main()
