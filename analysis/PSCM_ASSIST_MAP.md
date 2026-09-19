# PSCM (CV6T-14C217-AR) — torque-assist map, vehicle-speed source, current loop

Static reverse-engineering only, owner's own vehicle, nothing flashed. Target: Ford Focus Mk3.5
PSCM electric power steering, NXP/Freescale **DSP56800E** (16-bit program words, `P = VBF_byte/2`;
on-chip peripherals in X: `0xF000–0xFFFF`). File analysed:
`scratchpad/work/pscm_fl_b01.bin` (VBF byte-base `0x1C000`). **This file covers program addresses
`P:0xE000 … P:0x40000` only** (409600 B = 0x32000 words). That single fact is load-bearing for
several tasks below and is proven here first.

Tool: `analysis/m56800e_disasm.py --byte-base 0x1C000`. It decodes control-flow, `X:`-absolute
MOVEs, bit-field ops and `CMP`. It does **not** decode indexed MOVEs, `MPY`/`MAC` or the byte-ALU;
those print as `.word` and are marked UNRESOLVED / inferred structurally, never quoted as arithmetic.

Confidence tags: **[PROVEN]** decoded instructions/values; **[STRONG]** one-reading behavioural
signature; **[INFERENCE]** plausible, alternatives open; **[UNRESOLVED]** not settleable with this
ISA + focused decoder / lives in absent flash.

Builds on `PSCM_MOTOR_CONTROL.md`, `PSCM_SAFETY_MONITORING.md`, `PSCM_CAN_DIAG.md`,
`PSCM_SIGNAL_REGION.md`. Does **not** redo the As-Built decode or the Pre-FL/FL byte-diff.

---

## 0. Load-bearing fact: the heavy compute is in an ABSENT flash block [PROVEN]

The high-rate control ISR and both output helpers call **into program addresses below `P:0xE000`**,
i.e. outside this file:

```
P:0x12E83  E254 0161   JSR P:0x00161     ; control-ISR compute entry (also P:0x12EAC, P:0x12B91)
P:0x10837  E254 01DA   JSR P:0x001DA     ; called from the analog/limit helper P:0x1080A
```

`P:0x00161` and `P:0x001DA` are in **block00** (`P:0x00000–0x0DFFF`), a separate VBF **not present**
in `pscm_fl_b01.bin` (which starts at `P:0xE000`). Therefore the parts of the assist-map
interpolation and the PI/PID current-loop arithmetic that this file dispatches *to* block00 are
**physically not in the file** and are UNRESOLVED-by-absence, independent of the decoder's byte-ALU
blindness. Prior docs cite "block00 compute @ P:0x00161" as the compute site; this note confirms it is
off-file. What *is* in this file is the peripheral I/O, the table region, the dispatch, the output
(PWM-write) stage and the enable/fault handling — decoded below.

---

## 1. Assist-map identity

### 1a. Correction to the record: `P:0x0F8AC` is NOT a standalone map descriptor [PROVEN]

Prior `PSCM_MOTOR_CONTROL.md` read `P:0x0F8AC` (count `0x23`, dataptr `0x0EEC2`) as "the map
descriptor". Tracing the only code that references it shows it is instead **one entry in a pointer
array feeding a generic descriptor-processing engine** — a parameter/monitoring/diagnostic table, not
a proven torque×speed map.

The pointer array is `P:0x0F8A3 … P:0x0F8AD`. Six routines load these addresses as pointer registers
and hand each to `JSR P:0x1A2B5`, e.g.:

```
P:0x1A876  8748 F8A7   MOVE.W #0xF8A7,reg5:8
P:0x1A87C  8748 F8AA   MOVE.W #0xF8AA,reg5:8
P:0x1A882  8748 F8A9   MOVE.W #0xF8A9,reg5:8
P:0x1A888  8748 F8AB   MOVE.W #0xF8AB,reg5:8
P:0x1A88E  8748 F8AC   MOVE.W #0xF8AC,reg5:8     ; <- the "map descriptor" address, as one of many
P:0x1A899  8748 F8AD   MOVE.W #0xF8AD,reg5:8
   (each followed by JSR P:0x1A2B5)
```
(also the clusters at `P:0x19D61…`, `P:0x19F76…`, `P:0x1A582…`.)

