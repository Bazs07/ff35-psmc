# PSCM / PSMC — Power Steering Control Module (EPS), Ford Focus Mk3.5

The PSCM is the electric power steering control unit (EPS). Beyond ordinary steering assist, it is
the **actuator end of two completely separate ADAS steering interfaces**, which is what makes it the
central module for any lane-centering (LCA) work on this platform:

| Interface | CAN path | Range | Used by |
|---|---|---|---|
| `LaRefAng` — reference-angle nudge | `Lane_Assist_Data1/2` (`0x3CA` / `0x3CB`) | **±5.87°**, torque overlay, hands-off timeout | Lane Keeping Aid (LKA/LDW) |
| `ExtSteeringAngleReq` — full angle request | `ParkAid_Data` (`0x3A8`) | **±1000°**, low speed only | Active Park Assist (SAPP/PPA) |

Diagnostic address `0x730` on HS-CAN. **This distinction matters:** on this network LCA and automatic
parking do *not* request steering over the same command, so the facelift car gaining perpendicular
parking does not imply the LCA steering path was retained.

## What we know

### Firmware set
- Application `CV6T-14C217-AR` (0.48 MB), calibration `CV6T-14C218-AX`, signal configuration
  `CV6T-14C386-AB`, bootloader `BV6T-14C220-AA`. Stripped — no symbols.
- Flash/VBF segment map (identical between Pre-facelift and facelift): `0x00000000` (len `0x9800`),
  `0x0001C000` (len `0x64000`), `0x04008C00` data-flash (len `0x7400`, mostly neutral `0x0080`
  adaptive values).
- The `0x9800`–`0x1C000` gap is in **neither** VBF — reset/boot lives in a bootloader that was never
  dumped, so there is no clean entry point for code-flow tracing.
- The Pre-facelift counterpart set (`BV6T-14C217-AF/AD`, `-14C218-AF`, `-14C386-AA`) is kept under
  `Pre_Lift_PSMC_LCA_no_autopark/` as the reference "LCA works, no autopark" baseline. Note that
  `BV6T-14C217-AD` and `-AF` are two *versions* of the same application, not complementary blocks —
  they must not be written together.

### Processor architecture — resolved the hard way
Identifying this MCU took several wrong turns, all recorded honestly in `PSCM.md`:
DSP56800E → SH-2A → V850 → **RH850 (final)**. The repeated confusion came from the same `0xE255`
byte pattern decoding plausibly under several instruction sets, and from V850 being dense enough that
even pure data decodes into valid-looking instructions.

**Current verdict: Renesas RH850** (the V850 successor, standard in modern EPS units). Ghidra has no
out-of-the-box RH850 support; two community SLEIGH modules were tested and the
**esaulenka `ghidra_v850` (`v850e3:LE:32:default`)** module gives substantially cleaner output than the
ZEEKRZERO one (no `__saturate` spam). With jarl-based seeding, 336 clean function boundaries were
recovered and the module decompiles to coherent C.

**Known limitation:** both community modules are incomplete on some RH850 instructions, so parts of
the large control functions still decode badly.

### Lane-centering investigation (the main line of work)
The question driving this work: the LCA AsBuilt configuration bit is enabled in IPMA, it reportedly
works on Pre-facelift cars, but on the facelift car the same setting produces no working LCA. Where
does the chain break?

Findings from the static IPMA↔PSCM comparison (`analysis/OSSZEFOGLALO_LCA.md`,
`analysis/REPORT_LCA_FIRMWARE.md`):
- **The facelift IPMA does store the setting.** The `706-04-01` block maps to the 12-byte `DE03` DID,
  and both Pre-FL and FL hosts have the complete read/write/NVM-save path, with a byte-for-byte
  identical 64 × 12-byte configuration-dependent enable/DTC table. So "the FL IPMA doesn't save the
  bit" is ruled out.
- **But no proven functional link** from the stored bit to an actual LCA steering-angle or curvature
  command was found in the visible IPMA host code.
- **Part of the IPMA CAN platform layer is missing** from the available VBFs (the Pre-FL dump starts
  at `0x20000`, FL at `0x10000`), so the full `0x3CA`/`0x3CB` send path cannot be recovered from the
  dumps alone.
