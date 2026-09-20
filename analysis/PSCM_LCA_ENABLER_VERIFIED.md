# PSCM LCA enabler — verified against our own binary (CORRECTS the prior "PSCM has no LCA gate")

**This document reverses a central conclusion of the earlier campaign.** The prior docs
(`LCA_GAP_ANALYSIS.md`, `PSCM_ASBUILT.md`, and the IPMA-side `LCA_FINAL_CONCLUSION.md` /
`COMMUNITY_SUMMARY.md`) concluded that the PSCM "applies whatever LaRefAng it receives; no code
gates lane-apply; LCA is purely a vision-DSP capability gap." **That is wrong for the PSCM.** A
road-tested PSCM firmware patch (iglooom, `PSCM_Firmware_Mod` / `PSCM_LCA_enabler.md`) enables real
LCA steering by fixing **five firmware defects inside the PSCM app** — i.e. LCA *is* gated in PSCM
code. Every one of those five sites, plus both checksum-repair words, has now been **confirmed
byte-for-byte in our own PSCM image.** Static analysis only — nothing flashed.

## Why the prior conclusion missed it
Our PSCM decode found the lane RX→handle→assist path structurally identical Pre-FL↔FL and concluded
"coding-independent / not the blocker." That was true as far as it went — the gate is **not**
As-Built coding — but the decode did **not** reach the per-state torque-chain dispatcher, because
the custom `m56800e_disasm.py` cannot decode indexed MOVEs and byte-ALU, and the effort was aimed at
As-Built coding rather than the state-machine that routes lane-request codes to torque arms. The
gate lives exactly in the code the tool couldn't read.

## Confirmation against our binary (`pscm_fl_b01.bin`, module `CV6T-14C217-AR`, block-1 base 0x1C000)
Module ID string in our image: `CV6T-14C217-AR` — **identical to iglooom's target.** All offsets are
bytes into block 1 (flash 0x0001C000); our file stores each 16-bit word little-endian, so the word
values below are read LE and match iglooom's quoted stock words exactly:

| # | site | file off | stock words (ours == iglooom) | patch | effect |
|---|------|----------|-------------------------------|-------|--------|
| 1 | P:$2A780 | 0x38F00 | `F07C 0904 4C01 A203` | → `E700 E700 E700 E700` (NOP 4 words) | remove guard blocking internal state `X:$2DDE=4` (LCA-entry) |
| 2 | P:$2ABFB | 0x397F6 | `FF7C 2DC1 A209` | → `E700 E700 E700` (NOP 3 words) | remove `X:$2DC1 != 0` inhibit test |
| 3 | P:$2B8B0 | 0x3B160 | `A303` | → `E700` (NOP) | remove code-5 branch that forces transmitted availability=1 (IPMA withdraws in ~60 ms) |
| 4 | P:$2AFAE | 0x39F5C | `AFE2` | → `AFD8` | redirect ramp-increment table entry: code-5 arm (literal 0) → code-4 arm |
| 5 | P:$2B02F | 0x3A05E | `B04E` | → `B031` | redirect authority-increment table entry: code-5 arm (−9) → code-4 arm |
| A | Word A | 0x63FEA | `D110` | CRC-16/MCRF4XX over blk0+blk1 gap (recompute) | checksum repair |
| B | Word B | 0x63FEC | `3216` | 16-bit sum over module + paired cal 14C218 (recompute) | checksum repair |

**All 7 matched.** (Verification script re-runnable; see repo history. `E700` = DSP56800E `NOP`.)

**Bit-exact end-to-end validation:** applying the 5 edits + full checksum repair (Word A, Word B,
container CRC-16/CCITT, VBF file_checksum CRC-32) to our own stock VBF produces an image whose sha256
equals iglooom's published road-tested `CV6T-14C217-AR_LCA_ENABLED.VBF`
(`24a9b235920e0eb54eb233445577630d2846574efb556a9aad74c5e207f49999`). The reproducible tool lives in
[`../PSCM_LCA_mod/`](../PSCM_LCA_mod/); we commit no flashable image.

## The mechanism (as documented by iglooom, now consistent with our decode)
A lane-state dispatcher converts the CAN lane request to an internal state at `X:$2DDE`. Per-state
code at `X:$2DB9` selects a torque-chain "arm" (codes 0–5). Two dispatcher tables give a ramp
increment and an authority increment per arm; the applied torque is `(X:$2D54 * X:$2D47) >> 10`.
Stock firmware routes the **LCA** request codes to **degenerate arms** (code 5: ramp increment 0,
authority −9, plus a branch that forces transmitted availability so the IPMA retracts), while **LKA**
(code 1) and **LCA-entry** (code 4) reach the working arm. The five patches re-route the LCA codes to
the working arm (code 4) and remove the two guards and the availability-forcing branch. This exactly
matches our earlier finding that the lane RX/apply *plumbing* is intact — the plumbing is fine; the
**dispatch of LCA codes to a dead arm** is the gate, and it is upstream of the byte-identical apply
code we compared.

## Road-test evidence (iglooom, not reproduced here — reported)
Prebuilt `CV6T-14C217-AR_LCA_ENABLED.VBF` (sha256 `24a9b235…f49999`), exactly **22 differing bytes**.
On-vehicle: peak |accumulator| for LCA 28 → 2000; longest sustained LCA episode 0.7 s → 9.4 s; torque
ratio 1.19 vs LKA. **Known residual limit:** lane assist stops after ~3.7 s and re-arms — "this is
the IPMA, not the PSCM." That residual is consistent with the IPMA-side story in the other repo, but
it does **not** negate the PSCM enabler: sustained centering torque is produced once the PSCM defects
are patched.

## Corrected bottom line
- **LCA on the FL C1MCA is achievable by a PSCM firmware patch** — road-tested by iglooom, and the
  exact stock code it patches is confirmed present in our image. The prior "not achievable by any
  coding or host-firmware change" was **wrong**: it is not achievable by *coding*, but it **is**
  achievable by a *PSCM code-flash patch* (5 defects, 22 bytes, + checksum repair).
- **The binding gate is in the PSCM, not (only) the vision DSP.** The camera/IPMA still imposes the
  ~3.7 s re-arm limit, but the PSCM was independently suppressing LCA torque by routing LCA request
  codes to a dead torque arm.
- **Risk:** this is a steering-actuator code-flash. Bench/road validation, recovery path, and
  type-approval/legal implications all apply. Static analysis only here — nothing was flashed by us.

## What is now corrected in the other docs
- `LCA_GAP_ANALYSIS.md` §C ("PSCM ruled out — no coding gate for lane-apply") — the *coding* claim
  stands; the *"not the blocker"* framing is corrected: the PSCM is a blocker at the code level.
- `PSCM_ASBUILT.md` ("PSCM has no lane/LCA coding") — still true for **As-Built coding**; a banner
  now points here for the **firmware** gate.
- IPMA repo `LCA_FINAL_CONCLUSION.md` / `COMMUNITY_SUMMARY.md` ("LCA cannot be enabled by any
  coding or host-firmware change") — corrected: a PSCM firmware patch does enable it.
