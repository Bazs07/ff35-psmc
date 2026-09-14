# PSCM (Ford Focus Mk3.5 / C1MCA EPS) — UPDATED functional description from the native RH850 decode

**Module:** PSCM = electric power steering (EPS), Renesas **RH850** (Vector/AUTOSAR-based stack)
**Source:** `F:/FF3.5_ANALYSIS/decompiled/pscm_rh850native.c` — 21,650 lines, 751,957 bytes, **244 decompiled functions**, no symbols
**Decode status:** NATIVE RH850 SLEIGH, code base `0x1C000`; the `0x67000+` region is **padding** (35 empty `halt_baddata` stubs)
**Date:** 2026-09-14
**Method:** `grep -a` / `sed` on the decompile (`-a` needed due to NUL bytes), citing concrete lines/function addresses
**Relation:** this **supplements** `12_pscm_larefang.md` with a functional description; it **supersedes** the claims of the old `modules/PSCM_DETAILED.md` (v850e3/esaulenka) (see section 4)

---

## 0. TL;DR (3 sentences)

The native decode recognizes the assist-torque math as **1698 `__saturate()` (RH850 SATADD/SATSUB) intrinsics** — versus the esaulenka decode's 0 `__saturate` / 458 raw `int5` chains — and reveals a clean scaling divider (`FUN_0001cf5c`), 60 gp-relative calibration cells, and a **symmetric ±`DAT_ffffe0ff` saturating clamp idiom in 7 places**, which is the range limit of the external ADAS angle/torque request. **[PROVEN]** that the idioms exist; **[HYPOTHESIS]** exactly which is the `LaRefAng` nudge path and which is the `ExtSteeringAngleReq` angle-control path, because (a) all 1698 saturations have their **target operand discarded**, (b) the `DAT_ffffe0ff` context all runs into `halt_baddata`, (c) the file has **not a single `LaRefAng`/`ExtSteering`/CAN/CRC string** (grep: 0). The CAN RX/TX layer and the real cal values remain un-decoded — the hard ADAS numbers sit in the non-decompiled calibration block and in the discarded saturation target registers.

---

## 1. Assist-torque computation — the fixed-point engine (`__saturate` = SATADD/SATSUB)

### 1.1. The dominant idiom [PROVEN]
- **1698 `__saturate()` calls** (`grep -c __saturate` = 1698). The native decoder recognizes the RH850 **SATADD/SATSUB** (saturating add/subtract) opcodes as intrinsics. This is the fingerprint of fixed-point motor/torque control: assist torque, integrators, and angle/torque errors are computed with 32-bit, overflow-protected arithmetic.
- **Companion patterns of Q-format signal processing:**
  - signed `(int)(short)` reads: **180×** (`(short)` reads total 593× — Q-format input),
  - `>> 0x1f` (sign-bit extraction, abs/sign): **355×**,
  - Q-scaling right-shifts: `>> 0x14` (21×), `>> 0x18` (19×), `>> 0x16` (12×), `>> 0xf` (10×) etc.,
  - **division/normalization: 363** spots (121 of them with a `(short)` cal divisor).
- **Sign-based absolute-value idiom** (e.g. `FUN_00035c40`, lines 2949–2954):
  ```c
  if (-(char)((short)uVar4 >> 7) == 0 ||
      -(char)((short)uVar4 >> 7) != (byte)((uint)-(int)(short)uVar4 >> 0x1f)) break;
  ```

### 1.2. Clean evidence: scaling/normalizing divider [PROVEN]
The module's cleanest function, `FUN_0001cf5c` @ `0x1cf5c` (38 B, lines 55–63) — normalizes a raw value by a runtime-set 16-bit cal divisor:
```c
uint FUN_0001cf5c(undefined4 param_1,int param_2) {
  int in_r14; int unaff_ep;
  __saturate(param_2 + 0xc);
  return (in_r14 + 0xa5e0000U) / (uint)(int)*(short *)(unaff_ep + 0x6c);
}
```
The `0xa5e0000` offset + `(short)(ep+0x6c)` divisor = a unit-conversion/scaling tuning point (raw ADC or angle → engineering unit).

### 1.3. The decisive limitation: every saturation's output is lost [PROVEN]
- `= __saturate` (assignment): **0**; standalone, discarded `__saturate(...)`: **1698**.
- Ghidra's RH850 intrinsic generates the SAT operation **without a target operand** → precisely the clamp/blend **result** is untraceable.
- Moreover, the **functions with the most saturations are the most corrupt:** `FUN_00035c40` (55 `__saturate`), `FUN_00040678` (46), `FUN_0004b8d4` (43). The first has a divide-by-zero infinite loop in its body (`unaff_ep = (ushort *)((uint)unaff_ep / 0);`), phantom registers (`unaff_ep`, `in_r16`), overlapping instructions — it **[HYPOTHESIS]** remains exactly which is the assist curve, which is the filter, which is the integrator.

