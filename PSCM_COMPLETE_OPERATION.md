# PSCM — Complete operation (Ford Focus Mk3.5 electric power steering / EPS)

**Module:** PSCM / PSMC = Power Steering Control Module (EPS). **Diag address:** `0x730` on HS-CAN.
**Role:** steering assist *and* the actuator end of two separate ADAS steering interfaces — the
central module for any lane-centering (LCA) work on this platform.
**Scope of this document:** one consolidated, end-to-end account of how the PSCM works, integrating
`README.md`, `PSCM.md`, `PSCM_DETAILED.md`, `FF3.5_ANALYSIS_root/{12,26,27}_*.md`,
`analysis/OSSZEFOGLALO_LCA.md`, `analysis/REPORT_LCA_FIRMWARE.md`, and `analysis/SIGCFG_HANDLE_MAP.md`.
Certainty is labelled: **[PROVEN] / [STRONG] / [HYPOTHESIS] / [SPEC-BASED] / [OPEN]**.

> Firmware note: the raw VBF/blocks are Git-LFS objects and are not materialised in every environment.
> The signal-config listings, decoded descriptor dumps, and decompiled C under `analysis/` and
> `decompiled/` are checked in as plain text and are the basis for the claims here.

---

## 0. The two ADAS steering interfaces (the framing that governs everything)

| Interface | CAN path | Range | Used by |
|---|---|---|---|
| `LaRefAng` — reference-angle nudge | `Lane_Assist_Data1/2` (`0x3CA`/`0x3CB`) | **±5.87°**, torque overlay, hands-off timeout | Lane Keeping Aid / LCA |
| `ExtSteeringAngleReq` — full angle request | `ParkAid_Data` (`0x3A8`) | **±1000°**, low speed only | Active Park Assist (SAPP/PPA/POA) |

On this network LCA and automatic parking do **not** request steering over the same command
[PROVEN, from the CAN matrix]. So the facelift car gaining perpendicular parking does not imply the
LCA steering path was retained — the two must be analysed separately.

---

## 1. THE CENTRAL UNRESOLVED QUESTION: which CPU is this?

The project's own most recent, highest-effort analyses **disagree** on the PSCM core, and this is the
single most important thing to resolve because it decides which decompile (if any) is trustworthy.
The evidence, stated fairly:

**Case for DSP56800E** (`27_pscm_autopark_datalevel.md`, 2026-09-14 — the newest module doc):
- Block00's reset-vector table is a row of identical 4-byte entries with a unique reset entry and a
  repeating default handler. Read as DSP56800E: FL `E255 2BC9` = `JSR P:0x12BC9`, Pre-FL
  `E255 1D76` = `JSR P:0x11D76`; the `0x1` top address bit comes from the JSR opcode and is
  consistent across both entries. The doc argues this structure is "explained only by DSP56800E JSR
  encoding" (word-addressing, `P = VBF_byte/2`) and concludes the RH850/V850 decompiles are wrong.
- The signal-config X-memory model (base `0x8000`, 10-byte descriptors) fits a DSP word-addressed
  X-memory cleanly.

**Case for RH850** (`README.md`, `12_pscm_larefang.md`, `26_pscm_refresh.md`, 2026-09-13/14):
- A native `RH850:LE:32:default` SLEIGH decode of the same image produces **coherent** output: 1698
  recognised SATADD/SATSUB (`__saturate`) intrinsics, 593 signed `(short)` reads, 60 gp-relative
  calibration cells in one contiguous ±0x8000 window, a clean scaling divider (`FUN_0001cf5c`), and
  `__synchronize()` (SYNCM) barriers — patterns that are hard to produce from a *wrong* architecture.
- RH850 is the V850 successor and the standard core class for a modern EPS controller.

