# PSCM LCA enabler — reproducible implementation (CV6T-14C217-AR)

Tooling that reproduces the **Lane Centering Assist (LCA) enable** firmware patch for the
facelift Focus PSCM (EPS steering module, `CV6T-14C217-AR`, Freescale DSP56800E, diag `0x730`).

## Credit — this is iglooom's discovery
The patch itself — the five PSCM firmware defects and the two-word internal checksum scheme —
was **discovered and road-tested by iglooom**:
<https://github.com/iglooom/PSCM_Firmware_Mod> (`PSCM_LCA_enabler.md`,
`PSCM_internal_checksums.md`, `DRIVE_RESULTS.md`).

That repository ships no LICENSE, so **nothing from it is copied here.** This folder is an
**independent re-implementation from the published technical facts** (patch offsets, byte
values, checksum algorithm names), written from scratch and then verified to reproduce the
stock firmware's own checksum words before use. Our contribution is: (a) independent
byte-for-byte confirmation on a **second** `CV6T-14C217-AR` unit (this car), and (b) this
self-checking, reproducible tool. Full reconciliation: `../analysis/PSCM_LCA_ENABLER_VERIFIED.md`.

## What the patch does (mechanism)
The PSCM converts the CAN lane request into an internal state (`X:$2DDE`); per-state code at
`X:$2DB9` picks a torque-chain "arm" (codes 0–5); the applied torque is `(X:$2D54 * X:$2D47) >> 10`.
Stock firmware routes the **LCA** codes to a **degenerate arm** (code 5: ramp increment 0,
authority −9, plus a branch that forces transmitted availability=1 so the IPMA withdraws in
~60 ms), while **LKA** (code 1) and **LCA-entry** (code 4) reach the working arm. The five edits
re-route the LCA codes to the working arm and remove the two guards + the availability-forcing
branch:

| # | prog addr | block-1 byte off | stock → patched | effect |
|---|-----------|------------------|-----------------|--------|
| 1 | P:$2A780 | 0x38F00 | `F07C 0904 4C01 A203` → 4×`E700` (NOP) | remove guard blocking `X:$2DDE=4` |
| 2 | P:$2ABFB | 0x397F6 | `FF7C 2DC1 A209` → 3×`E700` (NOP) | remove `X:$2DC1 != 0` inhibit |
| 3 | P:$2B8B0 | 0x3B160 | `A303` → `E700` (NOP) | remove code-5 availability=1 branch |
| 4 | P:$2AFAE | 0x39F5C | `AFE2` → `AFD8` | ramp-increment table: code-5 arm → code-4 arm |
| 5 | P:$2B02F | 0x3A05E | `B04E` → `B031` | authority-increment table: code-5 arm → code-4 arm |

18 data bytes change, plus the two repaired checksum words = **exactly 22 block-1 bytes**
(matches iglooom's measured 22-byte diff).

## Checksum repair (all verified to reproduce the stock words)
| word | location (block-1 off) | algorithm | message | stock value reproduced |
|------|------------------------|-----------|---------|------------------------|
| A | 0x63FEA | CRC-16/MCRF4XX (poly 0x1021 refl, init 0xFFFF) | `blk0 + blk1[0x1800:0x63FEA]` | **0xD110 ✓** |
| B | 0x63FEC | sum16 little-endian | linear `blk0 + 14C218 + blk1`, bytes `[0:0x7FFEC]` | **0x3216 ✓** |

Constraint: the paired **14C218** calibration must satisfy `sum16le(whole block) == 0xFFFF`
(our `CV6T-14C218-AX` does: 0xFFFF ✓), so Word B stays valid without re-flashing the cal.
Container is then repaired: per-block **CRC-16/CCITT-FALSE** + VBF header **file_checksum = CRC-32**
over the binary section (both reproduce the stock container exactly).

## Files
- `apply_lca_patch.py` — apply the 5 edits + full checksum repair to your **own** stock VBF,
  writing an LCA-enabled VBF. Requires the stock `CV6T-14C217-AR.VBF` and the paired
  `CV6T-14C218-AX` (VBF or its raw 0x12800 cal block).
- `verify_stock.py` — read-only self-check: confirms the 5 stock sites, reproduces Word A/B,
  and reports the 22-byte diff. Run this first.

```
python3 verify_stock.py   b0_0x9800.bin  b1_0x64000.bin  cal_14C218_0x12800.bin
python3 apply_lca_patch.py CV6T-14C217-AR.VBF  CV6T-14C218-AX.VBF  CV6T-14C217-AR_LCA_ENABLED.VBF
```

The block images are the ones under `../extracted/` (git-LFS). No enabled/flashable binary is
committed to this repo — you generate it locally from your own files.

## ⚠ Safety / legal
This modifies a **steering-actuator** control module. Static research on your own vehicle only.
Flashing is at your own risk: bench / closed-course validation with a proven recovery path is
mandatory, and there may be type-approval / road-legal implications. The known residual limit
(lane assist stops after ~3.7 s and re-arms) is an **IPMA/vision-DSP** behaviour, not the PSCM —
see the IPMA repo. Nothing in this folder flashes anything; `apply_lca_patch.py` only writes a file.
