# PSCM (Ford Focus Mk3.5) - Detailed functional description

**Module:** PSCM - Power Steering Control Module / EPS (electric power steering)
**File:** `F:/FF3.5_ANALYSIS/decompiled/pscm_esaulenka.c`
**Size:** 14,254 lines, 236 decompiled functions, no symbols (Ghidra)
**MCU:** Renesas **RH850** (RH850/F1x class, typical body/chassis EPS controller)

---

## 0. IMPORTANT PRECONDITION: quality of the decompile

For interpreting the functional conclusions it is critical that this decompile is **largely corrupted / unreliable**. I demonstrate this numerically because it fundamentally determines what can and cannot be claimed about the code:

- **[PROVEN]** 143 functions (out of 236) run out into `halt_baddata()` - "Bad instruction - Truncating control flow here". Of these, **54 functions are pure stubs** (just `__nop()` + `halt_baddata()`), e.g. the entire region above 0x67000:
  ```c
  // FUN_0006731a @ 0006731a (size 6776)   <- 6776 bytes of code, but:
  void FUN_0006731a(void){ __nop(); __nop(); __nop(); halt_baddata(); }
  ```
  37 functions fall in the 0x67000-0x82000 range, and these are almost without exception stubs like this. **The logical bulk of the application (roughly 100+ KB of code) sits in this UN-DECODED upper region** - Ghidra was unable to establish correct instruction boundaries there.

- **[PROVEN]** Overlapping instructions and incorrect boundaries also occur in the middle region. E.g. `FUN_0004ff9c`'s header says "size 31" (31 bytes), but the decompiled body is **246 lines of C**, and it is nearly identical to the neighboring `FUN_0004ffbc` (the two addresses 0x4ff9c and 0x4ffbc are only 0x20 bytes apart). Ghidra decompiled two different "functions" out of the same overlapping byte stream. Further examples in the headers:
  ```
  /* WARNING: Instruction at (ram,0x00046a4a) overlaps instruction at (ram,0x00046a48) */
  ```

- **[PROVEN]** There is not a single function that does not reference uninitialized registers (`in_r1`..`in_r29`, `in_ep`, `unaff_gp`). This means Ghidra **globally failed to recover the RH850 calling convention and stack frames**. Register-passed parameters (`in_rXX`) show up "leaking in" empty.

- **[PROVEN]** There are no strings (the `"` character only occurs in a single `case '\"'` constant), and there is not a single textual trace of `LaRefAng`, `ExtSteeringAngleReq`, `LKA`, `assist`, `CRC`, `checksum`.

**Consequence:** statement-level functional reconstruction (e.g. "this line computes the LKA overlay torque") **cannot be performed reliably** from this artifact. What CAN be asserted on sufficient evidence is the architecture, the memory map, the computational style, and the nature of the main functional blocks. Below I hold to that, with labeling.

---

## 1. Main subsystems / functional blocks

### 1.1 Architecture fingerprint: RH850 [PROVEN]

The code clearly compiled for RH850; several independent patterns prove this:

- **CALLT-table dispatcher (CTBP - Callt Base Pointer):** the CALLT mechanism, by which RH850 performs short, table-based function calls, occurs in 31 places:
  ```c
  // FUN_0001ce70
  (*(code *)((int)in_CTBP + (uint)*in_CTBP))(~in_r16);
  (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))();
  ```
- **EP-relative (Element Pointer, r30) struct access:** functions address fields of a large state struct as `in_ep + offset` (offsets: 0x08, 0x28, 0x4e, 0x72, 0x80, 0xa8, 0xc4, 0xd0 ...):
  ```c
  // FUN_00038318
  *(undefined2 *)(in_ep + 0x80) = param_1;
  uVar1 = *(undefined2 *)(in_ep + 0xd0);
  ```
- **Low exception-/callt-vector calls:** `(*(code *)&LAB_00000020)()` (2x), `(*(code *)&LAB_00000030)()` (1x) - these point into RH850's vector/trap area.

### 1.2 Fixed-point, saturating control arithmetic [PROVEN]

The module's dominant computational pattern is **SATADD/SATSUB** (saturating add/subtract) - **377 occurrences** of the characteristic `int5` + [-0x80000000, 0x7fffffff] clamping:
```c
// FUN_0001ce70 (as an example)
iVar1 = (int5)param_2 + -0xe;
if (iVar1 < 0x80000000) {
  if (iVar1 < -0x80000000) { iVar1 = -0x80000000; }
} else { iVar1 = 0x7fffffff; }
param_2 = (int)iVar1;
```
This is the fingerprint of **fixed-point motor/torque control computation**: EPS computes assist torque, integrators, and angle errors with 32-bit fixed-point, overflow-protected arithmetic. Division also appears (scaling/normalization):
```c
// FUN_0001cf5c  -  scaling/dividing helper function
return (in_r14 + 0xa5e0000U) / (uint)(int)*(short *)(in_ep + 0x6c);
```

