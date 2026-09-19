# PSCM Pre-Facelift vs Facelift — Byte/Structural Firmware Diff

Freescale DSP56800E, 16-bit words. Program address `P = (VBF_byte_offset + block_byte_base) / 2`.
Word storage is little-endian (verified: `MOVE.W #0x37C9,reg5:5` disassembles from file bytes `C9 37 45 87`).

Files:
- FL: `pscm_fl_b00.bin` (@0x0), `pscm_fl_b01.bin` (byte-base 0x1C000, P starts 0xE000), `pscm_fl_b02.bin` (@0x04008C00)
- Pre-FL: `pre_extract/pscm_pre.block00/01/02...bin`
Disassembler: `analysis/m56800e_disasm.py --byte-base 0x1C000`.
Tool limit: decodes control-flow, `MOVE.W #imm`, X:absolute MOVEs, some CMP/bit-ops; leaves indexed MOVEs and byte-ALU as `.word`. It emits **no `CMP` mnemonic** across either full image, so cal-compare gates cannot be enumerated by mnemonic grep (see Unresolved).

---

## Task 1 — Raw byte-diff per block (same address)

| Block | Base | Size | Differing bytes | % | Largest identical span |
|-------|------|------|-----------------|---|------------------------|
| block00 | 0x0 | 38912 | 36232 | 93.11% | byteoff 0x148–0x5A0 (P:0xA4–0x2D0), 1113 B |
| block01 (app) | 0x1C000 | 409600 | 300653 | 73.40% | byteoff 0x4AF05–0x63FE3 (**P:0x33783–0x3FFF1, 102623 B, byte-identical at same address**) |
| block02 (cal) | 0x04008C00 | 29696 | 12857 | 43.30% | byteoff 0x3B48–0x73F3 (P:0x20063A4–0x2007FF9), 14508 B |

The raw same-address diff is large everywhere. **This overturns the prior "byte-identical at the same program address" framing** — the FL app is a recompile in which functions are **relocated** to different addresses. Correct question: byte-identical *modulo relocation*? (Tasks 2–3.)

Evidence of relocation, not rewrite: block01 content at Pre-FL byteoff 0x1C7AA (`4a87 b88c…`) reappears in FL at byteoff 0x1EACE (`4a87 208d…`), and vice-versa — whole segments swap position.

---

## Task 2 — Structural classification of block01

**Global relocation map.** Matching unique 8-word anchors between the two images (`anchor.py`) yields 10363 matched anchors distributed over **609 piecewise shift segments**. Dominant shifts (words): **+3667 (0xE53)**, +22532, +6475, +6202, +1024, … Same function *set*, rearranged. Because most 8-mers embed **relocated absolute operands** (JSR targets, X:absolute addresses), an 8-mer context match is only obtained where code uses relative branches; so the "novel-content" run counts (88327 FL / 67925 Pre-FL words with no 8-mer match) **overstate** genuine change — they are dominated by fixed-up address operands, not new logic. No large FL run was found that is both address-independent and absent from Pre-FL in the lane path (Task 4).

Diff regions classified:
- **P:0xE000–0xE002 head** (byteoff 0x0–0x5): `88cf0000 7639` → `aabe0000 0101`. **Build/version ID word.** Data.
- **P:0x3FFF2 tail** (byteoff 0x63FE4-region): `2308 1111 1414…` → `2206 1614 5351…`. **Block checksum/signature.** Data.
- **P:0x33783–0x3FFF1** (byteoff 0x4AF05–0x63FE3, 102623 B): **byte-identical at the same address** — a large shared region (const/library tables) that was *not* relocated.
- **Everything else**: relocated code (dominant +0xE53) plus its fixed-up address operands. Code deltas are relocation, not logic — demonstrated conclusively for the lane path in Task 3.

---

## Task 3 — Lane decode/apply path (the 12-bit LaRefAng handle loop)

Handle constants 0x37C9 / 0x18F5 / 0xE70A / mask 0x9393 locate the loop in **both** images:

| | Pre-FL | FL | shift |
|-|--------|----|-------|
| 0x37C9 sites | P:0x11D85,0x11D92,0x11DDB,0x11DE8,0x11E31,0x11E42,0x11E9F,0x11EB0 | P:0x12BD8,0x12BE5,0x12C2E,0x12C3B,0x12C84,0x12C95,0x12CF2,0x12D03 | +0xE53 |
| 0x18F5 sites | P:0x11DA4,0x11DAE,0x11DFA,0x11E04,0x11E58,0x11E66,0x11EC6,0x11ED4 | P:0x12BF7,0x12C01,0x12C4D,0x12C57,0x12CAB,0x12CB9,0x12D19,0x12D27 | +0xE53 |

