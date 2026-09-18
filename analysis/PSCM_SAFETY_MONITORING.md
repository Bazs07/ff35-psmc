# PSCM (CV6T-14C217-AR) — Safety / Monitoring / Fault-handling + ADAS steering authority

Static analysis only. Owner's own vehicle. Target: NXP DSP56800E application block01
(`pscm_fl_b01.bin`, VBF byte-base `0x1C000`, program base `P:0xE000`, `P = byte/2`).

Method note — decoder scope and a corrected instruction base
------------------------------------------------------------
The focused `m56800e_disasm.py` used previously **does not decode `CMP` at all** (its
`decode()` has no compare form). The earlier finding in `PSCM_SIGNAL_REGION.md` that
"there are only **2 `CMP #imm16`** in all of block01" was therefore an artifact of a tool
that could not see the instruction. I re-derived the real encodings from the DSP56800
binutils/CGEN opcode tables in `tool_sources/dsp56800-binutils-0.5` and re-scanned:

| form | first-word match | 2nd word | source |
|---|---|---|---|
| `CMP #imm16,fff` | `(w & 0xFC7F) == 0x5C40` | imm16 | base `0x5c40`, ifmt mask `0xfc7f` |
| `CMP x:imm16,fff` | `(w & 0xFC7F) == 0x5C74` | X-addr | base `0x5c74` |
| `SUB #imm16,fff` | `(w & 0xFC7F) == 0x5440` | imm16 | base `0x5440` |
| `ADD #imm16,fff` | `(w & 0xFC7F) == 0x4440` | imm16 | base `0x4440` |
| `CMP #<<imm7,fff` (short) | `(w & 0xFC60) == 0x5C00` | — | base `0x5c00`, mask `0xfc60` |

**Result: 131 `CMP #imm16`/`CMP x:imm16` and 463 short `CMP #imm7` in block01** — not 2.
The premise "the PSCM does essentially no compare-against-a-large-literal" is **refuted**.
(The scan is a raw word-stream match, so a minority of the 2-word hits fall in data/mid-
instruction; but dozens sit in unmistakable compare/clamp idioms cited below, and the
register-vs-register `CMP` form — the most common clamp shape in DSP code — is *not* counted
at all, so 131 is a floor.)

`fff` register field is bits 7–9; from the binutils disassembly examples the field maps
`A=0, B=1, X0=4, Y0=6, Y1=7` (values 2/3/5 are the extended accumulator sub-registers).
Register names below are given only where load-bearing.

--------------------------------------------------------------------------------
## 1. Assist / current / thermal limiting — genuine saturation clamps exist
--------------------------------------------------------------------------------

Four textbook two-sided **saturation-clamp idioms** were located. The idiom is:
`CMP #lo / Bcc skip / load lo / BRA / CMP #hi / Bcc skip / load hi`.

### (a) Signed ~14-bit clamp to [-8192, +8191] — `P:0x20B5B`
```
P:0x20B5B  5EC0 E000   CMP  #0xE000 (-8192), A
P:0x20B5D  A403        Bge  +3            ; if A >= -8192 keep
P:0x20B5E  E401 E000   (load -8192)
P:0x20B60  A907        BRA  +7
P:0x20B61  5EC0 1FFF   CMP  #0x1FFF (+8191), A
P:0x20B63  A703        Ble  +3            ; if A <= +8191 keep
P:0x20B64  E401 1FFF   (load +8191)
P:0x20B66  A901        BRA  +1
```
This routine reads peripheral **`X:0xF17C`** at `P:0x20B54` and `P:0x20B6A`
(`5E74 F17C` = `CMP x:0xF17C`), and compares against calibration `X:0x7D57` at
`P:0x20BC1`. `0xF17C` is in the on-chip peripheral band (`0xF0xx–0xF3xx`). This is an
**internal motor/sensor-domain quantity clamp**, not a CAN-signal clamp.