The records themselves are a **24-word (0x18) stride** table beginning at `P:0x0F8AE`, walked at
`P:0x1B71C`:
```
P:0x1B71C  874A F8AE   MOVE.W #0xF8AE,reg5:10
P:0x1B720  874A F8C6   MOVE.W #0xF8C6,reg5:10    ; +0x18
P:0x1B724  874A F8DE   MOVE.W #0xF8DE,reg5:10    ; +0x18
P:0x1B728  874A F8F6   MOVE.W #0xF8F6,reg5:10    ; +0x18
```
Record #0 at `P:0x0F8AE` contains `0023 0001 0000 0462 03C4 08C4 EEC2 …` — the `0x0EEC2` "dataptr"
lives at record offset 6. Adjacent records (`P:0x0F986`, `P:0x0F99E`) hold **embedded ASCII**
(`P:0x0F9B6 5344 412D` = "SD-A…"), **RAM pointers** (`0x1BFA`, `0x1C7F`, `0x1C7D`, `0x1BF9`) and
their own dataptrs (`EF51` @`0x0F98C`, `EF55` @`0x0F9A4`). This is the fingerprint of a **named
parameter / monitoring descriptor table** (each record: id/count, flags, RAM I/O cells, a data
curve), processed by a generic engine — not a bare 2-D assist map.

**Consequence:** `P:0x0EEC2` (a smooth monotone-rising 64-word curve `4C00 4DF0 4F50 50B0 …`) is the
**data for one descriptor record**, most consistent with a *scaling/linearisation* curve for a
monitored quantity. It is **not proven** to be the torque×speed→assist map. [Corrects prior.]

### 1b. The `P:0x0F4A0` row-pointer ladder [STRONG structure, indexing UNRESOLVED]

The ladder occupies `P:0x0F480 … P:0x0F4F8+`: a monotone-**decreasing** word sequence whose
consecutive deltas are `0x31–0x32` (49–50), with values spanning `0xE270 … 0xF8D9` — i.e. covering
the whole `P:0xE2xx–0xF8xx` data region:
```
P:0x0F4A0  F2A6      ┐ deltas ~0x31: … F2D7, F2A6, F275, F244, F213, F1E2, F1B1, F180, F14F …
P:0x0F4A1  F275      │
P:0x0F4A2  F244      ┘
```
A table of equal-stride pointers, each pointing to a `~49`-word row, into the region that also holds
the smooth curves, is the canonical layout of a **2-D characteristic map with row dispatch** (one
axis picks the row/pointer, the other indexes within the 49-word row). That the assist map is **among
these tables is [STRONG]**.

Two hard limits on identifying it precisely:
1. **No absolute-immediate xref loads the ladder base.** A full-binary scan for `MOVE #imm` of
   `0xF480 / 0xF4A0 / 0xF800` (the mirror) returns **nothing**. The ladder is reached only via a
   *computed* pointer (base + index), which this decoder does not surface. So I cannot quote the code
   that selects a row, nor prove the ladder is pointers vs. itself a smooth data ramp — **UNRESOLVED**.
2. **Row-select index arithmetic and the bilinear/`MAC` interpolation are UNRESOLVED** — they are the
   `MPY`/`MAC` compute reached via `JSR P:0x00161`/`P:0x001DA` in the **absent block00** (§0).

### 1c. Candidate assist curve `P:0x0E34A` [STRONG shape, role INFERENCE]
```
P:0x0E34A  28C5 32F2 376D 3A4E 3CBC 3DF4 3EA8 3EE9 3F5C 4000   ; 10 pts, concave, saturating to 0x4000
```
A 10-point concave curve rising and saturating at full-scale `0x4000` is the textbook shape of a
**torque→assist gain characteristic** (rising boost that saturates). Marked candidate; which axis /
units UNRESOLVED (calibration-resident + block00 indexing).

**Task-1 verdict:** the assist map is one of the equal-stride tables in `P:0xE2xx–0xF4xx`; the
`P:0x0F4A0` ladder is its most likely row-pointer table **[STRONG]**; `P:0x0E34A` is a strong
torque→assist-gain candidate. The exact table, its axes/breakpoints, the row-index computation and
the interpolation are **UNRESOLVED** (no absolute xref + block00-resident `MAC`). The earlier
`P:0x0F8AC`=map-descriptor claim is **withdrawn** (it is a parameter/monitoring descriptor).

