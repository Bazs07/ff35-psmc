# PSCM motor-control heart — EPS torque-assist loop & motor drive

Target: Ford Focus Mk3.5 PSCM (electric power steering), ECU 0x730, CPU = NXP/Freescale **DSP56800E**.
Static analysis of the main application block (`CV6T-14C217-AR`, VBF byte-base `0x1C000`, 409600 B).
Program addresses are **16-bit words**: `P = VBF_byte / 2`, so this block begins at `P:0xE000`.
On-chip peripherals are memory-mapped in **X: data** at `0xF000–0xFFFF`.

Tooling: `analysis/m56800e_disasm.py` (focused: decodes control-flow, absolute `X:` moves, bit-field
ops; ALU/MPY/MAC words print as `.word`, so all arithmetic below is inferred structurally, never from
decoded multiplies). Peripheral clustering: `scratchpad/scan_periph.py` (this run). Builds on
`PSCM_ISR_MAP.md`, `PSCM_SIGNAL_REGION.md` (CAN signal-config engine 14C386) and the LaRefAng decode —
those are **not** redone here.

Confidence tags: **[PROVEN]** = from decoded instructions/values; **[STRONG]** = behavioural
signature that admits essentially one reading; **[INFERENCE]** = plausible, alternatives open;
**[UNRESOLVED]** = cannot be settled with this ISA + focused decoder.

---

## 1. Peripheral map (PWM / ADC / position)

180 distinct absolute `X:0xFxxx` registers are touched. They fall into clean, base-aligned blocks.
Register *semantics* are read from init constants (reset handler `P:0x12D80…`, and a second init
body at `P:0x1AFF8…` / `P:0x17C80…`) and from access rate.

### 1a. Dual ADC — `X:0xF200` (ADC-A) and `X:0xF240` (ADC-B) — **[STRONG]**
Two identical converter banks spaced exactly **0x40** apart, each programmed with an **8-entry sample
list** by writing indices 0..7 to one list register:
```
P:0x1AFFA  8654 F203 0000   MOVE.W #0x0000,X:0xF203   ; ADC-A sample-slot list 0..7
 …          (F203 = 1,2,3,4,5,6,7)
P:0x1B01A  8654 F243 0000   MOVE.W #0x0000,X:0xF243   ; ADC-B sample-slot list 0..7
P:0x1B03B  8654 F205 00EE   MOVE.W #0x00EE,X:0xF205   ; ADC-A scan/status
P:0x1B03E  8654 F245 00EE   MOVE.W #0x00EE,X:0xF245   ; ADC-B scan/status
```
Per bank: control/trigger `F200/F240`, list-index `F203/F243` (hot: 15/14 writes), status `F205/F245`,
result/limit registers `F211–F229` and `F251–F269` (16 consecutive each). Writing a monotonic channel
list is the DSP56800E dual-ADC12 idiom. **Two converters × 8 slots = up to 16 analog inputs** — the
motor-phase currents, torque-sensor bridge(s), motor/supply voltage and temperatures. Exact channel
assignment is **[UNRESOLVED]** (needs the board/pinmap). This is the **motor-current + torque + supply
sensing** front-end.

### 1b. PWM motor drive — `X:0xF140 / F160 / F180 / F1A0` submodules + `F1Bx` master/fault — **[STRONG]**
A large module with four **0x20-word-spaced submodules** (F140, F160, F180, F1A0) plus master/fault
control at F1A0–F1BD. Per-submodule registers `F16x` are the hottest write targets in the whole map
(`F143` 35×, `F166` 37×, `F167` 28×, `F165` 12×, `F142` 9×, `F167` written from a computed register in
the fast path), which is the fingerprint of PWM duty/value registers reloaded every control period.
Init (reset handler):
```
P:0x12DBC  8654 F1A0 0000 … F1A6 8000 … F1A8 8280 … F1A9 0C00   ; master ctrl / mask / config
P:0x12DB9  8654 F1BD 0021                                        ; fault/enable
```
The **three active submodules F140/F160/F180 = three half-bridge PWM phases** (F1A0 = master/sync). See
§5 (motor type). The duty-update inner stage reads one submodule register and writes the compare:
```
P:0x1261F  F07C F165   MOVE.W X:0xF165,reg5:0
P:0x12625  D07C F166   MOVE.W reg5:0,X:0xF166      ; read-modify → PWM value (F160 submodule)
```
A second sequential 16-register config block at `X:0xF020–0xF02F` is written **once** at init with
three ~13-bit compare-like constants and four identical `0xB817` words:
```
P:0x12D9B  F028 1FC3 / F029 1BA3 / F02A 1DA3   ; three compare/limit values
P:0x12DA4  F02B..F02F = B817 (×4)              ; deadtime / config
```
This is either a companion PWM output/deadtime/fault block or an output-driver config port
**[INFERENCE]**; it is init-only and not touched by the fast loop.

