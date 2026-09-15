#!/usr/bin/env python3
"""Decide the PSCM CPU identity from the reset/exception vector table.

The two most recent high-effort analyses disagreed: `12_/26_pscm_*.md` built a
coherent RH850 decode, while `27_pscm_autopark_datalevel.md` read the reset
vector as DSP56800E. This script settles it from first principles, using only
(a) the vector-entry bytes quoted in the project docs and (b) the JSR opcode
encoding printed in `analysis/references/DSP56800ERM.txt` (page A-163):

    JSR <ABS19>   word0: 1110 0010 0101 A1AA   (0xE25 fixed, bit2 fixed=1,
                                                 bits{3,1,0} = addr[18:16])
                  word1: AAAAAAAAAAAAAAAA       (addr[15:0])

The DSP56800E manual (Section 8.3.3) also states that DSC vector-table entries
"frequently consist of a JSR instruction with a service-routine target address"
— i.e. a table is a *row of identical-opcode JSR entries*, exactly the observed
structure (one unique reset entry + a repeating default-handler entry).

No firmware blob is needed: the four entries below are the ones quoted verbatim
in the docs (VBF little-endian byte order shown in the labels).
"""

VECTORS = {
    "FL   CV6T-14C217-AR reset   (55 e2 c9 2b)": (0xE255, 0x2BC9),
    "FL   CV6T-14C217-AR default (55 e2 91 2b)": (0xE255, 0x912B),
    "PreFL BV6T-14C217-AF reset   (55 e2 76 1d)": (0xE255, 0x1D76),
    "PreFL BV6T-14C217-AF default (55 e2 3e 1d)": (0xE255, 0x1D3E),
}


def jsr_abs19_target(word0: int, word1: int):
    """Return the JSR<ABS19> target P-address if word0 matches the opcode, else None."""
    if (word0 >> 4) != 0b1110_0010_0101:      # bits 15..4 fixed = 0xE25
        return None
    if ((word0 >> 2) & 1) != 1:               # bit2 fixed = 1
        return None
    hi = ((word0 >> 3) & 1) << 2 | ((word0 >> 1) & 1) << 1 | (word0 & 1)  # addr[18:16]
    return (hi << 16) | word1


def main() -> None:
    all_ok = True
    for name, (w0, w1) in VECTORS.items():
        tgt = jsr_abs19_target(w0, w1)
        if tgt is None:
            all_ok = False
            print(f"{name}: word0 {w0:#06x} does NOT match DSP56800E JSR<ABS19>")
        else:
            print(f"{name}: JSR<ABS19> -> P:0x{tgt:05X}")
    print()
    print("VERDICT:", "all entries are bit-exact DSP56800E JSR<ABS19> -> DSP56800E"
          if all_ok else "mismatch -- re-examine")


if __name__ == "__main__":
    main()