### (b) Signed 8-bit clamp to [-128, +127] — `P:0x1C1F9`
```
P:0x1C1F9  5EC0 FF80   CMP #0xFF80 (-128)
P:0x1C1FB  A403        Bge +3
P:0x1C1FC  8745 FF80   MOVE #-128, A
P:0x1C1FE  A906        BRA +6
P:0x1C1FF  5EC0 007F   CMP #0x007F (+127)
P:0x1C201  A703        Ble +3
P:0x1C202  8745 007F   MOVE #+127, A
```

### (c) Asymmetric clamp to [-4000, +21500] — `P:0x1C151`
```
P:0x1C151  5EC0 F060   CMP #0xF060 (-4000) ; A403 Bge
P:0x1C157  5EC0 53FC   CMP #0x53FC (+21500); A703 Ble
```
Asymmetric bounds → a physical-unit clamp (e.g. a signed torque/current or a scaled
speed term), not a symmetric field.

### (d) High-side clamp to +2047 (0x7FF), reading peripheral `X:0xF17C` — `P:0x17905`
```
P:0x17905  5E40 07FF   CMP #0x07FF (+2047), X0
P:0x17907  A702        Ble +2
P:0x17908  8744 07FF   MOVE #+2047, X0        ; clamp high to 2047
P:0x1790A  5E74 F17C   CMP x:0xF17C, X0
```
`+2047 = 0x7FF` is the **positive max of a signed 12-bit field**. It sits in a routine
that also reads peripheral `X:0xF17C` — again the motor/ADC domain.

### (e) Internal full-scale saturations
- `P:0x0FF03` and `P:0x0FF11`: `CMP #0x7FFE (32766), A` with a 1-instruction skip — near
  positive 16-bit full-scale saturation of an internal accumulator result.
- `P:0x18B27`: `CMP #0x8000 (-32768), A` — negative full-scale limit in the same class.
- `P:0x186DE`, `P:0x1874A`, `P:0x18523`, `P:0x1F0D3…`: clusters of `CMP #0x00FC`/`0x00FF`
  (252/255) — 8-bit range/index/status-byte bound checks in the peripheral-write routines
  (these routines write the `X:0xF143/F166/F167` register group = **peripheral A**, the
  motor-control timing group per `PSCM_ISR_MAP.md`).

**Honest labelling.** These are unambiguously **limit/saturation clamps**, and several sit
in code touching the motor-control peripheral registers (`0xF143/F166/F167`, `0xF17C`).
That is consistent with **assist-torque / current output limiting**. What is *not*
recoverable from this app block alone is the physical scaling of each clamp (Nm, A, °C),
because the per-unit scaling lives in the calibration block `CV6T-14C218-AX`, which is not
this file. So: **limiting demonstrably exists in the motor/sensor domain; the exact
engineering-unit ceilings are UNRESOLVED here (calibration-resident).**

An explicit **over-current / over-temperature literal** (a named `CMP #Ithresh` /
`CMP #Ttemp`) was **not** isolated as a literal — consistent with those thresholds being
calibration variables compared via `CMP x:imm16` (see §3 note on cal-resident thresholds),
not code constants. Marked UNRESOLVED rather than asserted.

--------------------------------------------------------------------------------
## 2. Torque-sensor plausibility (dual-sensor cross-check)
--------------------------------------------------------------------------------
Expected EPS pattern: two torque-sensor channels read from ADC, differenced, and the
|difference| compared to a tolerance; out-of-tolerance → fault + assist cut.

What is visible:
- Peripheral **A** (`X:0xF143/F166/F167` and neighbours `F141/F142/F145/F14C…`) is written
  and read heavily (F166 ×49, F167 ×34, F143 ×35 writes) and is the highest-rate ISR pair
  (vec17/vec20, `PSCM_ISR_MAP.md`). In an EPS this is the PWM/ADC-sample group that would
  deliver the two torque-sensor ADC channels.
- The `±8191` and `±2047` clamps (§1a, §1d) both read `X:0xF17C` — a single peripheral
  result register accessed in signal-conditioning routines.