---

## 2. Vehicle-speed source

Confirms and does not overturn `PSCM_CAN_DIAG.md` §2.4 (speed handle UNRESOLVED). Vehicle speed is
**not** a local peripheral; it arrives on vehicle CAN (`X:0xF280–0xF284`, three ISRs) and is unpacked
by the **14C386 signal-config engine** into a signal bank (bank `7F7D`/`7F79`/`7F81` are the
whole-byte / large RX banks — the plausible home of a road-speed byte). **The specific handle for
vehicle speed is UNRESOLVED** — the 14C386 descriptors carry numeric handles, the handle→name table
is not in this block, and the reference DBC is an un-materialised git-LFS pointer.

New negative evidence added here: the analog/limit helper `P:0x1080A` (called from the output stage,
§4) reads **on-chip** analog, not CAN speed —
```
P:0x10815  F27C F41C   MOVE.W X:0xF41C,reg5:4    ; SIM/GPIO or analog mux
P:0x10817  F47C F41A   MOVE.W X:0xF41A,reg5:8
P:0x1081B  F07C F20B   MOVE.W X:0xF20B,reg5:0    ; ADC-A result register
P:0x10837  E254 01DA   JSR P:0x001DA             ; block00 scale
```
so the decodable duty-limit path is **supply/analog-compensated (`0xF20B` ADC, `CMP #0x09C4`=2500)**,
not speed-tapered here. The point at which decoded CAN speed indexes the assist map / a speed gate is
the row-select arithmetic in **block00** (§0) and is **UNRESOLVED** in this file. The RAM cell holding
current speed cannot be pinned from decodable code (it is written by the byte-ALU 14C386 extractor and
read by indexed block00 code, neither decoded). No speed-scaling literal is asserted.

---

## 3. Speed-dependent assist shaping (speed taper) — UNRESOLVED

The classic EPS "reduce assist as speed rises" taper is a multiply of the torque→assist output by a
speed-indexed factor (or selection of a speed row in the §1b ladder). Both mechanisms are exactly the
`MPY`/`MAC` + indexed-row operations that live in **block00** (§0) and are not in this file. **No
decodable column, multiplier or speed-enter point is citable.** Marked **UNRESOLVED**.

Lane-interaction sub-question: whether the received `LaRefAng` correction is scaled by the *same*
speed taper or applied independently — **UNRESOLVED**, and it stays UNRESOLVED for the same reason the
prior docs give: the `LaRefAng` decode at `P:0x12C85` (`(raw−2048)`, handles `0x37C9/0x18F5/0xE70A`)
demonstrably *produces* the value via the `E418 F800 0004` bit-field helper, but its downstream
consumer (assist-mix / any speed scaling) is indexed/`MAC` code in block00. The decodable output stage
(§4) takes its demand from RAM `0x0B31`/`0x0B2E`; I **cannot prove** whether `LaRefAng` contributes to
those cells, and I found **no separate lane-apply gate** in the decodable output path. Consistent with
`PSCM_SAFETY_MONITORING.md` §4b (LaRefAng consumer not decodable).

---

## 4. Current / torque control loop

