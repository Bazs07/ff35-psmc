# PSCM (RH850 EPS) — External steering-angle request (LKA/LCA/park-assist) analysis

**Module:** Ford Focus Mk3.5 PSCM = electric power steering (EPS), Renesas RH850 (G3 core)
**Source:** `F:/FF3.5_ANALYSIS/decompiled/pscm_rh850native.c` (21,650 lines)
**Decompile status:** **NATIVE RH850:LE:32:default SLEIGH** decoder, base `0x1C000` (the real code region). `0x67000+` is **PADDING** (skipped/truncated).
**Date:** 2026-09-13 (native RH850 re-decode)
**Method:** Find + Verify — direct verification of FIND claims against the file (grep + reading function bodies)
**Previous version:** this file **supersedes** the earlier analysis built on the v850e3 decode (see 0.1 CORRECTION).

---

## 0. TL;DR (the gist in one paragraph)

The **native RH850 decode is substantially better** than the earlier v850e3 one: the `halt_baddata` ratio drops **1.10 → 0.59 calls/function** (144 calls / 244 functions), and now **1698 real `__saturate` (SATADD/SATSUB) calls**, **593 signed `(short)` reads**, and **60 unique `DAT_ffffXXXX` gp-relative calibration symbols** (≈249 reads) are **visible**. So the code structure has largely recovered. **BUT the 4 concrete ADAS questions still cannot be given a hard number**, now for a **more precise, different reason** than before: **(1)** the two candidate constants are **artifacts** — all 8 occurrences of `0x67`(=103) are `+0x67` **struct byte-offsets**, the single occurrence of `10000` is a phantom store-offset at the padding boundary; the expected internal bounds **±2060 (0x80c)** and **±10000 (0x2710)** are **MISSING** at the grep level; **(2)** the most important structural fact: **all 1698 `__saturate()` return values are discarded** (0 assignments) — so precisely the output of the saturating clamp/blend operations **is lost**; **(3)** `DAT_ffffe0ff` appears in a symmetric ±cal-saturation pattern in 7 places — this **resembles** a ±CAL clamp, **but CANNOT be confirmed** as an ADAS clamp (the saturate result is discarded, the operand is stack-address garbage, the functions run into `halt_baddata` — **Verify classified this as an artifact**); **(4)** the candidate speed gate (`0x61aa`=25002) sits on a **phantom `in_r18`**, and a real km/h constant (0x3e8/0x2ee0…) is nowhere to be found. **Final conclusion:** the native decode **advanced understanding** ("the main loop is NOT in 0x76xxx — that's padding") **but not to a hard answer** — the limits sit in the **calibration data block** (not decompiled) and in the **lost saturate target registers**.

---

## 0.1. IMPORTANT CORRECTION to the earlier (v850e3) analysis

The earlier version claimed that the main torque/angle control loop lived in the large functions **`0x76774`/`0x7924c`/`0x7cf0c`/`0x7f544`**, and that the bad decode **destroyed** it ("lost comm-code"). **THIS WAS WRONG.**

**Proven:** from `0x6731a` to the end of the file (`0x7f544`, lines 21231–21650) **EVERY function is an empty `halt_baddata` stub** — **35 of them**, without exception. This region is **PADDING** (data/filler), **never was code**. The four previously suspected "large loops" (`0x76774` 10,965 B, `0x7924c` 14,110 B etc.) **all fall into this padding band** → their code is not "lost" — **they simply have no code**.

| | Earlier (v850e3) claim | Native RH850 reality |
|---|---|---|
| 0x76xxx–0x7Fxxx region | "the main loop, destroyed by the decode" | **PADDING** — 35 empty stubs starting at 0x6731a (lines 21231–21650) |
| Real code region | sought, not localized | **`0x1C000`–`~0x66bbc`** (real bodies up to around line 21204) |
| `halt_baddata` | ~258 calls / ~1.10 per function | **144 calls / 0.59 per function** (109 in the real region, 35 in the padding) |
| Main signal region | unknown | **`0x55000`–`0x58000`** cluster + `0x35c40`, `0x40678` [HYPOTHESIS] |

**Consequence:** the padding misinterpretation is gone, the real code has become readable — but the padding **does not contain** the sought logic, so the "where's the limit" question must be sought in the **0x1c000–0x66bbc** real band (which is what we do below).

---

## 1. FINAL ANSWER to the 4 ADAS questions (as much as can be read out NOW)