What is **not** provable with the current decoder: the actual *two-channel difference-and-
compare*. The differencing would be `SUB`/`CMP` between two registers (register-register,
which the decoder does not emit) or `SUB #imm16` against a stored offset. I found
`SUB #imm16`/`ADD #imm16` forms in the scan but could not tie a specific pair to "channel A
minus channel B" without indexed-MOVE and ALU decode. **Dual-sensor cross-check is
structurally plausible and the ADC group is identified, but the specific plausibility
compare is UNRESOLVED (needs indexed-MOVE + register-ALU decode).** Not asserted.

--------------------------------------------------------------------------------
## 3. Watchdog / program supervision / integrity
--------------------------------------------------------------------------------
### RAM pattern / marker `0xA5A5`
`MOVE #0xA5A5, reg` occurs 7× (`P:0x16AD5, 0x16AEC, 0x17D50, 0x17D6E, 0x198D9, 0x21149,
0x21289`). At `P:0x16AD5`:
```
P:0x16AD5  8740 A5A5   MOVE #0xA5A5, r0
P:0x16AD6..            (store, then loop/compare)
```
`0xA5A5` is the classic **RAM walking-pattern / integrity signature** (and appears in
paired routines at `0x16AD5`/`0x16AEC`, i.e. write-then-verify shape). `0xAAAA` also
appears once (`P:0x24431`). This is consistent with a **RAM integrity / marker check**,
but I did **not** prove a full write-readback-compare March test. Labelled candidate.

### COP / watchdog service — UNRESOLVED (device map needed)
No `0x5555`/`0xAAAA`-to-one-address COP service handshake was found (`0x5555` count = 0).
The DSP56800E COP/watchdog is memory-mapped, but the exact register address depends on the
specific 56F8xxx device (part number not in the VBFs — same blocker noted in
`PSCM_ISR_MAP.md`). The peripheral-init writes at `X:0xF0C0–F0CA` and `X:0xF0D0–F0DA`
(single writes each, reset/init path) are candidate control-block initialisations but
cannot be named COPCTL/COPTO without the device datasheet. **COP service site UNRESOLVED.**

### ISR-timing monitor
Not isolated as such. The two-ISR peripheral-A pair (vec17/20) is the timing-critical
group; a timing/overrun monitor, if present, would live in that group's handler
(`P:0x12EAC`/`P:0x12E83`) — not decoded to that depth. UNRESOLVED.

### ROM integrity
No CRC/checksum-over-flash routine isolated in block01. (A bootloader-resident checksum in
`BV6T-14C220-AA` is the usual location and is out of scope of this block.) UNRESOLVED.

Structural note on thresholds (bears on §1, §4 and the speed-gate question):
29 of the 33 `CMP x:imm16` sites compare a register against **data/calibration memory below
`0x8000`** (addresses in the `0x546F, 0x70xx, 0x78xx, 0x79xx, 0x7Axx` band, e.g.
`P:0x1DA51 CMP x:0x7A80`, `P:0x268C7 CMP x:0x7819`), only 4 against a peripheral. **The PSCM
overwhelmingly compares against calibration-resident thresholds, not code literals.** This
is why literal-hunting understates the number of real limits, and why a specific speed or
current threshold can exist with no matching literal in this file.

--------------------------------------------------------------------------------
## 4. ADAS authority-clamp verdict (the central question)
--------------------------------------------------------------------------------
### 4a. Re-verification of the prior "no separate clamp" claim
- The prior premise ("only 2 `CMP #imm16`") is **factually wrong** (131 found). So the
  *argument* in `PSCM_SIGNAL_REGION.md` is not sound as stated.
- **However, the conclusion still stands on better evidence.** The genuine saturation
  clamps I found (§1a–d: ±8191, ±127, [-4000,+21500], +2047) all sit in routines that touch
  the **motor-control / ADC peripheral registers** (`X:0xF17C`, `X:0xF143/F166/F167`) — the
  internal assist/sensor domain — **not** the CAN lane-signal decode band.
- The 12-bit lane-signal decode (the class containing `LaRefAng`) is the table-driven loop
  at `P:0x12C85` using signal handles `0x37C9 / 0x18F5 / 0xE70A`, centre-offset
  `MOVE #0x0800 (2048)`, via the 3-word bit-field helper `E418 F800 0004`:
