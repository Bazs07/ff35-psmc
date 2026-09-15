# PSCM Pre-FL vs FL comparison — status and a recorded negative result

Updated: 2026-09-15

## What IS compared (reliable)

- **Signal-config `14C386`** (Pre-FL `BV6T-14C217-AF` vs FL `CV6T-14C217-AR`): fully compared at the
  descriptor level — `sigcfg_handle_map.py` / `SIGCFG_HANDLE_MAP.md`. Result: **+3/−1** field delta
  (APA-mode), engine unchanged, content relocated. The "engine unchanged" claim is proven *without*
  any code decode, arithmetically: bank `7F8A` handles relocate by a uniform **+0x14 = the two added
  10-byte descriptors**, bank `7F75` renumbers `−0x08`. This is the substantive, reliable comparison.
- **Reset vector / architecture / relocation**: both reset entries are DSP56800E `JSR <ABS19>`
  (`P:0x11D76` Pre vs `P:0x12BC9` FL); common **+0xB008** VBF relocation offset for homologous code.
- **Calibration `14C218`** (`AF` vs `AX`): raw word diff shows **96.3%** of words differ — a full
  retune; too noisy to filter without a code reference.

## What is NOT compared, and why (recorded negative result)

An **instruction-level comparison of the two application codes** (the homologous sigcfg-processing
routines, docs place them at Pre `P:0x2B367`/`0x2B38C` and FL `P:0x30B6B`/`0x30B90`) was attempted and
is **not achievable from the present artifacts**:

1. **The present code listings don't cover those routines.** `pscm_pre_sigcfg_code.lst` and
   `pscm_fl_sigcfg_code.lst` both cover only the window **`P:0x03F00`–`P:0x0440F`** (a block00 region,
   `P:0x03F00` = VBF byte `0x7E00`), not the `P:0x2B367`/`P:0x30B6B` processing routines.
2. **The partial DSP56800E decoder decodes the two versions too differently for a valid diff.** Over
   that same window: Pre-FL = 569 `.word` (undecoded) + 520 decoded lines; FL = **903** `.word` + only
   251 decoded. A mnemonic-sequence LCS gives 43% "match" on decoded lines — but that number is a
   **decoder-quality artifact**, not a code-difference measurement, because the decoder failed on
   different portions of each image. The window is also almost certainly **data/calibration** (which
   the 96.3% cal diff already explains), not shared code.

Conclusion: the region-level listing diff reflects the Pre/FL **data/calibration** difference, and
says nothing reliable about whether the processing *code* is identical. A meaningful instruction-level
Pre↔FL code comparison **requires the raw block00/block01 bytes (currently Git-LFS-absent) plus a
complete DSP56800E disassembler** — the same unblock the CPU-identity resolution flagged. Do not
re-run the noisy listing LCS expecting a code answer; use the descriptor-level comparison above, which
is decode-independent.

Reproduce the (inconclusive) listing comparison: extract mnemonic sequences from the two
`*_sigcfg_code.lst` files and LCS-align them; the asymmetric `.word` counts show why the result is not
usable.
