# PSCM CPU identity — resolved from the vector table: DSP56800E

**Date:** 2026-09-15 · **Method:** first-principles opcode check, reproducible with
`analysis/pscm_isa_vectorcheck.py` (needs no firmware blob).

## The question

Two of the project's newest, highest-effort analyses reached opposite conclusions:

- `FF3.5_ANALYSIS_root/12_pscm_larefang.md` and `26_pscm_refresh.md` built a **coherent native
  RH850** decode (1698 `__saturate` intrinsics, 60 gp-relative cal cells, a clean scaling divider),
  and the top-level `README.md` recorded "Current verdict: Renesas RH850".
- `FF3.5_ANALYSIS_root/27_pscm_autopark_datalevel.md` read the **reset vector as DSP56800E** and
  argued the RH850 decode is an artifact.

This is the one contradiction that gates every code-level conclusion, so it is worth settling
independently rather than trusting either full decode.

## The decisive datum: the reset/exception vector table

The DSP56800E manual in-repo (`analysis/references/DSP56800ERM.txt`) gives two facts that, together,
are conclusive:

1. **JSR `<ABS19>` opcode** (page A-163):
   ```
   word0:  1110 0010 0101 A1AA     (bits 15..4 fixed = 0xE25; bit2 fixed = 1;
                                     bits {3,1,0} = target address bits [18:16])
   word1:  AAAAAAAAAAAAAAAA         (target address bits [15:0])
   ```
2. **DSC vector-table convention** (Section 8.3.3): *"Entries in the DSC core interrupt and exception
   vector table frequently consist of a JSR instruction, with a service routine target address as its
   argument."* — i.e. a DSC vector table is a **row of identical-opcode 2-word JSR entries**.

The four vector entries quoted in the project docs (VBF little-endian byte order in parentheses)
decode, bit-exactly, as DSP56800E `JSR <ABS19>`:

| Entry | Bytes | word0 | word1 | Decodes as |
|---|---|---|---|---|
| FL reset | `55 e2 c9 2b` | `0xE255` | `0x2BC9` | `JSR P:0x12BC9` |
| FL default handler | `55 e2 91 2b` | `0xE255` | `0x912B` | `JSR P:0x1912B` |
| Pre-FL reset | `55 e2 76 1d` | `0xE255` | `0x1D76` | `JSR P:0x11D76` |
| Pre-FL default handler | `55 e2 3e 1d` | `0xE255` | `0x1D3E` | `JSR P:0x11D3E` |

Every entry has the **identical** `word0 = 0xE255`, which matches the `JSR <ABS19>` opcode with the
fixed bit-2 satisfied and address MSBs `001`; the second word then gives a clean target
`0x1xxxx`. A table that is one unique reset entry plus a repeating default-handler entry, every entry
an identical-opcode 2-word JSR, is exactly the DSC vector table the manual describes.

## Why this outweighs the "coherent RH850 decode"

- **Coherence is not correctness.** This project already hit the same trap earlier
  (DSP56800E → SH-2A → V850 → RH850): dense DSP code decodes into *plausible-looking* instructions
  under several ISAs, and the community v850e3 SLEIGH module was even noted to emit `__saturate`
  spam. A full decode "looking reasonable" is weak evidence next to a **bit-exact opcode match** of
  the one structure whose format the vendor manual pins down.
- **The vector table is falsifiable and it passed.** Under DSP56800E the four entries are not just
  "an instruction" — they are the *same* JSR opcode with fixed bits satisfied and addresses that
  reconstruct cleanly. Under RH850 the identical repeating `0xE255` halfword across vector slots has
  no comparably clean explanation, and RH850 does not use a JSR-row reset vector.
- The DSP56800E reading also matches the rest of the memory model already used across the analysis
  (word-addressed program memory, `P = VBF_byte/2`, X-memory signal-config at `X:0x8000`).

**Verdict: the PSCM core is DSP56800E.** Confidence: high (bit-exact opcode + manual-documented
vector convention + consistent memory model).

## Consequence for the existing analysis

- The RH850/V850 decompiles — `decompiled/pscm_esaulenka.c`, `pscm_rh850.c`, `pscm_rh850native.c`,
  `pscm_full.c`, `pscm_all.c` — and **every functional claim derived from them** are unreliable and
  must be treated as artifacts. This specifically retires, as evidence:
  - the "1698 `__saturate` fixed-point engine" reading,
  - the `DAT_ffffe0ff` ±clamp "authority-limit" candidate,
  - the `0x61aa`/`25002` speed-gate candidate,
  - the `FUN_0001cf5c` divider and the gp-relative `DAT_ffffXXXX` cal-cell inventory.
  These were RH850 interpretations of DSP56800E bytes; they cannot be cited for the LCA authority
  limit or speed gate.
- **What survives unaffected** (because it never depended on the opcode stream): the `14C386`
  signal-config engine and the Pre→FL `+3/−1` delta (`SIGCFG_HANDLE_MAP.md`), the APA-mode
  interpretation of the two inserted 3-bit fields, the fully-retuned FL calibration finding, the
  memory/flash map, and the whole IPMA-side analysis.

## What this does and does not unblock

- **Settled:** the ISA identity, and therefore *which decoder to use* going forward.
- **Still needs the firmware blob (currently Git-LFS-absent) + a complete DSP56800E decoder:** an
  actual clean decode of block01 (`0x1C000`+) to locate the CAN RX path, the `LaRefAng` consumer,
  and the authority-clamp/speed-gate *in DSP56800E*. The in-repo `analysis/m56800e_disasm.py` is a
  deliberately partial decoder; a full one (or a licensed DSP56800E disassembler) is the next tool
  requirement. Until the blob is materialised, no new code-level number can be produced — but the ISA
  question no longer blocks that work.

## Reproduce

```
python3 analysis/pscm_isa_vectorcheck.py
```
Prints the four `JSR<ABS19>` decodes and the verdict, using only the documented vector bytes and the
JSR encoding from `references/DSP56800ERM.txt`.