**How to read this honestly:** the two readings cannot both be right about the instruction stream.
The RH850 decode is *internally* coherent, but coherence is not proof — dense code can decode into
plausible instructions under more than one ISA (this project already burned through
DSP56800E → SH-2A → V850 → RH850 once). The DSP56800E reset-vector argument is concrete and
falsifiable, and it is the newest conclusion. **This document therefore treats the CPU identity as
[OPEN], leans on the DSP56800E reset-vector evidence as the strongest single datum, and — crucially —
builds the functional account below only on findings that do NOT depend on which ISA is correct.**
Resolving it needs the raw block00 bytes + a disassembler run under both ISAs, comparing the *whole*
vector table and a few call targets for self-consistency — not available in this environment.

The good news: the two questions that matter operationally (the LCA break and the autopark break) are
answerable **without** settling the ISA, because they live in the signal-config and calibration data,
not in the opcode stream.

---

## 2. Memory / flash map [PROVEN — identical Pre-FL and FL]

| VBF byte address | Length | Contents |
|---:|---:|---|
| `0x00000000` | `0x00009800` | block00: reset vector table + low code |
| `0x00009800` | — | calibration `14C218` (in-image, before block01) |
| `0x0001C000` | `0x00064000` | block01: main application code |
| `0x04008C00` | `0x00007400` | data-flash (mostly neutral `0x0080` adaptive values) |
| `X:0x8000` (VBF `0x04008000`) | — | signal-config `14C386` payload |

- The `0x9800`–`0x1C000` gap is in **neither** VBF — reset/boot lives in a bootloader
  (`BV6T-14C220-AA`, shared Pre-FL/FL) that was never dumped, so there is no clean code-flow entry
  point [PROVEN].
- Much of block01 is identical between versions, just relocated; a common Pre-FL→FL offset of
  `+0xB008` VBF bytes lets homologous functions be paired [STRONG].

---

## 3. Runtime architecture and control style [ISA-dependent reads, labelled]

From the RH850 native decode (valid *if* RH850; treat as [HYPOTHESIS] on ISA, but the *style* it
reveals is consistent with an EPS controller regardless):

- **Fixed-point, saturating control arithmetic** — the dominant idiom: 1698 SATADD/SATSUB, 355
  sign-bit `>>0x1f`, 363 divisions/normalisations, Q-format `(short)` reads. This is the fingerprint
  of fixed-point motor/torque control (assist torque, integrators, angle/torque errors) [STRONG that
  the style is present].
- **gp-relative (r4) global/calibration window** — one contiguous `DAT_ffff8000…fffffff6` segment
  (−0x8000…−0x0a off gp), 60 unique cells, accessed both directly and as indexed tables
  (`(&DAT_…)[idx]`) → **map-based calibration + runtime state** live here [STRONG]. Most-touched:
  `DAT_ffffe700` (46×), `DAT_ffffe256` (29×), `DAT_ffffe0ff` (14×, the ±clamp candidate — §5).
- **EP-relative (r30) state struct** — one large runtime state block, field offsets `+0x18` (91×,
  doubles as a list "next"), `+0x40`, `+0x60`, `+0x7c`, `+0x80`, `+0xd0` [STRONG].
- **Cooperative RTOS/scheduler** — a linked task/message chain (`+0x18` = next) dispatched through a
  low vector; 19 `__synchronize()` barriers [STRONG].
- **State machine = jump-table dispatchers** — no C `switch`; instead 87 indirect-call jumptable
  idioms and 102 unrecovered jumptables, densest in `0x55000–0x58000` (`FUN_00055652`,
  `FUN_00056806`) — the candidate main control/blending state machine, interior not recovered
  [PROVEN present / HYPOTHESIS internals].
- **Decompile corruption is real and bounded** — `0x6731a`–`0x7f544` (35 functions, ~40 KB) is
  **padding** (empty `halt_baddata` stubs), not lost code; the real code band is `0x1c000–~0x66bbc`
  [PROVEN]. An earlier claim that the "big loops at 0x76xxx were destroyed" was wrong and is retracted.