### 4a. What is PROVEN (in this file): the PWM output stage
The loop **closes** in decodable code at `P:0x12600` and its twin `P:0x125B2`. Both take an already
-computed drive value from PWM-submodule register `X:0xF165`, clamp it, and write the PWM compare
registers of the `F160` submodule:
```
P:0x1261F  F07C F165   MOVE.W X:0xF165,reg5:0    ; read computed duty (F160 submodule)
P:0x12621  5C71        (CMP #<<imm7 short)       ; two-sided clamp on the value …
P:0x12622  5C21        (CMP #<<imm7 short)       ; …
P:0x12623  D07C 1664   MOVE.W reg5:0,X:0x1664    ; latch last duty -> RAM 0x1664
P:0x12625  D07C F166   MOVE.W reg5:0,X:0xF166    ; WRITE PWM value/compare (phase A)
 …
P:0x1266A  F07C F165   MOVE.W X:0xF165,reg5:0
P:0x1266E  D07C 165E   MOVE.W reg5:0,X:0x165E
P:0x12670  D07C F167   MOVE.W reg5:0,X:0xF167    ; WRITE second PWM compare (phase pair)
```
A **duty magnitude bound of `0x01F4` = 500** is applied before the write:
```
P:0x125C0  44C3 01F4   (CMP #0x01F4 form)        ; duty ceiling 500
P:0x125C3  AD14        Bls P:0x125D8             ; over-limit -> directional-limit branch
```
The over-limit branch selects a **sign/direction-dependent limit constant** from calibration-shadow
RAM, chosen by `Bge`/`Ble` on a scaled value:
```
P:0x125E5  F07C 054E   MOVE.W X:0x054E,reg5:0    ; +dir limit
P:0x125F1  F07C 054F   MOVE.W X:0x054F,reg5:0    ; −dir limit
P:0x125F4  F07C 056B   MOVE.W X:0x056B,reg5:0    ; centre/other
   (twin set: 0x0552,0x0553,0x056D,0x056F,0x054C, all fed through JSR P:0x1080A / P:0x1080A→P:0x001DA)
```
So the **actuator half** is proven: *demand (RAM 0x0B31/0x0B2E) → block00 compute (F165) → clamp
(±500 / directional cal limits, supply-compensated via ADC `0xF20B`) → write `F166`/`F167`*. The
directional limits `X:0x054C/0x054E/0x054F/0x056B/0x056D/0x056F` are the **decodable current/duty
ceilings** (engineering units calibration-resident, per `PSCM_SAFETY_MONITORING.md` §1).

### 4b. What is UNRESOLVED: the PI/PID core
- **Measured current**: dual ADC (`X:0xF200`/`F240` banks, results `F20B…`, per `PSCM_MOTOR_CONTROL.md`
  §1a), sampled under the control ISR.
- **Error, integrator accumulator, proportional/integral gains**: computed inside `JSR P:0x00161`
  (control ISR) / `JSR P:0x001DA` (limit helper) — **block00, absent from this file (§0)**. Not
  decodable and not present; **UNRESOLVED**. No gain, no integrator address, no error variable is
  asserted. The error→integrate→duty skeleton is *located* (ADC in → block00 → F165 → clamp → F166/7
  write) but the arithmetic is off-file.

---

## 5. Assist enable / disable

### 5a. PWM-level enable & hard fault-disable [PROVEN]
The motor-drive enable/fault register is `X:0xF1BD`, initialised at reset:
```
P:0x12DB9  8654 F1BD 0021   MOVE.W #0x0021,X:0xF1BD   ; PWM run/fault-enable
```
Its fault status is read and masked in the run path:
```
P:0x12B9A  F17C F1BD   MOVE.W X:0xF1BD,reg5:2
P:0x12B9C  8740 1FE0   MOVE.W #0x1FE0,reg5:0          ; fault-bit mask
P:0x12BA5  8654 F353 FC05   MOVE.W #0xFC05,X:0xF353    ; re-arm aux/sync
P:0x12BAA  8654 F143 BF00   MOVE.W #0xBF00,X:0xF143    ; PWM reload/flags
```
**Hard disable path (assist off):** the two vector handlers `P:0x12E83` and `P:0x12EAC` (the vec20/
vec17 pair) each **zero the PWM value and then halt**:
```
P:0x12EA3  8654 F166 0000   MOVE.W #0x0000,X:0xF166   ; zero duty  => no assist torque
P:0x12EAB  A97F             BRA P:0x12EAB              ; spin (fail-stopped)
   (identical at P:0x12EC9 / P:0x12ED1)
```
i.e. on the fault vector the motor output is forced to zero and the loop self-traps — the fail-safe
"assist cut" is exactly this write to the PWM compare `F166` plus the `F143=0xBF00` reload. This is the
concrete, decodable **master disable at the motor-output level**.