- **The FL PSCM signal configuration gained exactly two new 3-bit fields** (83 → 85 descriptors,
  boundaries verified arithmetically, not estimated). Their most likely meaning is the expanded
  automatic-parking mode request/status (`ApaMdeStat_D_RqDrv` / `ApaMde_D_Stat`) — an inference, not
  CAN-ID-level proof. Most of the rest of the signal-config engine is shared structure with only
  pointer relocations.
- A **speed-gate-like comparison** (`25000 >= in_r18`) exists in the main control function at
  `0x1d160` and is confirmed present by both RH850 modules — but **its semantics cannot be verified**
  at current tooling quality (speed vs. torque vs. angle, and its unit, are unknown).

Ranked hypotheses for the break, from the analysis:
1. FL PSCM accepts the LCA request under a different condition than the Pre-FL application.
2. A lane-assist field lands on a different internal handle/bit/validation state in the FL `14C386`.
3. The FL IPMA's not-yet-visible CAN platform layer doesn't emit the same `0x3CA`/`0x3CB` command.
4. The `CV6T-14C218-AX` calibration supplies a different threshold or feature flag.

### `lca_sim` — lane centering designed without the car
A runnable, stdlib-only reference implementation that stays **inside the factory safety envelope**,
centering the car via the stock `LaRefAng` nudge channel (deliberately saturating at ±5.87° in code):
- `can_lane_assist.py` — DBC-accurate encoder/decoder for `Lane_Assist_Data1/2/3` and `EPAS_INFO`,
  Motorola bit packing, with a passing self-test.
- `controller.py` — lookahead-based damped lateral controller (offset, heading, curvature, speed →
  `LaRefAng` in degrees).
- `sim.py` — closed-loop kinematic bicycle simulation over straight → highway arc → sharp curve.

Simulation result: on a straight and a 250 m highway arc at 100–130 km/h it pulls in from a 0.30 m
offset within ~50 m and holds centre, using only ~0.6° — **far inside the envelope**, so the stock
nudge channel is sufficient for highway lane centering. On a 28 m urban curve it saturates and the
car leaves the lane — which is the envelope behaving as intended, i.e. where the driver takes over.

## Current status / what's been done
- Full VBF extraction and inventory tooling, a partial DSP56800E decoder (from the earlier
  architecture hypothesis), PSCM shared/relocated code mapping, X-memory cross-reference finder, and
  a `14C386` signal-descriptor decoder with a Pre-FL↔FL diff (`analysis/`).
- RH850 Ghidra tooling set up and working; 336 clean functions recovered.
- Working LCA controller and simulation, validated in closed loop.
- Decompiled output under `decompiled/`, extracted blocks under `extracted/`.
- `analysis/tool_sources/opendbc` is a clone of the open-source OpenDBC project, included for
  reference only (third-party, not this project's work).

## Plans / next steps
1. Bind the new `0x7F75` / `0x7F74` internal signal groups to concrete CAN IDs by finding their
   receive/message table in the PSCM application.
2. Trace consumers of the new `0x7EEB` and modified `0x7EB9` handles — if they lead into APA-mode
   logic, the identification of the two new descriptors is essentially confirmed.
3. Identify the internal signal handles for `0x3CA`/`0x3CB`, then find the first differing conditional
   branch between the homologous Pre-FL (`AF`) and FL (`AR`) consumer functions.
4. Diff only the calibration addresses that this identified code actually references — a blind full
   calibration diff is too noisy.
5. Improve the RH850 decode (fix the faulty SLEIGH constructors, or use a commercial RH850 decoder) so
   the `25000` comparison and the `LaRefAng` handler can be read with confidence.
6. If an FL-car CAN log with the LCA AsBuilt bit toggled off/on becomes available, it immediately
   settles whether the chain breaks on the IPMA sending side or the PSCM receiving side — useful, but
   not a prerequisite for continuing firmware-only analysis.

Only after those identifications is it worth preparing a patch candidate. Checksum, VBF
signature/verification, NVM schema, rollback and steering safety states are **not yet fully mapped**.

## Safety note
This module actuates the steering. Any modification here can affect vehicle control directly. Nothing
in this repository has been flashed to a PSCM, and the LCA route is explicitly rated high risk in the
source analysis. Treat everything here as research material.