### 1.3 gp-relative global data/calibration block [PROVEN -> STRONG]

**KEY INSIGHT:** the `DAT_ffffXXXX` "globals" are actually **not peripherals at address 0xFFFFxxxx**, but **negative 16-bit offsets** relative to the global pointer (**gp/r4**) into the module's global data segment. Ghidra displayed the negative displacement as an absolute, sign-extended address.

Evidence (the numeric match is exact): the constant `-0x1daa` and `DAT_ffffe256` are the same location, because `-0x1daa` in 32 bits = `0xFFFFE256`:
```c
// FUN_00031fc2
register0x0000000c = (BADSPACEBASE *)((short)param_4 * -0x1daa);
*(char *)(in_r11 + -0x1dab) = (char)in_r18;      // -0x1dab = 0xFFFFE255
register0x0000000c = (BADSPACEBASE *)(int)*(short *)(&DAT_ffffe256 + param_1);  // same location +index
```
And neighboring uses (`FUN_0004ffbc`) as table indexing:
```c
(&DAT_ffffe256)[in_r12] = 0;                       // array write relative to gp base
*(short *)(&DAT_ffffe180 + uVar8) = (short)...;    // -0x1e80 = 0xFFFFE180, array write
in_lp = (uint)(byte)(&DAT_ffffe081)[in_r20];       // -0x1f7f = 0xFFFFE081, array read
```
The neighboring `+ -0x1dab / -0x1dac / -0x1daa` offsets (6+5+3 occurrences by grep) form a multi-byte/array-like field. The entire `0xFFFF8000`-`0xFFFFFFFF` address range (e.g. `DAT_ffff8f50` = -0x70b0, `DAT_ffffa204` = -0x5dfc, `DAT_ffffe700` = -0x1900) all fits within a single ±0x8000 gp-relative window, so it is **one contiguous global data/calibration block** that the module uses via indexed table lookups and as state variables.

This block is where **calibrations + runtime state** live (assist curves, limit values, filter state). `DAT_ffffe700` (13 references) and `DAT_ffffe256` (12) are the most frequently touched cells.

### 1.4 RTOS/scheduler-like linked structure [STRONG]

One clean function shows a linked-list walk, where **offset +0x18 is the "next" pointer**, followed by a call through a low vector:
```c
// FUN_000419c8
uVar1 = *(ushort *)(in_ep + 0x18);
*(undefined2 *)(uVar1 + 0x52) = unaff_gp;
uVar2 = (uint)*(ushort *)(uVar1 + 0x18);          // next->next
*(undefined2 *)(uVar2 + 0x50) = unaff_gp;
uVar1 = *(ushort *)(uVar2 + 0x18);                // next->next->next
...
(*(code *)&LAB_00000030)(*(undefined2 *)(uVar2 + 2));  // dispatcher call
```
This is a task/message/timer list walk (TCB chain), i.e. **an operating system / cooperative scheduler** runs in the module. `FUN_0003b6a2` also confirms this: `*(ushort *)(in_ep + 0x18)` pointer dereference + further chaining.

### 1.5 Large opcode dispatcher (uncertain) [HYPOTHESIS]

Starting at `FUN_000555fe`, a giant `switch(in_r10)` runs for about 2500 lines, with hundreds of `case`s and `goto code_r0xXXXXXXXX` jumps, plus `(*(code *)0x0)(...)` null-pointer calls:
```c
switch(in_r10) {
  case '\b': case '\x19': case '9': goto code_r0x00049af0;
  ...
  default: goto code_r0x000523d2;
}
```
This is **either** a large message/command dispatcher (e.g. a diagnostic or internal state-machine opcode table), **or** (more likely) another badly decoded region, where overlapping instructions produced an apparent jump table. The `(*(code *)0x0)` calls argue for corruption. It cannot be reliably interpreted on its own.

---

## 2. Key functions (address + role + evidence)

> Note: because of the corruption these can only be described at the level of "what it touches / what kind it is", not as a line-precise algorithm.

### 2.1 `FUN_0001cf5c` @ 0x1cf5c - scaling/dividing helper routine [PROVEN]
One of the module's cleanest functions. Normalizes a 32-bit value by a 16-bit divisor stored in an EP struct:
```c
return (in_r14 + 0xa5e0000U) / (uint)(int)*(short *)(in_ep + 0x6c);
```
Typical unit conversion / scaling (e.g. raw ADC or angle -> engineering unit). The divisor (`in_ep+0x6c`) is set at runtime.