**Label:** the style and presence of the fixed-point arithmetic is **[PROVEN]**; the concrete assist-curve/PI-chain algorithm is **[HYPOTHESIS]** (discarded targets + corrupt bodies).

---

## 2. External ADAS-angle interface and the range clamp (`DAT_ffffe0ff`)

### 2.1. The symmetric ±saturating clamp idiom [PROVEN to exist]
A very consistent **symmetric ±clamp** pattern in 7 places:
```c
__saturate(-(int)DAT_ffffe0ff);     // lower ±CAL bound (SATSUB setup)
__saturate(iVar7 + DAT_ffffe0ff);   // upper bound  (SATADD)
```
Occurrences (as pairs): 7756/7757, 7870/7871, 7975/7976, 8073/8074, 8149/8150 (all in the `FUN_00042650`/`_42700`/`_4272c`/`_42760`/`_427f6` family), `FUN_000469d2` @ 9077/9078, `FUN_00057c0a` @ 17568/17569. Secondary, rarer cal: `DAT_ffffe081` (1 pair, 17690). This is exactly the idiom used to saturate a signal to a **±cal magnitude** — for EPS this is the **range limit of the external-request** (how much angle/torque the ADAS is allowed to override the driver with).

### 2.2. Nudge vs. angle control — what can and can't be stated
- **Fact [PROVEN]:** the file has **no `LaRefAng`, `ExtSteering`, `LKA`, `assist` string** (grep = 0). The two request-type names come from the Ford CAN matrix/spec, **not from the binary**.
- **Structure [STRONG]:** there is one dominant symmetric authority cal (`DAT_ffffe0ff`, 14 references / 7 clamp pairs) + one secondary (`DAT_ffffe081`). This suggests **one shared authority saturation**, rather than two cleanly separate nudge and angle paths.
- **Enable/gate flags [HYPOTHESIS, without attribution]:**
  - `if ((DAT_ffffe28c & 4) != 0) ...` (line 3741) — flag-bit test,
  - `if (((int)DAT_ffffe700 & in_r12) != 0) goto code_r0x00056c52;` (14464) — bitmask (`DAT_ffffe700` is the most-referenced cal, 46×),
  - a recurring `if (... (param_3 & in_r12) != 0) goto code_r0x000559f6;` **in 4 places** (12336, 12835, 13279, 13750) — a shared enable gate in the 0x55000 state machine.

**Label:** the ±`DAT_ffffe0ff` clamp idiom is **[PROVEN]**; that it is gp-cal-controlled authority limit is **[STRONG]**; separating `LaRefAng` nudge from `ExtSteeringAngleReq` angle control, and the concrete mrad/degree value, is **[HYPOTHESIS]** — because the saturation target is discarded, the operand (`iVar7`) is at times stack-address garbage (`iVar7 - (int)&stack0x00000000`), and every clamp context runs into `halt_baddata`. The real ± value sits in the **cal data block** (not decompiled).

---

## 3. Memory / peripherals / state machine

### 3.1. Memory map [PROVEN / STRONG]
- **gp-relative (r4) global/cal window:** one contiguous `DAT_ffff8000` … `DAT_fffffff6` segment (−0x8000…−0x0a relative to gp), **60 unique cal cells**. Most frequent: `DAT_ffffe700` (46×), `DAT_ffffe256` (29×), `DAT_ffff8f11` (19×), `DAT_ffffe180` (14×), `DAT_ffffe0ff` (14×). Also accessed as an indexed table lookup (`(&DAT_...)[idx]`) → **map-based calibration**.
- **EP-relative (r30, Element Pointer) state struct:** one large runtime state block; most frequent field offsets: `+0x18` (91× — list "next" + base), `+0x40` (32×), `+0x1a` (27×), `+0x60` (24×), `+0x7c` (23×), `+0x80`/`+0x1e`/`+0x28`/`+0xd0` — the struct spans 0…0xd0+.
- **Low RAM/vector area:** `Ram000000xx` (36 unique), `DAT_000000xx` (28) — core/vector region.
- **`__synchronize()` (SYNCM memory barrier): 19×** — real memory ordering on interrupt/shared-variable paths (a sign of RTOS presence).

### 3.2. State machine = RH850 jumptable dispatchers [PROVEN to be present]
- `switch()` grep = **0**, because the compiler generated a **jump-table** dispatcher: **87** occurrences of the
  ```c
  (*(code *)(&DAT_XXXX + *(short *)(&DAT_XXXX + reg * 2) * 2))();
  ```
  indirect-call idiom (exactly the "switch/jumptable as indirect call" phenomenon flagged in the task), plus **102 "Could not recover jumptable"** warnings.