---

## 4. CAN interface and signal-config engine (`14C386`) — the ISA-independent core

The signal-config block is where the module maps CAN signals to internal handles, and it decodes
cleanly **without** needing the opcode stream — so it carries the load-bearing conclusions.

### 4.1 Engine structure [PROVEN]
- Payload: `0x56`-byte root struct, then 10-byte signal descriptors. Each descriptor extracts a
  bitfield (`shift`,`mask`) from a source handle `h0` (with secondary/validity handle `h1`) and routes
  it into a signal bank (`group_word`) under a one-hot selector `ctl`, with a `flags` byte.
- Descriptor counts: **Pre-FL 83, FL 85**; boundary verified arithmetically
  (`0x8000+0x56+83×10 = 0x8394`; `+85×10 = 0x83A8`).
- The main program loads both the descriptor table and the following table and hands them to
  homologous routines whose instruction sequences match except for relocated X-addresses → the engine
  itself did not change between versions; mainly the content did [STRONG].
- Banks present: `7F6C, 7F74, 7F75, 7F79, 7F7D, 7F81, 7F8A` (the `0x86xx`-sourced `7F8A` is the
  transmit/output side).

### 4.2 The exact Pre-FL → FL delta [PROVEN — see `analysis/SIGCFG_HANDLE_MAP.md`]
A version-invariant alignment (`analysis/sigcfg_handle_map.py`, aligning on `(shift,mask,flags)`,
which the earlier positional diff could not do because handles/selectors were renumbered) gives the
corrected net change **+3 / −1 fields**, not merely "two new fields":

| Bank | Δ | Handle | Width | mask/shift/sel/flags |
|---|---|---|---|---|
| `7F74` | added | `7EB9` (2nd field on an already-used handle) | 3-bit | mask `0x70`, sh4, sel `0x02` |
| `7F75` | **removed** | `7ED8` | 5-bit | mask `0x1F`, sh0, sel `0x20` |
| `7F75` | added | `7ECC` | 2-bit | mask `0x60`, sh5, sel `0x10` |
| `7F75` | added | `7EEB` | 3-bit | mask `0x38`, sh3, sel `0x80` |

Relocations confirm "engine unchanged, content moved" arithmetically: bank `7F8A` (`0x86xx` output
addresses) shifted uniformly **+0x14 = +20 bytes = the two added 10-byte descriptors**; bank `7F75`
source handles renumbered uniformly −0x08 and every selector stepped down one one-hot to open the top
`0x80` slot for `7EEB`. A consistent Pre→FL handle remap is emitted so the *same* signal can be lined
up across the `AF`/`AR` applications.

### 4.3 What the delta means [HYPOTHESIS, STRONG-leaning]
The two genuinely inserted 3-bit fields (`7EEB`, `7EB9`) match the **APA-mode request/status** profile
(`ApaMdeStat_D_RqDrv` / `ApaMde_D_Stat`; SAPP/PPA/POA per the Lincoln/Ford value tables), and the FL
introduced perpendicular parking — so the FL signal-config expansion is most likely the **expanded
automatic-parking** handshake, **not** a lane-assist change. `ExtSteeringAngleReq` (park steering) is
**not** in the delta → the core park-steering path is identical Pre-FL/FL.

### 4.4 What is NOT visible here [OPEN]
- **Group→CAN-ID binding** (does `7F75`/`7F74` belong to `0x3A8` park vs `0x3CA/0x3CB` lane?) cannot be
  proven statically: the group address words occur 0× in the app code and there is no absolute X-access
  to `7EEB/7EB9/7F74/7F75` — the RX message→handle table is **runtime-built** in RAM (`X:0x7Fxx`, below
  the `0x8000` sigcfg base, in no flashed block).
- The full `0x3CA/0x3CB` receive path in the opcode stream is not identifiable (no CAN/RS-CAN SFR
  symbol survives the decode; the receive read disappears into the unrecovered jumptable dispatchers).

