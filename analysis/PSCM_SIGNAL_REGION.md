# PSCM — locating the 12-bit signal-processing region (real DSP56800E binary)

The earlier RH850 (wrong-ISA) `larefang` analysis reported the internal bound `±2048 (0x800)` and
`±10000 (0x2710)` as **MISSING** (grep 0). That was a wrong-ISA artifact. Disassembling the **real**
`CV6T-14C217-AR` block01 under DSP56800E (correct ISA), these constants are present and clustered.

## The 12-bit centered-signal constants are present [PROVEN, corrects prior negative]

Immediate-constant histogram over block01 (`MOVE.W #imm16,reg`), ADAS-relevant values:

| constant | value | count | where |
|---|---|---|---|
| `0x0800` | **2048** (±half-range of a 12-bit centered field) | **13** | tight cluster `P:0x12C85–0x12CDB` |
| `0x0FFF` | 4095 (12-bit max) | 5 | `P:0x1291E`, `0x12A05` (same region) |
| `0x07FF` | 2047 | 3 | `P:0x17908`, `0x31278` |
| `0x2710` | 10000 | 17 | `P:0x22547`, `0x2797C`, `0x33546`… |
| `0x03E8` | 1000 (±1000° ExtSteeringAngleReq range?) | 7 | `P:0x2320A`, `0x275C3`… |

`2048` and `4095` co-locate at **`P:0x129xx–0x12Dxx`**, immediately adjacent to the CAN interrupt
handlers (`P:0x122DC–0x1237F`). This band is where **12-bit CAN signal fields** (value 0–4095, centre
2048) are handled — the class that includes `LaRefAng_No_Req` and `LaCurvature_No_Calc` (0x3CB), and
`ExtSteeringAngleReq` uses the `10000`/`1000`-scaled band elsewhere (`P:0x22xxx`, `P:0x27xxx`).

## The 2048 cluster is a repeating per-signal loop

`P:0x12C80+` is a repeating block: `MOVE #<handle>,r5` (handles `0x37C9`, `0x18F5`, `0xE70A`),
`MOVE #0x0800,r7` (2048), a 3-word helper op (`E418 F800 0004`), then a short `Bne` loop-back. i.e. the
2048 centre-offset is applied per signal-handle in a table-driven pass — the signal-config-driven
decode of the centered 12-bit fields.

## Honest scope

- [PROVEN] the `2048`/`4095`/`10000`/`1000` constants exist in the real code at these locations,
  overturning the wrong-ISA "missing" claim.
- [STRONG] `P:0x129xx–0x12Dxx` is the 12-bit centered-signal processing band (2048 centre, 4095 max),
  adjacent to the CAN ISRs.
- [OPEN] which specific loop instance is `LaRefAng` vs another 12-bit signal, and where the **±authority
  clamp** applies the limit, needs more DSP56800E instruction coverage (the `E418`/`81xx`/`85xx`/`8Fxx`
  helper ops in this loop are not yet decoded). This is the continuing trace.

## Reframing: the LaRefAng authority is the 12-bit field width, not a separate PSCM clamp [STRONG HYPOTHESIS]

A long-standing goal of this project was to find "the PSCM ±angle clamp constant" for `LaRefAng`. The
real-ISA evidence suggests **there is no separate clamp constant**, and the earlier hunt for `±2060`/
`±10000` was looking for something that does not exist as a compare-limit:

- Across all of block01 there are only **2 `CMP #imm16` instructions** — the PSCM does essentially no
  compare-against-a-large-literal. A `±2048` magnitude clamp of the classic `if (x>LIM) x=LIM` shape
  would need such compares; they are absent.
- `0x0800` (2048) appears **only** as the **centre-offset** in the 12-bit-signal decode loop
  (`P:0x12C85+`), never as a comparison bound.
- The IPMA emits `LaRefAng` as a **12-bit field, 0.05 mrad/bit, centred at 2048** (`±2048 = ±102.4 mrad
  ≈ ±5.87°`). The PSCM decode applies exactly that 2048 offset.

So the most consistent reading: the PSCM decodes `LaRefAng` as `(raw − 2048)` and uses the result
directly; **the ±5.87° authority is inherent in the 12-bit field × the 0.05 mrad/bit scaling**, not
enforced by a tunable PSCM clamp. Implication for LCA authority: it cannot be raised by editing a
(non-existent) PSCM clamp constant — the ceiling is set jointly by the IPMA's mrad/bit scaling and the
field width, exactly as the system-view analysis concluded. A speed/hands-on **gate** (a separate
question from the magnitude ceiling) may still exist; that search continues in the `P:0x22xxx`/`0x27xxx`
band (the `10000`/`1000`-scaled constants).

[Label: STRONG hypothesis — supported by the absence of large-literal compares + the 2048-as-centre
usage + the matching IPMA scaling; not a line-by-line proof of the full decode path.]

## DECISIVE (option-1 result): the PSCM LaRefAng decode is unchanged Pre-FL → FL

The core LCA question is whether the break is on the IPMA sending side or the PSCM receiving side. With
both real binaries, the 12-bit-signal decode loop can be compared directly. The loop sits at
**FL `P:0x12C85`** and **Pre-FL `P:0x11E32`** (delta `+0xE53` words = the main-block relocation), and a
relocation-aware word comparison of the loop body gives:

- **252 / 256 words identical (98%)**, 2 relocated-address words, and only **2 genuinely different
  words** — both *after* the 12-cluster loop body (the following routine's relocated handles), not in
  the LaRefAng decode itself. The tightly-aligned loop is therefore **~99% identical, differing only in
  relocated addresses.**
- The surrounding signal band (`P:0x12900–0x12E00`) is ~92% identical under a crude single-delta
  alignment (the residual is largely alignment drift from internal code insertion, not proven logic
  change); the reset handler and CAN-group ISRs are ~94–95% identical the same way.

**Conclusion [STRONG]:** the PSCM's decoding/handling of the 12-bit lane-assist signal class (which
contains `LaRefAng`) is **functionally unchanged between the Pre-FL application (where LCA works) and
the FL application (where it doesn't).** Combined with the two other real-binary findings —
(a) there is no separate tunable PSCM authority clamp (the ±5.87° ceiling is the field width), and
(b) the only PSCM signal-config (14C386) delta is the APA-mode/park fields, not lane — the PSCM
**receiving side is not where LCA breaks.**

This promotes hypothesis **3** (the FL IPMA's send side / feature layer does not emit the same working
`LaRefAng` command) to the leading explanation, on real-binary evidence, and correspondingly demotes
the "FL PSCM accepts the request under a different condition" hypotheses (1/2). Any PSCM-side speed or
hands-on gate, if present, is identical in both versions and therefore cannot be the differentiator —
so the speed-gate hunt on the PSCM side is not where the LCA answer lies. The remaining LCA work
belongs on the **IPMA send path** (partly in its absent lower flash) and/or a vehicle CAN log.