```
P:0x12C83  8745 37C9   MOVE #0x37C9, A        ; signal handle
P:0x12C85  8747 0800   MOVE #0x0800 (2048), r7; 12-bit centre offset
P:0x12C87  E418 F800 0004                     ; bitfield-extract/subtract helper (undecoded)
```
  **Inside this decode band there is no `CMP #imm16` magnitude clamp** — `0x0800` is used
  only as the centre subtraction, never as a comparison bound. The nearest 12-bit-width
  literals (`0x07FF`=2047 at `P:0x17905`, `0x0FFF`=4095 at `P:0x333EC`) are in *other*
  routines (peripheral/`0xF17C` domain and a separate handler), not in the `0x12Cxx`
  lane-decode loop.

**Verdict: CONFIRMED (on corrected evidence).** The PSCM does **not** apply a separate,
tunable magnitude clamp to the received `LaRefAng` beyond the 12-bit field width × the
IPMA's mrad/bit scaling. The ±5.87° lane-reference ceiling is inherent to the field
(2048-centred 12-bit × 0.05 mrad/bit), reproduced by the `(raw − 2048)` decode at
`P:0x12C85`, and is **not** a PSCM constant that could be raised by editing this app block.
This matches the Pre-FL↔FL identity result (the `0x12C85` loop is ~99% identical to Pre-FL
`P:0x11E32`). The clamps that *do* exist bound the **internal assist output**, downstream of
and independent from the lane-request magnitude.

### 4b. LKA vs LCA — single applied-correction path; ~40 km/h gate (coordinator lead)
Treated as an untrusted hypothesis and checked against the binary:

1. **Separate LKA vs LCA inputs?** No. Per the network map (`OSSZEFOGLALO_LCA.md`, the
   `ford_cgea1_2_ptcan_2011.dbc`), lane steering arrives on a **single** command group
   `0x3CA/0x3CB` carrying `LaRefAng_No_Req` (+ `LaRampType_B_Req`, `LaCurvature_No_Calc`).
   There is **no distinct "LCA-correction" CAN signal** separate from an "LKA-correction";
   LKA vs LCA is a distinction of *activation/ramp semantics on the IPMA send side*, not two
   PSCM inputs. The APA path is separate (`0x3A8 ExtSteeringAngleReq`). In the PSCM the
   12-bit lane class is decoded by the one loop at `P:0x12C85`. So there is a **single
   applied lane-steering-correction path (LaRefAng), plus the APA angle path** — consistent
   with the community claim that no distinct LCA-apply path exists in this PSCM.

2. **Is LaRefAng consumed or received-but-never-consumed?** UNRESOLVED with the current
   decoder. The decode loop at `P:0x12C85` demonstrably *extracts* the field (writes a
   decoded RAM value via the `E418 F800 0004` helper), but tracing the downstream *consumer*
   into the torque-mixing/assist-sum requires indexed-MOVE and register-ALU decode the tool
   lacks. I can neither confirm an active continuous-correction consumer nor prove the
   signal is dead. **An honest "no LCA-apply path proven; the LaRefAng decode is the only
   lane-correction entry, and its consumer is not decodable here" is the current state.**
   (Note the Pre-FL↔FL identity result implies whatever consumer exists is the *same* in
   both versions — so if LCA works Pre-FL and not FL, the differentiator is not this PSCM
   receive/decode code.)

3. **~40 km/h speed gate?** No `~40 km/h` *literal* gate was found, but this is expected:
   per §3, PSCM thresholds are calibration-resident and compared via `CMP x:imm16` against
   the `0x70xx–0x7Axx` cal band (e.g. `P:0x1DA51 CMP x:0x7A80`, `P:0x268C7 CMP x:0x7819`).
   A vehicle-speed enable threshold would be one such cal variable (in `CV6T-14C218-AX`),
   **invisible as a code constant**. The speed *source* (the PSCM's vehicle-speed CAN RX
   slot) and the specific enable compare are **UNRESOLVED** in this app block. The recurring
   `CMP #0x1D4C (7500)` cluster (`P:0x18F5F…0x1994C`) is a candidate threshold but its
   routine mixes an `ADD #0x1D4C` (`P:0x18F62 45C0 1D4C`), so it is **not** a clean gate and
   is not asserted as the speed gate.

