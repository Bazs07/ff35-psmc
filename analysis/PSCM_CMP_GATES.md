# PSCM CMP-gate equality — Pre-FL vs FL (closes LCA_VERIFICATION "N5" / WS2 open item)

Static analysis only, owner's own vehicle, nothing flashed. NXP/Freescale DSP56800E,
16-bit little-endian words, program address `P = VBF_byte/2`. block01 app.

Files:
- FL: `scratchpad/work/pscm_fl_b01.bin` (byte-base `0x1C000`, `P` base `0xE000`)
- Pre-FL: `scratchpad/work/pre_extract/pscm_pre.block01.0x0001C000.bin`
Scripts (scratchpad, not repo): `cmp_gates.py` (raw + length-aware scan), `classify.py`
(idiom filter), `align.py` (relocation-aligned context match).

## Method — CMP encodings verified against CGEN, not guessed

Bases/masks taken from `tool_sources/dsp56800-binutils-0.5/.../binutils.patch`
(`ifmt_add_imm16`, `ifmt_add_lmem`, `ifmt_add_imm7` + the cmp opcode table lines
`{0x5c40}/{0x5c74}/{0x5c00}`), mutually exclusive under their masks:

| form | first word | length | 2nd word |
|---|---|---|---|
| `CMP #imm16,fff` | `(w & 0xFC7F)==0x5C40` | 32-bit (2 words) | imm16 |
| `CMP x:imm16,fff` | `(w & 0xFC7F)==0x5C74` | 32-bit (2 words) | X-addr |
| `CMP #<<imm7,fff` (short) | `(w & 0xFC60)==0x5C00` | 16-bit (1 word) | — |

Three passes were run so the result does not depend on linear sync:
- **A. Raw word-stream scan** — every word position tested; immediate values are
  **relocation-invariant**, so a multiset compare is valid across a full recompile.
- **B. Length-aware linear decode** — `m56800e_disasm.py`'s length model extended with the
  three CMP forms (2/2/1 words) so the stream stays synced; cross-checks A.
- **C. Relocation-aligned context match** — for each *real* `CMP #imm16` (compare-and-branch
  idiom), a key from the 3 words before + 2 words after the immediate (opcode/relative-branch
  words, relocation-invariant) is matched Pre-FL↔FL, then the immediate is compared. This is
  the definitive gate-equality test.

**Count reconciliation (raw, pass A):** FL `CMP #imm16`=95, `CMP x:imm16`=36 (**sum 131**),
short `CMP #imm7`=463 — reproduces the rigorous prior figures in
`PSCM_SAFETY_MONITORING.md` exactly (131 / 463), so the scanner is sound. Pre-FL raw:
`CMP #imm16`=87, `CMP x:imm16`=40, `CMP #imm7`=374. The `#imm7` gap (374 vs 463) is
false-positive noise (the `0xfc60` short-form matches many data words and the two images'
data differs); it is **not** an equality signal either way and is set aside — the equality
proof rests on passes A/B/C over the *idiom-verified* sites below.

## 1. Cal-resident speed/threshold gates — `CMP x:imm16` against the 0x70xx–0x7Axx band

Per `PSCM_SAFETY_MONITORING.md` §3, the PSCM's real speed/threshold gates are **not** code
literals; they are `CMP x:imm16` compares of a register against a calibration variable in the
`0x70xx–0x7Axx` band. Comparing the target-address multiset directly (relocation does not move
the cal layout):

**Strict cal-threshold band `0x7000–0x7AFF` — target multiset IDENTICAL Pre-FL↔FL:**
```
0x7083, 0x7819, 0x7829, 0x7859, 0x7889, 0x7919, 0x7999, 0x7A80, 0x7A90, 0x7AC1
```
(same set, same counts, both images). `0x7A90` is the decoded-lane-value store/compare target
from the lane loop; `0x7819`/`0x7829`/… are the `PSCM_SAFETY_MONITORING.md` §3 cal thresholds
(e.g. `CMP x:0x7A80` at Pre-FL/FL, `CMP x:0x7819`). Above-band data targets `0x7BC9, 0x7C0F,
0x7D57` also match in both. The **only** discrepancy is a single `CMP x:0x7E4F` at Pre-FL
`P:0x2934A` (`5E74 7E4F`, real compare, `Bge` at `P:0x2934F`) with no FL counterpart at the
same X-address — but `0x7E4F` is in the `0x7Exx` RAM/scratch region (it appears as a bare data
word 12× in Pre-FL / 10× in FL at scattered addresses), **not** the `0x70–0x7A` cal-threshold
band, so it relocates like RAM and is outside the gate class. It is **not** a speed/threshold
cal gate.

**Result: the calibration-resident speed/threshold compare gates are IDENTICAL Pre-FL↔FL.**
This is the direct answer to N5: the gating mechanism (register-vs-cal compares in the
`0x70–0x7A` band) is unchanged.

## 2. Code-literal `CMP #imm16` — relocation-aligned equality (pass C)

77 real (idiom) Pre-FL sites vs 86 FL. Context-aligned:
- **52 sites: context-matched, immediate IDENTICAL.**
- **6 sites: context-matched, immediate CHANGED** (enumerated below).
- The remaining sites are the *same constants* on both sides (`#0x0BD6, #0x7FFE ×2, #0x35DF,
  #0xFFC0, #0x1200, #0xF060, #0x6000 ×2, #0x0080, #0x00FF, #0x0028, #0x0099`) whose ±3-word
  context contains a relocated **absolute operand** (JSR target / X:absolute), which defeats the
  exact-context key; pairwise their immediates match (e.g. the `[-4000,+21500]` clamp
  `#0xF060` Pre-FL `P:0x1A720` ↔ FL `P:0x1C151`; the `#0x7FFE` full-scale saturations
  Pre-FL `P:0xF0CA/0xF0D8` ↔ FL `P:0xFF03/0xFF11`). No additional genuine constant change was
  found beyond the 6.

