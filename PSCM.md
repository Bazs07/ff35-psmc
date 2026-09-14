# PSCM — Power Steering Servo / EPS (0x730, HS-CAN)

Arch: Volvo-generated VBF, EPS; **Renesas-candidate** [TENTATIVE] (code 0x0–0x64000, data-flash 0x04008000) ·
Main EXE: CV6T-14C217-AR (0.48 MB) · DATA 218, SIGCFG 386, SBL BV6T-14C220 (call 0x4F800). Stripped.

## 1. Role (ADAS actuator)
Electric power-steering assist + **two separate ADAS interfaces**:
- **`LaRefAng` nudge** (±5.9°, torque overlay, hands-off timeout) = LKA.
- **`ExtSteeringAngleReq` full angle** (±1000°, park-assist/SAPP, low speed) — locked out for LCA.
Details: `03_lca_check.md`, `07_lca_solution.md`.

## 2. Firmware internals
- block00 (0x0) boot/vector table (default-handler table with `55 E2 91 2B` repeating), block01 (0x1C000)
  main app (starts with a u16 BE calibration parameter table: recurring 50/60 values — speed/angle limit
  [TENTATIVE]), block02 (0x04008C00 data-flash, mostly neutral 0x0080 adaptive values).
- Stripped, no readable symbols → arch identification + disassembly needed for the angle-gate logic.

## 3. What is worth modifying (LCA — high risk)
- Unlocking the **on-road angle-mode speed gate + SAPP precondition + monitor** (07-plan route B),
  or raising the **LaRefAng hands-off timeout + torque ceiling** (route A). Bench PSCM testing is decisive.

## Certainty
- [STRONG] role, two interfaces (DBC). [TENTATIVE] arch, exact location of the angle gate/limit (disasm needed).

## UPDATE — arch CONFIRMED: SuperH SH-2A (2026-09-13)
The PSCM is **Renesas SH-2A, big-endian** [PROVEN] — the fingerprint is the dominant `0xEnii` = SH `mov #imm,Rn`
pattern (e.g. 0xE255 = `mov #0x55,r2`), and Ghidra's `SuperH:BE:32:SH-2A` + Cover.java found **5107
functions**. → The PSCM (EPS) can now be analyzed **function-level, decompiled to C**
(Ghidra), which opens up LCA investigation: the `LaRefAng` (nudge) and `ExtSteeringAngleReq`
(park-assist angle) CAN handlers + the speed gate + the torque/angle limit can be searched at the code level.
Caveat: the GBR context needs to be set for cleaner global accesses. Setup: `GHIDRA_SETUP.md`.

## CORRECTION (2026-09-13) — the PSCM is V850, NOT SH-2A
The earlier SH-2A finding was **wrong**: I read a little-endian V850 data pattern as a big-endian SH
`mov #imm` instruction. The **v850dis self-test** settles it: block01 is **0.42% unknown**,
block00 1.23% → the PSCM is **V850 (LE)**, the same arch as IPC/SASM/HVAC. Block01 is not
"mostly data" (the low SH-rts count was misleading) — as V850 it is clean code. Ghidra:
`V850:LE:32:default` + Cover.java. The `LaRefAng`/`ExtSteeringAngleReq` handlers can be searched
with the V850 decompiler (clean output, like SASM). Setup: `GHIDRA_SETUP.md` (the PSCM line corrected to V850).

## CORRECTION #2 (2026-09-13) — the PSCM is probably RH850, not plain V850
Deeper investigation: block00 AND block01 give only **data-like** V850 output at every offset
(repeating `mulh`/`ld.b`/`sld` patterns, no coherent function structure), and Ghidra's V850-import
function boundaries are bad (`unaff_*` registers in the decompile). The "0.42% unknown" is misleading: V850
is so dense that even DATA decodes into valid instructions.
**Strong hypothesis: PSCM = Renesas RH850** (the successor to V850; standard in modern EPS units). RH850 is
V850-family (hence it partially decodes), but many instruction encodings differ → v850dis and Ghidra's
V850 decode it **incorrectly**. **Ghidra does not support RH850 out of the box.**
→ A clean PSCM decompile needs an **RH850 tool** (community Ghidra RH850 SLEIGH module or IDA),
OR live-data anchoring. The LCA architectural answer (03/07) stands independent of this.
Note: reset/boot lives in a bootloader outside the flashed blocks (the 0x9800–0x1C000 gap is in
neither VBF) → there is no clean entry point for code-flow tracing either.