### 1c. Timers / position timebase — `X:0xF0C0` and `X:0xF0D0` — **[STRONG behaviourally, role INFERENCE]**
Two identical channel banks (Quad-Timer-style: COMP/LOAD/CNTR/CTRL/SCTRL layout), both programmed by
the routine at `P:0x17C80`:
```
P:0x17C89  8654 F0C0 EA60   MOVE.W #0xEA60,X:0xF0C0   ; COMP1 = 60000
P:0x17C98  8654 F0C6 3020   MOVE.W #0x3020,X:0xF0C6   ; CTRL  (count mode / primary src)
P:0x17C95  8654 F0C7 4000   MOVE.W #0x4000,X:0xF0C7   ; SCTRL
P:0x17CA4  8654 F0D0 004B   MOVE.W #0x004B,X:0xF0D0   ; 2nd channel COMP1 = 75
P:0x17CB3  8654 F0D6 3020 / F0D7 4000                 ; 2nd channel CTRL/SCTRL
```
CTRL=`0x3020`, SCTRL=`0x4000` and a large period (60000) are the Quad-Timer configuration idiom. These
provide the **control-loop timebase and/or motor-position input-capture** (a brushed EPS uses a
timer/Hall capture; a PMSM uses a resolver/encoder path). Whether F0C0/F0D0 are timebase vs.
position-capture is **[UNRESOLVED]**.

### 1d. Serial comms (CAN / SCI) — `X:0xF280–0xF284` — **[STRONG]** (carried from `PSCM_ISR_MAP.md`)
Three ISRs (vec68/69/72) drive `F280/F281/F283/F284` and copy to RAM `0x1643/47/4C` (Rx/Tx/Error).
This is the **vehicle-CAN interface** that delivers the speed signal and the ADAS angle requests via the
14C386 signal-config engine. Not re-derived here.

### 1e. Fast-loop auxiliary block — `X:0xF340–0xF361` — **[INFERENCE]**
Co-serviced by the control ISR (§2). Init: `F350=0, F351=0x3C, F353=0xF809, F358=0x6000, F35A=0x20,
F35B=0, F35C=0xFFFF`. `F353` is re-written `0xF809` on **every** control-ISR entry and `F361` is **read**
each entry (see §2) — behaviour of a timer/PWM-sync reload plus a captured analog/status word. Precise
module identity **[UNRESOLVED]**.

### 1f. Misc / system
`F020–F02F` (§1b), `F065` (11×, hot flag), `F2C0/F2C1` (small control, written `0x009C`/`0x0003` at
`P:0x12F05`), `F2D0–F2D5`, `F323`, `F400/F410/F414` (SIM/clock/GPIO), `FF1E`, `FF82` (COP/OnCE high
regs). All **[INFERENCE]**, none in the fast path.

---