---

## 5. The ADAS authority limits — where the LCA ceiling lives [HYPOTHESIS / OPEN]

The whole LCA question reduces to: under what condition, and up to what magnitude, does the FL PSCM
honour an incoming `LaRefAng`? From the (RH850-read) decompile:

- A **symmetric ±`DAT_ffffe0ff` saturating clamp** idiom appears in 7 places — exactly the shape of a
  ±cal magnitude limit on an external request; secondary cal `DAT_ffffe081`. This is the best
  candidate for the external-request authority clamp [PROVEN that the idiom exists / HYPOTHESIS that it
  is the LCA clamp].
- **Why it can't be closed now** [PROVEN negative]: every one of the 1698 `__saturate()` **outputs is
  discarded** (0 assignments) — Ghidra's RH850 intrinsic drops the target operand, so precisely the
  clamp/blend *result* is untraceable; the clamp operands are sometimes stack-address garbage; and the
  contexts run into `halt_baddata`. The expected internal literals (`±2060/0x80c` for ±103 mrad,
  `±10000/0x2710`) are **absent** at grep level → the range limits are in the **calibration data
  block**, not hardcoded.
- The candidate **speed gate** `0x61aa` (25002) sits on a **phantom register** and no real km/h
  constant (0x3e8/0x2ee0…) is found → the speed window can neither be confirmed nor refuted from the
  dump [PROVEN that the candidate is an artifact].
- Real flag tests exist (`DAT_ffffe28c & 4`, `DAT_ffffe700 & …`) but their attribution to an
  ADAS-enable/hands-on gate is unproven [HYPOTHESIS].

**Consequence:** the tuning surface can be *named* (`DAT_ffffe0ff` for magnitude, `DAT_ffffe700/e28c`
for flags) but not *valued or branch-attributed* without (a) reading the calibration block and (b)
recovering the SATADD/SATSUB targets and jumptables. A blind patch could hit the driver-assist branch
instead of the external-request branch.

---

## 6. Integrity / safety posture [STRONG by inference]

- No CRC polynomial or CRC loop is visible in the decoded region (`0x1021/0x8005/0x04C11DB7/…` all
  absent), but an EPS certainly has E2E CRC + rolling counter on its CAN signals and image
  authentication — these live in the un-decoded bootloader/upper layer [STRONG].
- The module is ASIL-D-like: the angle/torque limit is part of the safety concept (bounded ADAS
  authority, driver override, plausibility, likely a monitor core). Any change to the magnitude/rate/
  speed limit would bypass those protections and risks DTC/limp/watchdog reset. Nothing here has been
  flashed.

---

## 7. The two operational questions, answered as far as static analysis allows

### 7.1 Why doesn't enabling the LCA As-Built bit produce LCA on the FL car?
Chain, with the current verdict at each link:
1. FL IPMA **stores** the setting (proven on the IPMA side: full DE03 read/write/NVM path, identical
   64×12 config table) — so "the FL IPMA doesn't save the bit" is ruled out.
2. Whether the FL IPMA **emits** the same `0x3CA/0x3CB` command is [OPEN] — the TX packing is in the
   IPMA's absent lower flash.
3. Whether the FL PSCM **accepts** it under the same condition is [OPEN] — the receive path and the
   authority clamp/speed-gate are exactly the parts the decode loses (§5). The FL signal-config delta
   is APA-mode, not lane (§4.3), so no lane-side regression is visible in the sigcfg — but the *code*
   condition is not readable.

Ranked hypotheses for the break (unchanged): (1) FL PSCM accepts the request under a different
condition; (2) a lane field lands on a different handle/validation state in FL `14C386` — **weakened**
by §4.2/§4.3, since the sigcfg delta is park, not lane; (3) the FL IPMA's not-yet-visible CAN layer
doesn't emit the command; (4) the FL calibration supplies a different threshold/flag. A single FL-car
CAN log (LCA bit off vs on) would settle whether the break is on the IPMA sending side or the PSCM
receiving side.