## SOLVED (2026-09-13) — PSCM = RH850, Ghidra RH850 module installed
Confirmed: **RH850** (the data-like v850dis output + Ghidra's RH850-import coherent decompile
proves it). Installed the community **ZEEKRZERO/Ghidra-RH850** SLEIGH module
(`Ghidra/Processors/RH850/`, `.slaspec` recompiled for Ghidra 12.1.3), language:
`RH850:LE:32:default`. The PSCM now decompiles into **coherent C code** (proper types/structure),
unlike the data-like output from V850/SH. → Code-level LCA analysis (LaRefAng handler, speed gate,
angle/torque limit) can now be performed; clean function boundaries need RH850 call-based seeding.

## RH850 code-level — first results and limitations (2026-09-13)
- **Works:** the PSCM as RH850 gives coherent C (proper types, structure) — a big leap over the
  data-like output of V850/SH. The arch is **RH850 confirmed**.
- **Lead:** in the largest control function (0x1d160) there are **speed-like comparisons**
  (`in_r18 < 0x61A9`=25001, `25000 < in_r18`) — a possible **speed gate** (the value 25000 could
  be a scaled speed threshold). **[HYPOTHESIS]** — to be verified.
- **Limitations for a CLEAN code-level LCA answer:**
  1. **Function boundaries:** Cover/on-demand function starts are not always clean (uninitialized
     registers) → RH850 call-target-based seeding is needed (as with VLE e_bl).
  2. **`.sla` refinement:** the community ZEEKRZERO module has some inaccurate instruction semantics
     (e.g. an "8/0" decoding artifact) → some constructors in the `.slaspec` need review.
- **Next step:** RH850 call-seeder (clean boundaries) + fixing the `.sla` at the faulty points,
  then verified reading of 0x1d160 and the `LaRefAng` handler. The LCA architectural answer (03/07) stands.

## RH850 code-level — HONEST FINAL STATE (2026-09-13)
- **Solved:** PSCM = RH850, Ghidra module installed, 336 clean (jarl-seeded) functions, the PSCM
  is decompilable. This is the hardest module to unlock.
- **Limitation (honest):** the community ZEEKRZERO `.sla` is **imperfect** → decompilation is
  **slow** (error recovery per function), some instructions are inaccurate (e.g. the "8/0"
  artifact), and boundary problems mean the large control functions are not always clean.
- **The 25000 "speed gate" lead CANNOT be confirmed** at this `.sla` quality: `in_r18 < 0x61A9`
  sits on an uninitialized input register, and I cannot reliably determine whether it is speed
  (vs. torque/angle), nor its unit. **[WEAK FINDING — cannot be asserted as an LCA gate.]**
- **A CLEAN code-level LCA answer** needs: (a) fixing the `.sla` at the faulty constructors
  (correcting the affected instructions in the `.slaspec`), OR (b) a better RH850 module, OR
  (c) live CAN/UDS measurement for signal-to-code anchoring. The **architectural** answer for LCA (03/07) stands.

## RH850 module comparison + verdict (2026-09-13, CORRECTION)
Tested two community RH850 Ghidra modules:
- **ZEEKRZERO/Ghidra-RH850:** `__saturate` spam + artifacts (bad instruction semantics) → weak.
- **esaulenka/ghidra_v850 `v850e3:LE:32:default` (V850E3/RH850):** **substantially cleaner** (no
  saturate spam, coherent code) → **THIS is the module to use**. Installed: `Processors/V850E3/`.
- **The 25000 gate is REAL** (both modules show it): the main control function (0x1d160) contains a
  `25000 >= in_r18` branch. (My earlier "artifact" retraction was wrong — esaulenka shows it cleanly.)
- **Limitation:** both modules are **incomplete** on some RH850 instructions (bad-instruction gaps), and
  there is no direct caller for 0x1d160 → the meaning of `in_r18` (25000 threshold) **cannot be verified**
  (speed vs. something else) at the current tooling quality. A CLEAN, verified LCA answer needs a full
  RH850 decoder (IDA/commercial, or extending the SLEIGH module) or live data.
- **[CONFIRMED]** PSCM=RH850, esaulenka module is better, the 25000 gate exists.
  **[OPEN]** the precise semantics of the 25000; a verified trace of the `LaRefAng` handler.