--------------------------------------------------------------------------------
## 5. Fault reactions / DTC / fault state machine
--------------------------------------------------------------------------------
- **Fail-safe = motor-output disable via peripheral A.** The assist-cut mechanism is the
  write path to the motor-control timing group `X:0xF143/F166/F167` (peripheral A,
  vec17/vec20). Assist reduction/shutdown is effected by driving those PWM/enable registers
  (the `0x00FC`/`0x00FF` bound-checks at `P:0x186DE…0x188xx` sit in exactly these
  register-write routines). The precise "on fault → write disable value" edge is
  UNRESOLVED (needs the register bit map).
- **DTC set path — UNRESOLVED.** No DTC-store routine was isolated in block01. The diagnostic
  DID/handler machinery documented elsewhere (`fl_did_handler.lst`) is the UDS surface, not
  the internal fault-latch. A fault→DTC map and a fault state machine could not be cited to
  program addresses with the current decode depth; not asserted.
- **What is citable:** limits (§1) and the RAM-marker/integrity candidate (§3) are the
  monitoring primitives; the reaction is the peripheral-A disable write. The full
  fault→reaction→DTC state machine is **not** resolved from this block alone.

--------------------------------------------------------------------------------
## 6. Unresolved (explicit)
--------------------------------------------------------------------------------
- Engineering-unit values of the §1 clamps (calibration-resident in `CV6T-14C218-AX`).
- The dual-torque-sensor difference/plausibility compare (needs register-ALU + indexed-MOVE
  decode).
- COP/watchdog service register + ISR-timing overrun monitor (needs the exact 56F8xxx device
  peripheral/vector map; part number absent from VBFs).
- ROM/flash CRC (likely bootloader-resident, out of this block).
- The LaRefAng *downstream consumer* (assist-mixing) — cannot confirm consumed vs dead.
- Vehicle-speed source slot and the enable-threshold compare (cal-resident; not a literal).
- DTC-store routine and fault state machine.

--------------------------------------------------------------------------------
## Summary
--------------------------------------------------------------------------------
**Limits that exist (cited):** genuine two-sided saturation clamps at `P:0x20B5B`
([-8192,+8191]), `P:0x1C1F9` ([-128,+127]), `P:0x1C151` ([-4000,+21500]), and a +2047
high-clamp at `P:0x17905`; internal full-scale saturations at `P:0x0FF03/0x0FF11`
(`#0x7FFE`) and `P:0x18B27` (`#0x8000`); 8-bit bound checks in the motor-control
peripheral-write routines. These live in the **internal assist/current/sensor domain**
(peripheral registers `X:0xF17C`, `X:0xF143/F166/F167`), i.e. they are the assist-output
limiting, not a lane-request clamp.

**Correction to the record:** block01 contains **131 `CMP #imm16`/`CMP x:imm16` and 463
`CMP #imm7`**, not "2". The prior tool could not decode `CMP`; the "no large-literal
compares" premise is refuted, and most real thresholds are compared against calibration
memory (`CMP x:imm16`), not literals.

**ADAS authority-clamp verdict (CONFIRMED on corrected evidence):** the PSCM applies **no
separate tunable magnitude clamp** to the received `LaRefAng`. The lane decode at
`P:0x12C85` uses `2048` only as the 12-bit centre offset, with no `CMP` bound in that band;
the ±5.87° ceiling is the field-width × IPMA mrad/bit scaling. Lane steering reaches the
PSCM on a **single** command path (`0x3CA/0x3CB` → LaRefAng); there is **no distinct
LCA-vs-LKA input path** in the PSCM. Whether that single LaRefAng path has an *active*
downstream consumer (vs received-but-unconsumed) and whether a ~40 km/h enable gate exists
are **UNRESOLVED** here — both would be calibration-driven and/or need deeper ALU/indexed
decode; a ~40 km/h *literal* gate does not exist because PSCM thresholds are
calibration-resident.