### 5b. State-flag gating of the output [PROVEN presence, semantics INFERENCE]
The output stage is gated by RAM state flags before it writes the PWM:
```
P:0x125B2  F07C 1660   MOVE.W X:0x1660,reg5:0    ; state/direction flag (also read 0x14F0A,0x14F93,0x1BB2C,0x125B2)
P:0x125D8  F07C 1665   MOVE.W X:0x1665,reg5:0    ; second state flag
P:0x12B93  F07C 1697   MOVE.W X:0x1697,reg5:0    ; checked before fault-recovery block
   (also 0x1695 written at P:0x12BA3)
```
These are the motor-state / direction / fault-recovery flags. Their exact set/clear conditions
(ignition-run, motor-fault-latched, torque-sensor-valid) are set upstream in the **block00 scheduler**
and are **UNRESOLVED** here.

### 5c. Master ignition / torque-sensor-valid enable — UNRESOLVED
The top-level "may the motor produce torque at all" condition (ignition state, torque-sensor
plausibility valid, no latched fault) is evaluated in the block00 scheduler reached by `JSR P:0x00161`
(§0) and is **not in this file**. What is proven here is the **actuation gate it controls**: the PWM
enable register `F1BD` and the `F166`-zero / `F143` fail-stop (§5a). 

### 5d. Lane-apply interaction [UNRESOLVED, consistent with prior]
No separate lane-apply enable/clamp appears in the decodable enable or output path. The lane
correction (`LaRefAng`) decode (`P:0x12C85`) is upstream and its contribution to the demand cells
(`0x0B31`/`0x0B2E`) that the output stage consumes cannot be proven or excluded with this decoder —
same conclusion as `PSCM_SAFETY_MONITORING.md` §4. There is a **single decodable motor-output path**;
if lane correction is applied, it is summed into the demand inside block00, not gated separately here.

---

## 6. Proven vs UNRESOLVED (summary)

**PROVEN (cited, in-file):**
- Compute dispatched to absent block00: `JSR P:0x00161` (`P:0x12E83`), `JSR P:0x001DA` (`P:0x10837`);
  file covers only `P:0xE000–0x40000`. (§0)
- `P:0x0F8AC` is an entry in pointer array `P:0x0F8A3–0x0F8AD` feeding descriptor engine `P:0x1A2B5`;
  records are 24-word stride from `P:0x0F8AE` (`P:0x1B71C`), carry ASCII/RAM-ptrs/dataptrs → a
  parameter/monitoring table, **not** a bare assist map; `0x0EEC2` is one record's data curve. (§1a)
- PWM output stage: read `X:0xF165` → clamp (`CMP` short + `CMP #0x01F4`=500) → write `X:0xF166`
  (`P:0x12625`), `X:0xF167` (`P:0x12670`); directional cal limits `X:0x054C/054E/054F/056B/056D/056F`;
  supply/analog compensation via `X:0xF20B` ADC in `P:0x1080A`. (§4a)
- Enable/fault register `X:0xF1BD` (init `#0x0021` @`P:0x12DB9`, mask `#0x1FE0` @`P:0x12B9C`); hard
  assist-disable = `X:0xF166=0` + `BRA self` at `P:0x12E83`/`P:0x12EAC`. (§5a)
- State flags `X:0x1660/0x1665/0x1695/0x1697` gate the output. (§5b)

**STRONG (structure, not line-proven):**
- `P:0x0F4A0` equal-stride (≈49) pointer ladder = row-dispatch of a 2-D map; `P:0x0E34A` 10-pt concave
  saturating curve = torque→assist-gain candidate. (§1b, §1c)

**UNRESOLVED:**
- *Which* table is the torque×speed→assist map, its axes/breakpoints/units; the row-select index math
  and the bilinear/`MAC` interpolation (no absolute xref to the ladder + block00-resident). (§1)
- Vehicle-speed CAN handle/name, its scaling, the RAM cell holding current speed, and where it indexes
  the map / any speed gate (14C386 handle unbound + block00). (§2)
- The speed taper (column/multiplier/enter-point) and whether `LaRefAng` shares it. (§3, §5d)
- PI/PID error, integrator accumulator and gains — in absent block00. (§4b)
- Master ignition / torque-sensor-valid enable condition — in absent block00; only its actuation gate
  (`F1BD`, `F166`-zero) is in-file. (§5c)

Nothing invented; every program-address claim above is backed by quoted disassembly from
`m56800e_disasm.py` over `pscm_fl_b01.bin`.