### 2.2 `FUN_0001ce70` @ 0x1ce70 - init / state-setup with CALLT chain [STRONG]
An init sequence branched on a PSW flag, which fills an EP struct and calls several CALLT services, then transforms a value with saturating subtraction:
```c
*(undefined4 *)(in_ep + 0x28) = *(undefined4 *)(in_ep + 0x20);
uVar3 = (uint)*(byte *)(in_ep + 0x13);
(*(code *)((int)in_CTBP + (uint)*in_CTBP))(~in_r16);
*(uint *)(in_ep + 0xa8) = uVar3;
pbVar2 = (byte *)((uVar3 & 0x16c2) + 0x37c2);   // bit-masked address -> flag set
*pbVar2 = *pbVar2 | 0x40;
```
`*pbVar2 |= 0x40` sets a status/flag bit at a computed address.

### 2.3 `FUN_00038318` @ 0x38318 - state-field write/swap (mini setter) [PROVEN]
Writes and swaps the EP struct's +0x80 / +0xd0 fields - a typical "previous/current value" buffering in a filter or state store:
```c
*(undefined2 *)(in_ep + 0x80) = param_1;   // current
uVar1 = *(undefined2 *)(in_ep + 0xd0);     // previous
uVar2 = *(undefined2 *)(in_ep + 0x80);
*(undefined2 *)(in_ep + 0xd0) = uVar1;
*(undefined2 *)(in_ep + 0x80) = uVar2;
```

### 2.4 `FUN_000419c8` @ 0x419c8 - linked-list/scheduler walk [STRONG]
See section 1.4. Walks a TCB/message chain (`+0x18` = next) and dispatches via a call. One of the visible points of the RTOS layer.

### 2.5 `FUN_00031fc2` @ 0x31fc2 - table-driven compute loop (corrupted) [HYPOTHESIS]
Fixed-point saturating arithmetic + gp-relative table lookup indexed by `param_1 >> 0xd` - this pattern suggests a **characteristic-map (lookup table) interpolation / assist-curve evaluation**, but the body is corrupted (`halt_baddata`, overlapping instructions), so it can only be stated at the level of "kind":
```c
param_1 = param_1 >> 0xd;
register0x0000000c = (BADSPACEBASE *)(int)*(short *)(&DAT_ffffe256 + param_1);  // table[index]
in_r21 = (short)in_r21 * 0xd ^ param_3;   // mixing/hash-like step
```

### 2.6 `FUN_0004ff9c` / `FUN_0004ffbc` @ 0x4ff9c / 0x4ffbc - gp-table write loop (overlapping, corrupted) [STRONG for the memory access, HYPOTHESIS for the logic]
These write gp-relative global tables in an indexed manner (`(&DAT_ffffe256)[in_r12]=0`, `*(short*)(&DAT_ffffe180+uVar8)=...`), reading EP struct fields (`+0x18`, `+0x1e`, `+0x6a`, `+0xd2`). The two addresses overlap -> two decompiles of the same corrupted region. Valuable as evidence for the memory map (1.3).

---

## 3. CAN handling

**[PROVEN] Building of CAN RX/TX buffers CANNOT be read out from the decompiled (clean) region.** Specifically:

- There is not a single recognizable CAN message ID (11/29-bit ID), DLC handling, or `mailbox`/`msgbuf` structure.
- There are no identifiable RS-CAN(FD) SFR accesses. (Per section 1.3, the `DAT_ffffXXXX` addresses are gp-relative globals, not CAN registers, so they cannot be considered CAN peripherals.)
- There is no message-counter nibble (`& 0xf` rolling counter) or characteristic 8-byte buffer-fill pattern in the clean part.

**[STRONG] Reason:** the CAN communication layer (RX/TX buffer construction, signal packing, receiving the LKA `LaRefAng` and park-assist `ExtSteeringAngleReq`) almost certainly lives in the **un-decoded region above 0x67000** (143 `halt_baddata` functions, 37 of them in the upper band) and/or in the corrupted `FUN_000555fe` dispatcher array. It cannot be extracted from this artifact.

**Conclusion:** analyzing the CAN structures requires **re-decompiling** the upper code region with the correct RH850 variant and memory map setting (see section 6, "next steps").

---

## 4. Control logic / state machine

- **[STRONG] Cooperative RTOS/scheduler with linked task list** (1.4, `FUN_000419c8`): the module walks a task/message chain (`+0x18` = next) and dispatches through a low vector.
- **[STRONG] PSW-flag-controlled branches:** several functions branch on Program Status Word bits (`(byte)(in_PSW >> 2) & 1` tests Z/OV/CY-like flags), e.g. `FUN_0001ce70`, `FUN_00031fc2`. This indicates short, state-dependent control branches (e.g. system mode: init / normal / fault).
- **[HYPOTHESIS] Large opcode/command dispatcher** (`FUN_000555fe`, 1.5) - could be the main message/command state machine, but cannot be confirmed due to corruption.
- **[PROVEN] Explicit, named state-machine constants (e.g. `state == INIT/RUN/FAULT` enums) are ABSENT from the clean part** - lacking symbols and strings, state variables sit as scattered bytes in the gp-relative block (1.3).