| # | Question | Answer from the native decode | Label |
|---|---|---|---|
| (a) | CAN-RX read + scaling (out of 593 `(short)`) | **Cannot be cleanly identified.** The candidate constants (0x67/103, 10000) are artifacts; the raw→internal angle chain disappears into the jumptable dispatchers. Clusters: `FUN_00035c40` (40 shorts), `FUN_000554f0` (29), `FUN_00040678` (23). | [PROVEN that the candidates are artifacts] |
| (b) | Magnitude/rate clamp (which cal/literal) | **Not a hardcoded literal.** Candidate cal: `DAT_ffffe0ff` in a symmetric ±cal-saturation pattern in 7 places — **but at artifact level** (saturate result discarded, operand stack garbage). The real value **is not in the code**, it's in the **cal block**. | [HYPOTHESIS, Verify: does not hold up as a proven clamp] |
| (c) | Speed-dependent gate (km/h) | **Not found.** The `0x61aa` (25002) candidate sits on a **phantom `in_r18`** (`FUN_000353c6`). A real speed constant (0x3e8, 0x2ee0…) grep: **0 hits**. | [PROVEN that the candidate is a phantom] |
| (d) | ADAS-active flag / hands-on override | **Partially: 3 real flag tests visible**, but their attribution to ADAS is not confirmed: `DAT_ffffe28c & 4` (3741), `(&DAT_ffffe680)[in_r1] < 0xb` (8273), `DAT_ffffe700 & in_r12` (14464). | [HYPOTHESIS — real flag-cal reads, but without attribution] |

### 1.1. Why a hard number still doesn't come together — the decisive evidence

**(A) Every `__saturate()` return value is LOST.** [PROVEN]
- `= __saturate` (assignment): **0**; `__saturate(...)` as a standalone statement (discarded): **1698**.
- The native decoder **correctly recognizes** the RH850 SATADD/SATSUB opcodes (hence the 1698 saturations visible), **but Ghidra generates the intrinsic without a target operand** → precisely the clamp/blend **output** is untraceable. **This is the main reason the limit and blend chains cannot be closed**, even with the good decode.

**(B) The `DAT_ffffe0ff` ±cal pattern is real, but not a provable clamp.** [Verify: holds=false, artifact]
The pattern occurs in 7 places (`FUN_00042650`, `_42700`, `_4272c`, `_42760`, `_427f6`, `FUN_000469d2`, `FUN_00057c0a`):
```c
uVar6 = Ram00000011;  uVar5 = Ram00000007;
__saturate(-(int)DAT_ffffe0ff);      // lower ±CAL bound?  -> RESULT DISCARDED
__saturate(iVar7 + DAT_ffffe0ff);    // upper bound?       -> RESULT DISCARDED
```
But `iVar7` directly above is **stack-address garbage**: `iVar7 = iVar7 - (int)&stack0x00000000;`, the function **runs into `halt_baddata`**, and neighboring saturations go to meaningless constants (`__saturate(5)`, `__saturate(0x2c)`, `__saturate(&stack0x252e0002)`). → `DAT_ffffe0ff` is a **real gp-cal read**, but its **attribution as an ADAS-external-request clamp is not supported**.

**(C) The expected internal limit values are MISSING from the code.** [PROVEN negative]
- `0x80c` / `2060` (LaRefAng ±103 mrad ±5.9°): **0 hits**
- `0x2710` / `10000` as a clamp: **none**; the single occurrence of `10000` is `*(undefined1 *)(in_r10 + 10000) = in_r16;` (line 21222, `FUN_00066bbc`, at the padding boundary) — a **phantom store offset**.
- All 8× occurrences of `0x67` are **struct byte-offsets**: `*(...)(unaff_ep + 0x67)`, `unaff_ep[0x67]`, `*(...)(iVar9 + 0x67)` (lines 1956, 2798, 7022, 11857–11878, 14318) — **NOT** a comparison, **NOT** ±103 mrad.
→ So the range limits are **taken from cal**, not a hardcoded number.

**(D) Only 3 real `DAT_ffff` comparisons exist — all bit/flag tests, none a value clamp.** [PROVEN]
```c
if ((DAT_ffffe28c & 4) != 0) ...            // L3741  — flag-bit test
if ((byte)(&DAT_ffffe680)[in_r1] < 0xb) ... // L8273  — indexed byte, phantom in_r1
if (((int)DAT_ffffe700 & in_r12) != 0) ...  // L14464 — bitmask, phantom in_r12
```
Not a single classic magnitude clamp (`if (x > CAL) x = CAL;`) exists. → the magnitude/rate limit **does not live in compare-and-branch form**, but in the **discarded saturate targets from (C)** and in the **cal data block**.