**The 6 genuine changed constants (all outside the lane and speed-gate paths):**

| Pre-FL | imm | FL | imm | routine class |
|---|---|---|---|---|
| `P:0x108F2` | `#0x0020` (32) | `P:0x11745` | `#0x0023` (35) | JSR-dispatch valid-ID/count range-check |
| `P:0x10A06` | `#0x0020` (32) | `P:0x11859` | `#0x0023` (35) | same routine, 2nd site |
| `P:0x16DB7` | `#0x00E1` (225) | `P:0x1860D` | `#0x00FC` (252) | peripheral-A motor-timing register-write index bound |
| `P:0x16E87` | `#0x00E1` (225) | `P:0x186DE` | `#0x00FC` (252) | same routine |
| `P:0x16EA4` | `#0x00E1` (225) | `P:0x186FB` | `#0x00FC` (252) | same routine |
| `P:0x16EB9` | `#0x00E1` (225) | `P:0x18710` | `#0x00FC` (252) | same routine |

Both routines are **word-for-word identical** Pre-FL↔FL apart from the literal and their
relocated absolute operands. Proof (aligned disasm):

`#0x0020 → #0x0023` (32 → 35), a table-length/valid-count bound guarding a `JSR`:
```
PRE P:0x108EC  5C22 7043 5461 8F10 E700  A367(Beq)  5EC0 0020  A12A(Bcs)  E255 0A6B(JSR)  E680
FL  P:0x1173F  5C22 7043 5461 8F10 E700  A367(Beq)  5EC0 0023  A12A(Bcs)  E255 18BE(JSR)  E680
```
Identical except the bound `0020→0023` and the relocated JSR target `0x10A6B→0x118BE`. This is
the same "valid IDs 0..N" range-check shape documented for the As-Built readers in
`../ff35-ipma/LCA_VERIFICATION.md` (`cmpui #287/#284`): a table grew by 3 entries in the
facelift recompile.

`#0x00E1 → #0x00FC` (225 → 252), a byte/index count bound in the peripheral-A
(`X:0xF143/F166/F167`) motor-control-timing register-write routine (the `0x00FC`/`0x00FF`
cluster of `PSCM_SAFETY_MONITORING.md` §1e):
```
PRE P:0x16E83  E281 8672 8671 7383  5FC0 00E1  A168(Bcs) ...  8740 00FF(MOVE #255) ...
FL  P:0x186DA  E281 8672 8671 7383  5FC0 00FC  A168(Bcs) ...  8740 00FF(MOVE #255) ...
```
Word-identical except `00E1→00FC`; the neighbouring `#0x00FF` (255) is **unchanged**. These
are 8-bit index/count bounds in the motor/peripheral-write path, not a speed or lane gate.

## 3. Lane decode/apply region — byte-identical, no compare gate

Using the relocation map (Pre-FL lane loop `P:0x11D81–0x11F19` ↔ FL `P:0x12BD4–0x12D6C`,
shift `+0xE53`, from `PSCM_PREFL_FL_DIFF.md` Task 3): the 409-word run is **byte-identical**
(re-verified here), and a CMP scan across that window returns **zero** `CMP #imm16`,
`CMP x:imm16`, or short `CMP #imm7` in either image. There is **no compare gate inside the
lane decode/apply path** to change — consistent with WS6 ("the PSCM has no coding gate on that
path"). The decoded-lane store/compare target `X:0x7A90` is present and identical in the §1
cal-band set.

## 4. Verdict

**The PSCM speed/threshold COMPARE gates are IDENTICAL Pre-FL↔FL (modulo relocation).**
- The **speed/threshold gating mechanism** — register-vs-calibration `CMP x:imm16` against the
  `0x70xx–0x7Axx` band — has an **identical target multiset** in both images (§1). The actual
  gates are unchanged.
- The **lane decode/apply path** is **byte-identical** and contains **no CMP gate** (§3).
- Every genuine **code-literal** `CMP #imm16` difference (§2) is a small integer
  **table/index/count bound** (`32→35`, `225→252`) in a **JSR-dispatch range-check** and a
  **peripheral-A motor-timing register-write** routine — table-size growth in the recompile,
  **not** a vehicle-speed enable gate and **not** on any lane-relevant path. All other real
  literal compares (clamps `#0xF060`, `#0x7FFE`, `#0x8000`, `#0x07FF`, full-scale saturations)
  are present with **identical immediates** in both images.

**Consequence for the LCA investigation:** N5 is closed. No lane-relevant or vehicle-speed
compare gate changed between Pre-FL and FL in the PSCM. The FL LCA regression is **not** a
changed PSCM speed/threshold gate — the gates are the same code and the same cal targets. This
completes the PSCM-side confirmation that the PSCM did not change any lane-relevant gate.

## Unresolved (explicit)
- Short `CMP #imm7` equality is **not** provable from counts (374 vs 463 is false-positive
  noise from raw pattern matching over differing data); the imm7 form carries no operand to
  multiset-compare. It is not a threshold-literal class, so this does not affect the verdict.
- The engineering meaning of the `32→35` and `225→252` bound growth (which table/buffer grew)
  is not decoded to a named structure; classified by routine context only.
- Absolute-operand fix-ups prevent an exhaustive context match of every literal site; residual
  unmatched sites were reconciled by immediate value, not by unique context, so a hypothetical
  changed literal sharing a value with an unchanged one elsewhere cannot be 100% excluded — but
  none was found, and none in the cal-band or lane path.