(The task's cited P:0x12C85 is the FL address; the Pre-FL equivalent is P:0x11D92. Same code, +0xE53 words apart.)

**Word-for-word comparison, aligned at the first 0x37C9 (Pre-FL P:0x11D85 ↔ FL P:0x12BD8), `cmpwords.py`:**
- **392/392 consecutive words identical, 0 differences.**
- Maximal identical run around this anchor (`extent.py`): **Pre-FL P:0x11D81–0x11F19 ↔ FL P:0x12BD4–0x12D6C = 409 words, byte-identical.** The run terminates on both ends at **absolute-address operands** (Pre-FL P:0x11D80 `15F9` vs FL P:0x12BD3 `1BBD`; Pre-FL P:0x11F1A `28B3` vs FL P:0x12D6D `359B`) — i.e. the function body is identical and only the surrounding relocated pointers differ.

The loop uses only **relative** branches, so no fixups are needed and the bytes are literally identical. Representative quoted disasm (both images, same words):
```
P(pre 0x11D91 / fl 0x12BE4)  8745 37C9   MOVE.W #0x37C9,reg5:5
P(pre 0x11D93 / fl 0x12BE6)  8747 4000   MOVE.W #0x4000,reg5:7      ; 12-bit/mask
P(pre 0x11D8C / fl 0x12BDF)  D500 7A90   MOVE.W reg5,X:0x7A90       ; decoded-handle STORE target
P(pre 0x11D9D / fl 0x12BF0)  8741 9393   MOVE.W #0x9393,reg5:1
```

**Assist-mix / consumer coupling:** the decoded handle is stored to **X:0x7A90** (and neighbours 0x7A96) — inside the 0x70xx–0x7Axx cal/signal band — and this store target is **byte-identical** in both images (`D500 7A90` at Pre-FL P:0x11D8C = FL P:0x12BDF). The decoded lane value therefore lands at the *same* X-memory address in both versions, so any downstream consumer reads the identical location.

**Handle-constant symmetry (whole block01):** 0x37C9 ×8, 0x18F5 ×8, mask 0x9393 ×8 — **identical counts** Pre-FL and FL. No handle site added or removed.

**Verdict for the lane loop: byte-identical, modulo a +0xE53-word relocation.**

---

## Task 4 — FL-only additions?

- **Within the lane path:** none. The 409-word decode function is identical; handle-site counts are symmetric (8/8/8 both sides); the store target X:0x7A90 is unchanged. No extra CMP/branch/store appears inside or immediately around the relocated-identical run (it is bounded on both sides purely by relocated address operands, not by new instructions).
- **Elsewhere:** the two images carry the **same function set** (10363 consistent anchor matches; symmetric ~68k/88k relocation-inflated "novel" words on each side — a *symmetric* churn signature characteristic of a recompile, not a one-sided feature insertion). A definitive "no new function anywhere" claim is **UNRESOLVED** (see below) because absolute-operand fix-ups defeat cheap anchor matching and the disassembler cannot decode the immediate-CMP gates. No FL-only lane gate was found; presence of one *outside* the lane path cannot be fully excluded by this method.

---

## Task 5 — Verdict

**The PSCM lane-apply core (the 12-bit LaRefAng decode loop, its handle constants 0x37C9/0x18F5/0xE70A, its mask 0x9393, and its decoded-handle store target X:0x7A90) is byte-identical between Pre-FL and FL, differing only by a uniform +0xE53-word relocation.** Proven by a 409-word zero-difference word-aligned comparison (`cmpwords.py`, `extent.py`) with quoted disasm at cited program addresses.

The FL app is **not** byte-identical at the same addresses — it is a full recompile with functions relocated (609 shift segments) — so the earlier "byte-identical at same address" statement was imprecise. The correct, stronger statement is **byte-identical modulo relocation for the lane path.**

**Consequence:** the FL LCA regression is **not** located in the PSCM lane-decode/apply logic. That logic is bit-for-bit the same code operating on the same X-memory handle location. This is consistent with the IPMA-side finding. Any PSCM-side story would have to live in a *changed gate/precondition or calibration value* rather than in the apply path itself — and no such change was demonstrated in the lane path (Task 4), though it is not exhaustively excluded elsewhere (Unresolved).

**Summary identity/delta table**

| Element | Pre-FL P | FL P | Result |
|---------|----------|------|--------|
| Lane decode loop (12-bit handle) | 0x11D81–0x11F19 | 0x12BD4–0x12D6C | **byte-identical, +0xE53 reloc, 409 words, 0 diffs** |
| Handle const 0x37C9 / 0x18F5 / mask 0x9393 counts | 8 / 8 / 8 | 8 / 8 / 8 | identical |
| Decoded-handle store target | X:0x7A90 | X:0x7A90 | identical |
| block01 shared const region | 0x33783–0x3FFF1 | same | byte-identical at same addr (102623 B) |
| block01 build/version word | P:0xE000 | P:0xE000 | changed (data) |
| block01 checksum tail | P:0x3FFF2 | P:0x3FFF2 | changed (data) |
| Whole app layout | — | — | relocated recompile, same function set |

---

## Unresolved

1. **Cal-compare speed/threshold gates (CMP x:imm16 vs 0x70xx–0x7Axx band).** `m56800e_disasm.py` emits no `CMP` mnemonic over either full image; these compares remain `.word`. Their Pre-FL↔FL equality was **not** verified instruction-by-instruction. Needs a CMP-capable decoder or manual byte decode of the comparator sites.
2. **Exhaustive "no FL-only function anywhere" proof.** Relocation fix-ups of absolute operands defeat the 8-mer anchor method; the symmetric ~68k/88k "novel" word counts are relocation artefacts, not confirmed logic. A relocation-aware (operand-masked) full LCS would be required to prove function-set identity outside the lane path.
3. **block00 (bootloader/low-vector, 93% diff) and block02 (cal, 43% diff)** were not classified line-by-line; treated as boot/version/calibration data outside the app lane-apply path. If a lane precondition lives in cal (block02, X:0x2004600+ band), it is a data value, not code, and is out of scope of this code diff.
4. The lane function's **callers** were not located (JSR-target grep returned none; JSR encoding not resolved to these addresses by the tool), so caller-side gating was not inspected.