---

## 5. Integrity / checksum

**[PROVEN] No identifiable checksum/CRC routine is visible in the decompiled part:**

- Not a single known CRC polynomial constant appears: `0x1021` (CCITT), `0x8005`, `0x04C11DB7`, `0xEDB88320`, `0xA001`, `0x8408` - none of these occur.
- There is no `crc`/`Crc`/`CRC`/`checksum` text.
- There are only 35 lines with the `^` (XOR) operator, and these are scattered bit operations (e.g. `(short)in_r21 * 0xd ^ param_3`), not a CRC loop.

**[STRONG]** An EPS module almost certainly has message integrity (E2E CRC + rolling counter on CAN signals) and image-update authentication, but these are in the un-decoded upper region. They cannot be confirmed from this artifact.

---

## 6. Modifiability (ADAS relevance)

> Important caveat up front: **concrete addresses/offsets CANNOT be pinned down** from this corrupted decompile. The following concerns the *nature* of modifiability and *next steps*, with appropriate labeling.

### 6.1 What can in principle be adjusted via calibration [STRONG]
- **The gp-relative global block (1.3) is where calibration/tuning parameters live.** This is where assist curves (torque vs. vehicle speed/steering torque), saturation limits (the upper/lower clamp bounds of the 377 SATADD/SATSUB operations), and filter coefficients sit. This block is accessible as an indexed table (`(&DAT_...)[index]`), i.e. **map-based calibration**.
- **ADAS-relevant limits** (the bounds of the fixed-point saturation) typically live here: the maximum assist torque, as well as the **overlay torque / external angle-request clamp** (LKA `LaRefAng`, park-assist `ExtSteeringAngleReq`). Modifying these would affect the strength/range of the intervention.

### 6.2 What is concretely visible from the clean part [PROVEN]
- A scaling divider (`FUN_0001cf5c`, `in_ep+0x6c`) and the `0xa5e0000U` constant - a unit-conversion tuning point.
- Status-flag set at a computed address (`FUN_0001ce70`: `*pbVar2 |= 0x40`) - enable/disable bit-like.

### 6.3 What CANNOT be done from here [PROVEN]
- **The concrete `LaRefAng` / `ExtSteeringAngleReq` clamp value or CAN-signal position** cannot be identified - the relevant code and the CAN layer are in the un-decoded region (section 3).
- **Code-level modification (patching)** cannot be reliably planned from this artifact due to the faulty instruction boundaries.

### 6.4 Recommended next steps (for genuine ADAS analysis)
1. **Re-decompile** the upper `0x67000-0x82000+` region with the exact RH850 sub-variant (F1K/F1M), correct ROM/RAM/SFR memory map, and CALLT-table + gp/EP base-value setup, so the `halt_baddata` stubs resolve.
2. **Fix the gp (r4) base** from the reset vector -> translate the `DAT_ffffXXXX` addresses into real (gp-relative) global addresses -> map the calibration table.
3. **Identify the RS-CAN(FD) SFR base** from the memory map -> find the CAN RX/TX mailbox accesses in the real code region -> from there, reverse-engineer the `LaRefAng` / `ExtSteeringAngleReq` signals.

---

## Summary table

| Area | Status | Main evidence |
|---|---|---|
| Architecture (RH850) | [PROVEN] | CTBP CALLT dispatcher, EP struct, int5 SATADD/SATSUB (377x) |
| gp-relative global/calib. block | [PROVEN] | `-0x1daa` == `0xFFFFE256`, `(&DAT_...)[index]` table write |
| Fixed-point control arithmetic | [PROVEN] | 377 saturating-clamp pattern, divider `FUN_0001cf5c` |
| RTOS/scheduler | [STRONG] | `FUN_000419c8` +0x18 next-chain + vector call |
| CAN RX/TX structures | [NOT VISIBLE] | no ID/DLC/mailbox; the CAN layer is in the un-decoded region |
| Checksum/CRC | [NOT VISIBLE] | no CRC polynomial, no CRC loop |
| State machine (named) | [NOT VISIBLE] | no enum/string; PSW-flag branches yes |
| Decompile corruption | [PROVEN] | 143/236 functions `halt_baddata`, overlapping instructions, size!=lines |

*Produced from a grep/sed-based structural analysis of `pscm_esaulenka.c`. The [NOT VISIBLE] items are limited by the quality of the file, not by absence of the feature in the module - these should be sought in the un-decoded upper code region.*