### 7.2 Why does autopark fail with a Pre-FL PSCM on an FL car (with FL PAM)?
- The Pre-FL PSCM retains the core park-steering capability (`ExtSteeringAngleReq` path is not in the
  delta; Pre-FL Focus did SAPP). The only PSCM-side gap is the **2 APA-mode signals** the FL added.
- The FL PAM (`F1ET-14C090-BG`) is a "Ford-MCA-SAPP" module. **Leading hypothesis [MEDIUM]:** the FL
  PAM expects an APA-mode handshake the Pre-FL PSCM's signal-config does not decode/acknowledge, so
  the PAM gives up.
- Negative results that narrow the fix: the FL PAM does **not** reference the PSCM part number (no
  `14C217`/`0x730`/`22 F1 88` patterns) → part-number spoofing is likely not the fix; the FL
  calibration is 96.3% retuned so a blind cal diff is too noisy; the PAM is a non-M32R architecture,
  not yet reverse-engineered.
- Decisive next step is a **read-only CAN log** of the current full-FL car during a park attempt (no
  flash) — it immediately shows the park sequence and whether the APA-mode handshake is required for
  basic SAPP or only for the expanded modes.

---

## 8. Status summary

| Area | State | Label |
|---|---|---|
| Two ADAS steering interfaces (LaRefAng vs ExtSteeringAngleReq) | resolved from CAN matrix | [PROVEN] |
| **CPU identity (DSP56800E vs RH850)** | **contradiction between newest docs — unresolved** | **[OPEN]** |
| Flash/memory map, shared bootloader, +0xB008 relocation | resolved | [PROVEN]/[STRONG] |
| Fixed-point control style, gp-cal window, EP state struct, RTOS | resolved (ISA-conditioned) | [STRONG] |
| Padding band `0x6731a–0x7f544` (not lost code) | resolved | [PROVEN] |
| Signal-config engine + Pre→FL delta (+3/−1) + handle remap | resolved, ISA-independent | [PROVEN] |
| Delta = APA-mode (park), not lane | strong inference | [HYPOTHESIS/STRONG] |
| Group→CAN-ID binding (runtime-built table) | not static | [OPEN] |
| `LaRefAng` authority clamp value + branch (`DAT_ffffe0ff`?) | named, not valued | [HYPOTHESIS/OPEN] |
| Speed gate, ADAS-enable/hands-on attribution | candidate is a phantom / unattributed | [OPEN] |
| CAN RX/TX packing, CRC/rolling-counter, image auth | in un-decoded layer | [OPEN] |
| FL calibration `14C218` fully retuned (96.3%) | resolved | [PROVEN] |
| Autopark break = FL PAM APA-mode handshake | leading hypothesis | [HYPOTHESIS/MEDIUM] |

## 9. Next steps (ranked by value/risk)
1. **Resolve the CPU identity** by disassembling raw block00 under both ISAs and comparing the whole
   vector table + a few call targets for self-consistency — this unblocks *all* code-level questions.
2. **Read-only FL-car CAN logs** — one during a park attempt (settles autopark), one toggling the LCA
   As-Built bit off/on (settles which side the LCA chain breaks). Highest value, lowest risk, no flash.
3. Only after (1): read the calibration data block values behind `DAT_ffffe0ff`/`DAT_ffffe700`, and
   recover the SATADD/SATSUB targets + `0x55000` jumptables, to value and branch-attribute the LCA
   authority clamp and speed gate.
4. Bind the `7F74/7F75` banks to concrete CAN IDs by finding their runtime-built RX table (needs a
   working decoder for the confirmed ISA).

*Safety: this module actuates the steering; any change can affect vehicle control directly. Nothing in
this repository has been flashed. The LCA/authority-limit route is explicitly high risk. Treat
everything here as research material.*