## 2. High-rate control ISR — vec17 `P:0x12EAC` and vec20 `P:0x12E83` — **[STRONG]**
The tightly-coupled ISR **pair** identified in `PSCM_ISR_MAP.md` as "peripheral A" is the motor-control
timing loop. Both share one prologue and one register set, and run the highest-rate interrupt:
```
P:0x12E83  E254 0161        JSR P:0x00161            ; common context-save (block00)
P:0x12E88  8654 F353 F809   MOVE.W #0xF809,X:0xF353   ; reload aux/sync (§1e)
P:0x12E8D  8654 F143 BF00   MOVE.W #0xBF00,X:0xF143   ; PWM submodule reload/flags
 …bit-field ops on F340/F160/F163…
P:0x12EA3  8654 F166 0000   MOVE.W #0x0000,X:0xF166   ; PWM value/clear
--- vec17 P:0x12EAC : identical body ---
P:0x12ED2  F07C F1BD        MOVE.W X:0xF1BD,reg5:0     ; read PWM fault/capture
P:0x12ED6  F07C F361        MOVE.W X:0xF361,reg5:0     ; read captured analog/status (§1e)
```
So each control interrupt: (1) reloads PWM (`F143`,`F166`) and the aux/sync timer (`F353`), (2) samples
two captured words (`F1BD`, `F361`), (3) calls the heavy compute via `JSR P:0x00161` → block00. This is
the **PWM-reload / current-commutation ISR** — exactly the high-rate loop expected of a DSP56800E EPS.
The ADC results (§1a) are consumed by the compute reached from here; the loop closes by writing the PWM
compare registers (`F166/F167`, §1b, e.g. `P:0x12625`). Two vectors on one register block = the classic
**PWM-reload + fault** interrupt pairing.

---

## 3. Torque-assist map + speed input

### 3a. 2-D calibration maps — pointer/row dispatch at `P:0x0F4A0` (mirror `P:0x0F800`) — **[STRONG structure]**
The calibration/curve area sits at the **start of the block, `P:0x0E2xx–0x0F4xx`**. It contains a
**table of row pointers** with a fixed stride of **0x31 (49) words**:
```
P:0x0F4AB  F08B     ┐ each entry is a pointer; consecutive entries differ by 0x31:
P:0x0F4AC  F05B     │  …EFF9, F02A, F05B, F08B, F0BC, F0ED, F11E, F14F, F180, F1B1, F1E2, F213…
P:0x0F4AD  F02A     ┘  (P:0x0F800… is a second, longer copy of the same pointer ladder)
```
Each pointed-to row (e.g. `P:0x0F05B`) is a **smooth, monotonic 49-entry curve** (`0005, 0019, 004B,
007E, 00B0, 00E2, …` rising and saturating). A pointer array of monotonic rows of equal stride is the
canonical layout of a **2-D characteristic map with bilinear interpolation** — one axis selects the row
(pointer index), the other indexes within the 49-word row. This is the shape of the **assist map
(applied torque × vehicle speed → assist level)**.

A **map-descriptor record** sits just after, at `P:0x0F8AC`:
```
P:0x0F8AE  0023      ; count = 35 breakpoints
P:0x0F8B1  0462 03C4 08C4   ; axis / scaling breakpoint values
P:0x0F8B4  EEC2      ; data pointer -> 64-entry smooth curve at P:0x0EEC2 (4C00,4DF0,4F50,50B0…)
```
Other smooth curves in the same area (candidate assist / linearisation / derate tables):
`P:0x0EEC2` (64), `P:0x0EF58` (30), `P:0x0E34A` (10, concave saturating), and a **duplicated pair**
`P:0x0E6E0` ≡ `P:0x0E7F2` (18 each — typical redundant safety copy). Table `P:0x0E599` is referenced from
far code (`P:0x199B1, 0x1A609, 0x1A7A1`).

**Honesty:** the region holds *several* 2-D maps/curves. That the torque-assist map is **among** them is
**[STRONG]** (layout + saturating shape + the pointer-row dispatch). *Which specific* table is
torque×speed→assist versus a torque-sensor linearisation, a motor-temperature/voltage derate, or a
damping/return curve is **[UNRESOLVED]** — the row/column index arithmetic and the interpolation are
`MPY`/`MAC` instructions this focused decoder leaves as `.word`, so the exact indexing cannot be quoted.
No gain, breakpoint or axis unit is asserted.

### 3b. Speed input — via CAN — **[STRONG, carried]**
Vehicle speed is not a local peripheral; it arrives on **vehicle CAN** (§1d, vec68/69/72 → RAM buffers)
and is unpacked by the **14C386 signal-config engine** (see `PSCM_SIGNAL_REGION.md`). That decoded speed
feeds the map's second (row-select) axis. The CAN path and signal decode are already documented and not
reproduced here.

---