**(E) The speed-gate candidate is a phantom.** [PROVEN that it's an artifact]
```c
// FUN_000353c6 @ 0x353c6
uint in_r18;                       // <- DECLARED, NEVER LOADED
...
__saturate(in_r18 - 0x61a9);       // L2887  (0x61a9 = 25001) -> discarded
if (in_r18 < 0x61aa) { ...         // L2888  (0x61aa = 25002)  -> sits on a phantom
  /* Could not recover jumptable at 0x00035404. Too many branches */
  (*(code *)(&DAT_00035406 + *(short *)(&DAT_00035406 + unaff_r21 * 2) * 2))();
```
`0x61aa` sits on a **phantom `in_r18`** → it is not a speed variable. A real km/h-scale constant (0x3e8=1000, 0x2ee0=12000 etc.) is **nowhere to be found**. → the speed window **can neither be confirmed nor refuted from this dump**, only the candidate is refuted.

---

## 2. Signal chain: CAN-RX → scaling → range clamp → blending → torque

```
   [CAN bus]  ExtSteeringAngleReq (0.1°/bit)  +  LaRefAng_No_Req (0.05 mrad/bit)
       ▼
┌───────────────────────┐
│ 1. CAN-RX unpacking    │ Status: NOT IDENTIFIABLE (no CAN/RSCAN symbol;
│    (RX buffer → raw)   │  the raw read disappears into the jumptable dispatchers)
└──────────┬────────────┘
           ▼
┌───────────────────────┐
│ 2. Q-format scaling    │ Status: VISIBLE, but not attributable (1698 SATADD/SATSUB
│   (raw → internal unit)│  = real Q-math, BUT every saturation OUTPUT discarded)
└──────────┬────────────┘
           ▼
┌───────────────────────┐
│ 3. Range clamp         │ Status: FROM CAL, not from a literal; candidate DAT_ffffe0ff
│  (magnitude ±, rate/dt)│  ±cal pattern (7 spots), BUT at artifact level; ±2060/±10000 missing
└──────────┬────────────┘
           ▼
┌───────────────────────┐
│ 4. Speed gate +        │ Status: NOT FOUND (0x61aa is a phantom; no km/h constant).
│    ADAS flag / override│  3 real flag tests (DAT_ffffe28c/e680/e700), without attribution
└──────────┬────────────┘
           ▼
┌───────────────────────┐
│ 5. Blending + torque   │ Status: HYPOTHESIS: 0x55000–0x58000 jumptable state machine
│    (toward the motor)  │  (FUN_00055652/00056806); 204 jumptable failures file-wide
└───────────────────────┘
```

**What is really visible:** intense SATADD/SATSUB fixed-point arithmetic (Q-math in nature, 1698 ops), 60 unique gp-relative calibration reads, dense memory-mapped access — **consistent** with the angle/torque control running here. **What is missing:** the **targets** of the saturations (discarded) and the internals of the **jumptable dispatchers** (not recovered) — so the "which bit is which signal, which cal is which limit" **threads cannot be tied together**.

---

## 3. Key functions and calibration constants

### 3.1. Functions (native decode, real addresses)

| Address / FUN | Size | Line | Role | Status |
|---|---|---|---|---|
| `FUN_00042650` (+ `_42700/_4272c/_42760/_427f6`) | 44–~110 B | 7756– | **±cal-clamp candidate** (DAT_ffffe0ff) | saturate output discarded, ends in `halt_baddata` → artifact-level |
| `FUN_000469d2` | — | 9077 | same ±DAT_ffffe0ff pattern | artifact-level |
| `FUN_00057c0a` | 420 B | 17568 | same ±DAT_ffffe0ff pattern | artifact-level |
| `FUN_000353c6` | 144 B | 2863 | **speed-gate candidate** (0x61aa) | phantom `in_r18`; jumptable @0x35404 not recovered |
| `FUN_00055652` | 1,684 B | 13506 | **blending/state machine** [HYP] | jumptable dispatcher, not recovered |
| `FUN_00056806` | 2,022 B | 14159 | **blending/state machine** [HYP] | jumptable dispatcher, not recovered |
| `FUN_000554f0` | 270 B | 11963 | signal processing (29 `(short)`) | phantom-register-heavy |
| `FUN_00035c40` | 882 B | — | most `(short)`s (40) | corrupt (division by zero, phantom loop) |
| `FUN_00040678` | 1,370 B | — | signal processing (23 `(short)`) | phantom-register-heavy |
| `FUN_00066bbc` | 66 B | 21204 | where the `10000` literal sits | phantom store offset, padding boundary |
| `0x6731a`–`0x7f544` (35 fns) | ~40 KB | 21231–21650 | **PADDING** | all empty `halt_baddata` stubs |

### 3.2. gp-relative calibration constants (`DAT_ffffXXXX`) — 60 unique, top occurrences

| Symbol | Occ. | Context | Note |
|---|---|---|---|
| `DAT_ffffe700` | 46× | bitmask test (`& in_r12`) — L14464, 4265, 6880 | flag/enable-cal candidate [HYP] |
| `DAT_ffffe256` | 29× | mixed | — |
| `DAT_ffff8f11` | 19× | threshold comparison with 0x1cdb/1cdc/1cdd (19136–19145) | in_PSW-tainted |
| `DAT_ffffe180` | 14× | L4265 bit test | — |
| `DAT_ffffe0ff` | 14× | **±cal-saturation in 7 places** (7756…17569) | **magnitude-clamp candidate** [HYP, Verify: not proven] |
| `DAT_ffff8f50` | 7× | `+ -0xB` (L2344) | secondary limit candidate |
| `DAT_ffffe28c` | — | `& 4` flag test (L3741) | ADAS-flag candidate [HYP] |
| `DAT_ffffe680` | — | `[in_r1] < 0xb` byte index (L8273) | threshold-table candidate [HYP] |
| `DAT_ffffe081` | 3× | ±cal-saturation (L17690) | secondary clamp candidate |

> **IMPORTANT:** these are **symbolic references** — the actual **values sit in the firmware's calibration data block**, which **is not decompiled**. Converting to degrees/mrad **requires reading the cal block** (see 5.3).

---

## 4. MODIFIABILITY — where the range/speed gate could be tuned for LCA

> ⚠️ The target surface is **better localized** than in the v850e3 version, but the **concrete cal value and the saturate target are still unknown**. Confidence: **LOW–MEDIUM**.

### 4.1. Candidate tuning points (from the native decode)

1. **Magnitude-clamp cal.** Most likely candidate: **`DAT_ffffe0ff`** (the ±cal-saturation cluster, `FUN_00042650` family). Greater lateral-angle authority for LCA/lane-change would be achieved by **raising its ± value** — **provided** it actually sits on the external-request path (currently **not proven**, because the saturate output is discarded). Secondary: `DAT_ffffe081`, `DAT_ffff8f50-0xB`.
2. **Rate/slope limit.** Typically a second cal alongside the clamp (max Δangle per dt). Not clearly localized — losing the saturate targets means it cannot be separated from the magnitude limit.
3. **Speed gate.** The current `0x61aa` candidate is a **phantom** → not patchable. A real km/h gate **has not been read out**; if it exists, it's around the `DAT_ffffe700`/`e680` flag/threshold cals or in the jumptable dispatchers.
4. **ADAS flag / hands-on-wheel override.** Candidate flag cals: `DAT_ffffe28c & 4`, `DAT_ffffe700 & in_r12`. The enable bit / hands-off tolerance could be tuned here — but the attribution is not proven.

### 4.2. Why this cannot be reliably done now

- **The cal values are unknown:** `DAT_ffffe0ff` etc. are just symbols; the physical address and value sit in the **non-decompiled calibration block**.
- **The saturate targets are lost:** it cannot be proven **which cal sits on the external-request path** and which is on the driver-torque/assist path → a blind patch could modify the **wrong branch**.
- **The dispatchers are broken:** the jumptables at `0x35404`, `0x55652`, `0x56806` were not recovered (204 jumptable failures file-wide) → the gate/blend control path cannot be traced.

### 4.3. Risks (functional safety)

- The EPS is **ASIL-D**-like in nature; the angle/torque limit is part of the **system safety concept** (bounded ADAS authority, driver override). Raising the magnitude/rate/speed limit would bypass the **plausibility check and hands-on protection**.
- Likely **dual-core / monitor core**, CRC/rolling-counter on the CAN signal, cal-integrity check → a naive patch → **DTC/limp mode/watchdog reset**.
- Homologation/warranty: modifying the range limit is **not for road use**.

**Summary:** the tuning surface **can now be named** (`DAT_ffffe0ff` cluster for magnitude, `DAT_ffffe700/e28c` for the flag), but the **concrete value and branch attribution are not proven** — the patch **cannot be reliably carried out** without reading the cal block and recovering the saturate targets/jumptables.

---

## 5. Certainty labels and OPEN points

### 5.1. Labeled findings

| Claim | Label |
|---|---|
| Native RH850 decode: `halt_baddata` 1.10 → **0.59/fn** (144/244) | **[PROVEN]** — counted directly |
| `0x6731a`–`0x7f544` (35 fns) = **PADDING**, all empty `halt_baddata` | **[PROVEN]** — read directly |
| The 4 "large loops" (0x76774/0x7924c/0x7cf0c/0x7f544) are in the padding → **not lost code** | **[PROVEN]** — correction to the v850e3 version |
| All 8× occurrences of `0x67` are **struct byte-offsets**, not ±103 mrad | **[PROVEN]** |
| `10000`'s single occurrence = phantom store offset at the padding boundary (`FUN_00066bbc`) | **[PROVEN]** |
| `±2060/0x80c` and `±10000/0x2710` as a clamp: **MISSING** | **[PROVEN negative]** — grep 0 |
| **All 1698 `__saturate()` results discarded** (0 assignments) | **[PROVEN]** — the main reason the limit chain cannot be closed |
| `DAT_ffffe0ff` ±cal-saturation pattern in 7 places | **[PROVEN that it exists]** |
| `DAT_ffffe0ff` **as an ADAS clamp** | **[HYPOTHESIS — Verify: does NOT hold, artifact level]** |
| Only **3 real `DAT_ffff` compares**, all bit/flag tests, none a value clamp | **[PROVEN]** |
| Speed-gate candidate `0x61aa` sits on a **phantom `in_r18`** | **[PROVEN that it's an artifact]** |
| Real km/h constant (0x3e8/0x2ee0…) nowhere | **[PROVEN negative]** |
| Blending/torque in the `0x55000–0x58000` jumptable state machine | **[HYPOTHESIS]** — density-based |
| Scaling spec (0.05 mrad/bit, 0.1°/bit, ±103 mrad, ±1000°) | **[SPEC-BASED]** — not from the code |

### 5.2. What improved with the native decode (v850e3 → RH850)

- **Padding clarified:** the 0x67000+ misinterpretation is gone; the real code region (`0x1c000–0x66bbc`) is separated out.
- **SATADD/SATSUB recognized:** 1698 real saturations are visible (in v850e3 this showed up as address-arithmetic garbage).
- **Cal reads visible:** 60 unique `DAT_ffffXXXX` gp-relative symbols (where the limits live).
- **Signed reads:** 593 `(short)` — the signal paths can be traced up to the dispatchers.

### 5.3. What is STILL broken (needed for the real answer)

1. **`__saturate`'s target operand is lost** (1698/1698 discarded) — Ghidra's RH850 intrinsic handling needs to be fixed, or the SATADD/SATSUB target registers manually reconnected. **Without this the clamp/blend output is unreadable.**
2. **Jumptable dispatchers** (`0x35404`, `0x55652`, `0x56806`; 204 failures) — the gate/blend control path was not recovered.
3. **Calibration data block values** — the actual numbers behind the `DAT_ffffXXXX` symbols (where the magnitude/rate/speed limits live). The firmware's cal section needs to be read out separately.
4. **CAN-RX unpacking** — still no CAN/RSCAN symbol; matching the ExtSteeringAngleReq / LaRefAng_No_Req message ID + bit layout (DBC/ARXML) would allow the raw read to be searched at the byte level.
5. **Phantom registers** (`in_rXX`/`unaff_`) in the main functions — a more precise stack-frame/calling-convention recovery would reduce this.

---

## Closing

**Honest final conclusion:** the native RH850 decode is a **real step forward** — the code structure recovered, it became clear that `0x67000+` is **padding** (not a lost loop), and the saturating operations and gp-relative calibration reads **became visible**. **But the 4 ADAS questions still have no hard number**, because: the candidate constants (0x67/103, 10000) are **struct offsets**; **every `__saturate` output is discarded** (precisely the clamp/blend result); the limits sit in the **cal data block** (not decompiled); the speed-gate candidate is a **phantom**; the blending is in the **jumptable dispatchers that were not recovered**. `DAT_ffffe0ff` is the **best magnitude-clamp candidate**, but **not proven at Verify level** (artifact context). The next step is to **read the cal block** + **recover the saturate targets and jumptables** — until then any concrete limit number would be unfounded.
