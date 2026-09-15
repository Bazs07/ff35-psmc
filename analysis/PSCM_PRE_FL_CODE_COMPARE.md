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

## UPDATE 2026-09-15 — real binaries received; structural comparison done

The raw PSCM flash for both versions is now available (FL `CV6T-14C217-AR` block00/01/02, Pre-FL
`BV6T-14C217-AF` extracted from its VBF; FL block SHA256s match the manifest exactly). This unblocks
the binary comparison. Tools: `pscm_vectors.py` (vector table), plus a relocation window-diff.

### Interrupt configuration is identical Pre-FL ↔ FL [PROVEN]

Both block00 vector tables decode cleanly as **82 `JSR <ABS19>` entries, 10 distinct targets** (this
also re-confirms DSP56800E — no other ISA yields a coherent 82-entry JSR vector table). Crucially,
**the same vector indices are active in both** (reset 0/1, then 16, 17, 20, 56, 68, 69, 72, 78), with
72 unused vectors pointing at a common default handler. So the FL did **not** change which
peripherals/interrupts are used — same CAN, timers, ADC, etc. This gives 8 homologous ISR pairs:

| vector | Pre-FL | FL | reloc (words) |
|---|---|---|---|
| reset | `P:0x11D76` | `P:0x12BC9` | +0xE53 |
| default | `P:0x11D3E` | `P:0x12B91` | +0xE53 |
| vec16 | `P:0x164C8` | `P:0x17D02` | +0x183A |
| vec17 | `P:0x12059` | `P:0x12EAC` | +0xE53 |
| vec20 | `P:0x12030` | `P:0x12E83` | +0xE53 |
| vec56 | `P:0x16492` | `P:0x17CCC` | +0x183A |
| vec68 | `P:0x11489` | `P:0x122DC` | +0xE53 |
| vec69 | `P:0x114BE` | `P:0x12311` | +0xE53 |
| vec72 | `P:0x1152C` | `P:0x1237F` | +0xE53 |
| vec78 | `P:0x03B44` | `P:0x040B4` | +0x570 |

### The real relocation is piecewise, and the docs' "+0xB008" was wrong [CORRECTED]

The relocation is **piecewise-constant**: an early block at **+0x570** words, the main block at
**+0xE53** words (`= +0x1CA6 bytes`), and a late block at **+0x183A** words. The main-block value
`+0x1CA6 bytes` is independently confirmed by the block01 window-diff (its top relocation delta is
`−0x1ca0` bytes). The increasing offset with address means the FL **inserted code** progressively
(~+0x8E3 words before the main block, another ~+0x9E7 before the late block), while total block01 size
is unchanged (both exactly `0x64000` B). The earlier **"+0xB008 VBF bytes" figure is retired** — it
came from the wrong-ISA (RH850) analysis.

### What the diffuse diff does and doesn't show

A 32-byte-window diff of block01 finds only ~28% of FL windows present in Pre-FL, at scattered deltas.
That is **not** a measure of logic change: relocated code carries rewritten absolute addresses, so even
identical logic fails an exact-byte-window match. The reliable structural result is the vector table
above (identical interrupt map, homologous ISR pairs, precise piecewise relocation). Isolating the
actual *logic* differences (e.g. in the CAN-RX ISR that feeds `LaRefAng`) requires disassembling the
homologous ISR pairs under DSP56800E — the next step, needing a fuller 56800E disassembler than the
intentionally-partial `m56800e_disasm.py`.