## 4. Current-control loop (PI/PID) — **[INFERENCE / partially UNRESOLVED]**
The closed-loop structure is present but its arithmetic is not decodable here:
- **Measured current**: ADC-A/B results (§1a), sampled under the control ISR (§2).
- **Setpoint**: the assist/torque command from §3, converted to a current reference.
- **Actuator**: PWM compare writes `F166/F167` in the F160 submodule (`P:0x1261F→0x12625`,
  `P:0x12670` writes a *computed register* to `F167`).
The read-modify-write on the PWM value register bracketed by the ADC read and the assist lookup is the
expected `error = ref − meas → integrate → duty` skeleton. The **PI/PID error, integrator accumulator and
gain multiplies live in the block00 compute called at `JSR P:0x00161`** and use `MPY/MAC`/`SATADD` that
this decoder renders as `.word`. So the loop's **location is identified** (control ISR §2 → block00
compute → PWM write §1b) but the **gains and integrator state are [UNRESOLVED]**. No gain values invented.

---

## 5. Motor type — 3-phase BLDC/PMSM — **[STRONG]**
Converging structural evidence for a **3-phase brushless (BLDC or PMSM) drive**, not a single brushed
H-bridge:
1. **Three active PWM submodules** F140/F160/F180 (0x20-spaced) under one master/sync F1A0 (§1b) = three
   half-bridge phase legs.
2. Three distinct compare/limit constants in the companion output block (`F028=0x1FC3, F029=0x1BA3,
   F02A=0x1DA3`, §1b).
3. **Dual ADC with many channels** (§1a) — a 3-phase drive needs ≥2–3 phase-current samples plus supply;
   a brushed motor would not need 16 analog slots.
4. A dedicated timer/position path (§1c) consistent with rotor-position feedback for commutation.

**Not distinguishable here [UNRESOLVED]:** trapezoidal (Hall block-commutation) vs. sinusoidal
**FOC with Park/Clarke** (sin/cos, dq). Clarke/Park would appear as `sin`/`cos` table lookups and
`MPY/MAC` chains in the block00 compute, which this decoder cannot resolve. No FOC claim is asserted
beyond "3-phase".

---

## 6. Unresolved (honest list)
- Exact DSP56800E **device part number** (not in the VBFs) → cannot name registers from the vendor map;
  identities above are behavioural/positional inferences.
- **ADC channel → signal** assignment (which slot is phase-U current vs. torque vs. supply).
- `F0C0/F0D0` timers: control timebase vs. rotor-position capture.
- `F340–F361` block precise identity (§1e).
- **Which** calibration table is the torque×speed assist map (several 2-D maps coexist, §3a); its
  breakpoints, axes, units, and the interpolation math.
- The **PI/PID gains and integrator** (§4) — inside block00, `MPY/MAC`-based, not decoded.
- Trapezoidal vs. FOC commutation (§5).

---

## Summary
- **Peripheral regions (X: on-chip):** dual **ADC** at `F200`(A)/`F240`(B), 8-slot lists (motor
  current/torque/supply sense); **PWM motor drive** at `F140/F160/F180` submodules + master/fault `F1A0–
  F1BD` (three phase legs); **timers/position** at `F0C0`/`F0D0` (Quad-Timer layout); **CAN/SCI** at
  `F280–F284`; fast-loop aux/sync at `F340–F361`.
- **High-rate control ISR:** vector pair **vec20 `P:0x12E83`** + **vec17 `P:0x12EAC`** (PWM-reload +
  fault) — reloads PWM `F143/F166`, samples captures `F1BD/F361`, then `JSR P:0x00161` (block00 compute),
  closing on PWM compare writes `F166/F167` (`P:0x1261F–0x12625`).
- **Assist-map location:** 2-D map with **pointer/row dispatch at `P:0x0F4A0`** (mirror `P:0x0F800`),
  **row stride 0x31 = 49 words**, rows of smooth saturating data (`P:0x0F05B`, `P:0x0EEC2`, …) with a
  descriptor record at `P:0x0F8AC` (count 0x23, data ptr `0x0EEC2`) — the assist map is among these
  [STRONG]; the exact table + interpolation is UNRESOLVED. **Speed axis** comes from **CAN** via the
  14C386 signal engine.
- **Motor type:** **3-phase BLDC/PMSM** [STRONG] (3 PWM submodules + multi-channel dual-ADC current
  sensing + position timer); trapezoidal-vs-FOC UNRESOLVED.
