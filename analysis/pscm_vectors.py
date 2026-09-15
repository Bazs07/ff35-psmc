#!/usr/bin/env python3
"""Decode the PSCM DSP56800E interrupt/reset vector table from block00.

Usage: pscm_vectors.py <CV6T-14C217-AR.block00.0x00000000.bin>

The table is a row of 2-word JSR <ABS19> entries (little-endian 16-bit words,
P = VBF_byte/2). Prints the entries, the distinct handler targets, and the
default handler (the target shared by most unused vectors).
"""
import struct, sys

def decode(b):
    def w(i): return struct.unpack_from('<H', b, i*2)[0]
    def jsr_abs19(w0, w1):
        if (w0 >> 4) != 0b1110_0010_0101: return None
        if ((w0 >> 2) & 1) != 1: return None
        hi = ((w0>>3)&1)<<2 | ((w0>>1)&1)<<1 | (w0&1)
        return (hi<<16)|w1
    vec=[]; i=0; n=len(b)//2
    while i+1 < n:
        t = jsr_abs19(w(i), w(i+1))
        if t is None: break
        vec.append(t); i += 2
    return vec

def main():
    b = open(sys.argv[1],'rb').read()
    vec = decode(b)
    from collections import Counter
    tc = Counter(vec)
    default = tc.most_common(1)[0][0]
    print(f"{len(vec)} JSR<ABS19> vector entries; {len(tc)} distinct targets")
    print(f"reset (vec0) -> P:0x{vec[0]:05X}")
    print(f"default handler -> P:0x{default:05X}  (x{tc[default]} vectors)")
    print("active ISR targets (non-default):")
    for v_i, t in enumerate(vec):
        if t != default:
            print(f"  vec{v_i:2d}: JSR P:0x{t:05X}")

if __name__ == "__main__":
    main()