- Density in the **0x55000–0x58000** region (`FUN_00055652` 1684 B, `FUN_00056806` 2022 B) — candidate for the main control/blending state machine **[HYPOTHESIS]**; the dispatcher internals were not recovered.
- **185 `code_r0x...` gotos** — locally resolved but not reconnectable into C control flow.

### 3.3. CAN / peripherals [NOT VISIBLE]
- **No RS-CAN(FD) peripheral access:** `DAT_ffd*` (RH850 RS-CAN SFR region) grep = **0**; `mailbox`/`RSCAN`/`CANFD` = 0; rolling-counter `& 0xf` idiom = 0.
- The `DAT_ffffXXXX` cells are gp-relative globals, **not** CAN registers. The CAN RX/TX packing and the `LaRefAng`/`ExtSteeringAngleReq` signal unpacking live in the non-decoded layer.

---

## 4. What improved over the esaulenka decode, and what remains a limitation

### 4.1. Confirmed progress (both files grepped) [PROVEN]
| Metric | esaulenka (`pscm_esaulenka.c`) | native (`pscm_rh850native.c`) |
|---|---|---|
| `halt_baddata` calls | **258** | **144** |
| `__saturate` intrinsic | **0** (458 raw `int5` chains) | **1698** |
| SAT recognition | no — as address-arithmetic/`int5` garbage | **yes** — SATADD/SATSUB intrinsic |
| gp-cal visibility | scattered, misread | **60 unique `DAT_ffffXXXX`** |
| 0x67000+ region | "lost main loop" (wrong) | **padding** (35 empty stubs) — corrected narrative |

- **Key improvement:** esaulenka failed to recognize the saturations (0 `__saturate`, instead 458 `int5` comparison chains); the native decode identifies 1698 SATADD/SATSUB ops → the **style** of the fixed-point math is now readable, and the `FUN_0001cf5c` scaling divider came out cleanly.
- **Padding clarification:** the old description believed the `0x76xxx–0x7Fxxx` "large loops" were lost code; in reality they are **padding**, never code — the real code is in the `0x1c000–~0x66bbc` band.

### 4.2. What is STILL a limitation [PROVEN negative]
1. **Every `__saturate` target is discarded** (1698/1698) → the clamp/blend **output** is untraceable. This is the main reason neither the assist curve nor the branch attribution of the ± authority value can be closed.
2. **102 jumptables not recovered** → the gate/blend/state control path is fragmented (the interior of the 0x55000 state machine is dark).
3. **The cal values are unknown** — `DAT_ffffe0ff`, `DAT_ffffe700` etc. are just symbols; the real mrad/degree/km-h numbers sit in the **non-decompiled calibration block**.
4. **The CAN RX/TX layer is not visible** → the bit position of the `LaRefAng` (nudge) and `ExtSteeringAngleReq` (angle) signals cannot be tied to the clamp.
5. **Phantom registers** (`in_rXX`/`unaff_`) in the dense function bodies — a more precise calling-convention/stack-frame recovery would help.

---

## 5. Summary label table

| Area | Finding | Label |
|---|---|---|
| RH850 fixed-point engine (SATADD/SATSUB) | 1698 `__saturate`, 355 `>>0x1f`, 363 divisions | **[PROVEN]** |
| Scaling/normalizing divider | `FUN_0001cf5c` @0x1cf5c, `(x+0xa5e0000)/cal16` | **[PROVEN]** |
| Concrete assist-curve algorithm | discarded saturation targets, corrupt bodies | **[HYPOTHESIS]** |
| Symmetric ±authority clamp | `±DAT_ffffe0ff` in 7 pairs (+`DAT_ffffe081`) | **[PROVEN to exist]** |
| Clamp = gp-cal-controlled authority limit | one dominant cal, ±saturation idiom | **[STRONG]** |
| Separating nudge vs. angle control + mrad/degree | no string, target discarded, `halt_baddata` | **[HYPOTHESIS]** |
| gp-cal block (60 cells, ffff8000–fffffff6) | indexed map-based calibration | **[PROVEN]** |
| EP-struct state block (0x18/0x40/0x60…) | 91×+0x18 etc. | **[PROVEN]** |
| State machine = jumptable dispatchers | 87 indirect calls, 102 jumptable failures | **[PROVEN present] / [HYPOTHESIS internal logic]** |
| RTOS indicator (SYNCM) | 19 `__synchronize` | **[STRONG]** |
| CAN RX/TX + LaRefAng/ExtSteering signal | no RS-CAN SFR, string, rolling counter | **[NOT VISIBLE]** |
| Improvement esaulenka→native | 258→144 halt, 0→1698 saturate, padding clarified | **[PROVEN]** |

*Produced by `grep -a`/`sed` structural analysis of `pscm_rh850native.c`. The [NOT VISIBLE]/[HYPOTHESIS] items stem from the decompile's limitations (discarded SAT targets, unrecovered jumptables, un-decoded cal and CAN layers), not from the module lacking these features.*
