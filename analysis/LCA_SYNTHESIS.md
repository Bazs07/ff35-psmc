# LCA on the Mk3.5 (C1MCA) — consolidated evidence-based resolution

This is the synthesis across the full operational decode of both ADAS actuator/sender modules
(IPMA forward camera `0x706`, Renesas M32R; PSCM EPS `0x730`, DSP56800E), cross-checked against a
parallel bench-tested researcher's repo (iglooom/IPMA_Firmware_Mod) and against untrusted community
testimony (Telegram "CANBUS" group). It answers the original project question: **why LCA (lane
centering) works on a Pre-facelift Focus Mk3.5 with an IPMA As-Built bit but not on the facelift.**

Every claim below is tagged with its source and confidence. Community testimony and the third-party
repo are treated as *leads to verify*, not fact; the verdict rests on the static binary evidence in the
per-track docs.

## The five decode tracks (all committed)

| module | doc | what it settled |
|--------|-----|-----------------|
| PSCM | `PSCM_MOTOR_CONTROL.md` | 3-phase BLDC/PMSM drive, dual-ADC current sensing, high-rate commutation ISR, torque-assist 2-D map layout |
| PSCM | `PSCM_SAFETY_MONITORING.md` | assist-output saturation clamps; **no separate tunable LaRefAng magnitude clamp**; thresholds are calibration-resident; single applied lane-correction path |
| PSCM | `PSCM_CAN_DIAG.md` (prior) | RX decodes three centered 12-bit lane handles, byte-identical Pre-FL↔FL |
| IPMA | `../../ff35-ipma/IPMA_CAN_FEATURES.md` | CAN routing table (286 records); three-layer feature gating; **separate continuous-LCA signal refuted at CAN level** |
| IPMA | `../../ff35-ipma/IPMA_DIAG_CONFIG.md` | UDS + DID table + DE00–DE03 As-Built family; **no dedicated centering code path**; FL adds three group-0x2B params |
| IPMA | `../../ff35-ipma/IPMA_BOOT_VISION.md` | CSF microkernel, 10/50 ms rasters; image processing runs on an external TI DaVinci-class DSP, not in this host image |
| IPMA | `../../ff35-ipma/IPMA_ACTIVATION_GATE.md` | **the FL gate resolved** — param 0x11E (ID 286) is the feature-status latch; done with real binutils m32r objdump |

## The five community/bench hypotheses — verdicts

- **H1 (PSCM ~40 km/h speed gate): PARTIALLY CONFIRMED, cal-resident.** No 40 km/h literal exists in
  the PSCM code — and that is *expected*: 29/33 `CMP x:imm16` in block01 compare against calibration
  memory (0x70xx–0x7Axx band), only 4 against peripherals. The PSCM gates on cal-resident thresholds
  (`CV6T-14C218-AX`, not in the code image), consistent with iglooom's bench finding that the PSCM
  "allows from ~39 km/h." The lever exists; its value lives in calibration, not code. *(PSCM safety)*
- **H2 (separate LKA vs LCA inputs to the PSCM): REFUTED.** Both the IPMA send side and the PSCM
  receive side carry **one** lane-steering path: IPMA registers only `0x3CA` (Lane_Assist_Data, status)
  plus the dedicated `0x3CB` LaRefAng / `0x3CC` feedback pair; the PSCM decodes a single LaRefAng field
  (0.05 mrad/bit, ±2048 = ±5.9°). There is no distinct LCA correction signal on the bus. LKA and LCA
  differ only by **activation/ramp semantics and the status code in 0x3CA**, not by a separate wire.
  *(IPMA CAN + PSCM safety, mutually corroborating)*
- **H3 (LCA is a dead received signal in the PSCM): REFRAMED, not a dead signal.** The premise was
  "LCA correction received but never consumed." The truth is narrower and stronger: there is no
  separate LCA signal to be dead. The single LaRefAng path *is* consumed (extracted at PSCM P:0x12C85;
  the exact assist-mix consumer needs indexed/ALU decode the focused tool lacks, marked UNRESOLVED —
  but it is **byte-identical Pre-FL↔FL**, so whatever consumer exists cannot be the FL differentiator).
  So "the Mk3.5 PSCM has no LCA-apply path" is true only in the sense that **it has no LCA-*specific*
  path** — it applies LaRefAng, and LKA/LCA are the same nudge to it. *(PSCM safety + CAN)*
- **H4 (IPMA send split — neutral LKA below ~65, LCA continuous): REFUTED as stated; the 65 km/h
  number is real but is a gain breakpoint, not a neutral-send branch.** The IPMA has a real float speed
  axis `[50,55,60,65,70,75]` km/h (0xE11F4) with per-breakpoint LKA gain coefficients, and the gain
  schedule floors at 50 km/h. But the on/off **activation** gate (60/65/180) is calibration-resident,
  not a hard-coded `if v<65 send neutral` compare — that exact TX gate is not provable in this app
  image. There is no separate "continuous LCA" output to split from LKA. *(IPMA CAN)*
- **H5 (F1FT cal checksum unsolved): CONFIRMED, and shown to be a flash-tool concern, not runtime.**
  The IPMA calibration loader (0x15D94) validates null → 4-byte align → bounds → magic `0xAA5AA555`
  only; it **never reads** the CRC word at container +0x18. So the F1FT container CRC is not
  runtime-enforced — the patch blocker is a Ford flash/validation tool computing it, matching iglooom's
  "F1FT checksum NOT SOLVED / do not attempt to patch the F1FT part." *(IPMA diag)*

## Reconciling the two conflicting leads

The investigation had two seemingly opposed external claims:

- **iglooom (bench-tested):** "Which module gates? IPMA. PSCM allows from ~39 km/h." → the binding
  limit is IPMA send-side.
- **Telegram owner (Auron):** "it's the PSCM that is involved in the limitation… I'd look into PSCM."
  AZ: "both are needed."

**The binary evidence says both are describing the same architecture from two ends, and AZ is right:**

1. For **LKA speed lowering**, iglooom is correct: the PSCM accepts from ~39 km/h, so the binding limit
   is the IPMA send-side activation/gain schedule (cal-resident). Lower the IPMA record and LKA engages
   lower — exactly what the bench reporter saw (with reduced authority below the gain floor).
2. For **LCA specifically**, the PSCM is "involved" only in that it applies LaRefAng and nothing LCA-
   specific — but that is *not* where the facelift regression is, because the PSCM lane path is
   **byte-identical Pre-FL↔FL**. Both modules matter (AZ), but neither module's *code* changed the LCA
   behaviour between Pre-FL and FL.

## The FL-vs-Pre-FL differentiator — where the chain actually breaks

Ruled out by the decode (all Pre-FL↔FL identical): the PSCM lane decode and assist path; the IPMA lane
math (0.05 mrad/bit scaling and ±5.9° saturation); the DE03 As-Built storage path and the DTC map.

The one firmware-visible change on the facelift: **the FL IPMA config adds exactly three new As-Built
parameters, all in ADAS group 0x2B — 0x11C (len1, default 00), 0x11D (len8), 0x11E (len1, default
ff)**, with no Pre-FL-only params and no length changes.

**This is now resolved to a single param (`IPMA_ACTIVATION_GATE.md`).** Using a real GNU binutils 2.42
`m32r-elf-objdump` (built from vendored source) to follow the `seth`/`or3`/`add3` constant-pool address
construction the custom disassembler could not, all 84 config-accessor (`0x8904c`) call sites were
enumerated and each param ID recovered, mapping every As-Built param to its one consumer:

- **0x11E (ID 286) — THE GATE.** Read at `0xb2c44` inside the feature-status computation `0xb2bdc`:
  `cmpi r9,#3; bnc` — if the 0x11E byte is <3 it is used *directly* as the feature-status enum written
  to `0x82d8a4` (value 0 forces "off"); if it is 0xFF (the FL default) the status defers to the computed
  path (flag `0x82d916` → 1 available / 2 active). It is a persistent feature-status enable/override
  latch, re-written on status transition at `0xaf96c`.
- **0x11C (ID 284)** — a provisioning/coding **handshake flag** (sole read `0x35b34`, only when
  provisioning-mode `(0x8064d4)==2`); not wired to the runtime FSM or LaRefAng.
- **0x11D (ID 285, len8)** — a **4×u16 parameter record** copied into signal DB `0x82c178`; data, not a
  gate.

This also **refutes** the earlier "status logic lives in absent low flash" caveat: the 1/2/3 status
*decision* and its bit-field packing (`and3 #0xe7` / `or3 #0x10` available / `or3 #0x18` active, `bset
#0x4`) are in this image at `0x3bb80..0x3bd30`; only the final hardware TX-mailbox serialization is in
the absent lower flash. The decision that emits the lane status is here and reads 0x11E.

## Bottom-line answer

On the Mk3.5 (C1MCA), "LCA" was never a separate lane-centering algorithm — it is a **coding bit plus
the shared, bounded (±5.9°) LKA LaRefAng nudge**, gated by a layered stack (As-Built enable bitmap →
calibration speed/threshold records → PSCM cal-resident acceptance gate). Ford completed a true
continuous LCA/TJA only on the newer C519 (Focus Mk4), whose PAM/ADAS stack we decoded separately.

So enabling the LCA As-Built bit on the **facelift** does not produce centering because:

1. There is no dedicated centering controller to switch on — only the shared LKA nudge; **and**
2. Activation is a **coupled precondition set**, not one bit. The full trace of the status-computation
   function `0xb2bdc` (see `IPMA_ACTIVATION_GATE.md` §7) shows the published lane-status enum
   (`0x82d8a4`, the value the CAN getter `0xb44f4` hands to the 0x3CA packing) is set by:
   - **param 0x11E** (group 0x2B, ID 286) as a *direct override* when its value is 0/1/2 — but its **FL
     default 0xFF is behaviorally transparent** (it takes the identical "compute" path a Pre-FL module
     takes when the param is absent), so 0x11E is a *new lever*, not by itself the cause of the break;
   - otherwise the **compute path**: enum = active/available depending on the gate flag `0x82d916` —
     traced (see `IPMA_STATUS_GATE_FLAG.md`) to **byte[6] of the 8-byte record for signal/param 0x117
     (ID 279)**, whose sole writer is the **UDS diagnostic service handler `0x32668`** (length-checked
     8-byte payload → merge `0xb2e54` → NVM re-commit → UDS positive/NRC response). So this gate is a
     **tester/coding-written byte on 0x706** (0 → active, nonzero → available), effectively a *second
     coding lever* alongside 0x11E — not a periodic broadcast from another ECU as first assumed; the exact
     DID/RID number is not pinned;
   - and, independently, the actual lane **subfields** are only published as valid when **param 279
     (0x117) maps to code 1 AND param 281 (0x119) is present/valid** — else they are zeroed with a
     "degraded" quality flag even if the enum reads "active";
   - all of it still subject to the **cal-resident speed [arm,band] gates**.

   So the FL regression is the combination of these coupled preconditions (the `0x82d916` runtime gate,
   the 0x117/0x119 config, and the cal speed-gates), which the plain LCA coding bit no longer satisfies —
   not a single changed value.

This is a **configuration + capability-envelope** answer, not a code bug: the FL regression is in the
As-Built precondition set, not in changed lane firmware.

## The single highest-value missing input

Not more static RE. With the status-computation function fully traced, the decisive next step is the
**car's As-Built export** — specifically the live values of group-0x2B params **0x117 (279), 0x119
(281) and 0x11E (286)** (plus 0x11C/0x11D and 0x02A/0x039/0x03E/0x0BD), compared against a **working
Pre-FL car's export**. The static analysis gives a concrete, testable recipe, all via DE-family coding
DIDs (no code flash, no F1FT checksum problem):

1. Force the status enum with **0x11E = 2** (direct override to "active"), and
2. Ensure **0x117 maps to the enabled code and 0x119 is present/valid** so the subfields publish with
   quality = 1 (otherwise the enum says "active" but the lane data is zeroed/degraded), and
3. Confirm the cal-resident speed [arm,band] gates admit the target speed range.

A CAN log of the lane-status byte in 0x3CA (and the subfield validity) while toggling the coding, plus
the absent lower-flash TX layer, are the secondary confirmations. Crucially, the gate `0x82d916` turns
out to be **coding-controlled, not a foreign broadcast**: it is byte[6] of the 8-byte signal-0x117
record whose only writer is the UDS service `0x32668`. So both status levers — 0x11E (direct enum
override) and 0x117/byte[6] (the active-vs-available gate) — are **diagnostic/coding writes on 0x706**.
This means the whole active-vs-available decision is reachable by coding, and the decisive experiment is
to read/compare these coding records (0x11E and the 0x117 record, plus 0x117's key bytes for the
subfield-enable lookup and 0x119) against a working Pre-FL car — no code flash, no F1FT checksum
problem. The exact DID/RID numbers behind these records are the one thing left to enumerate (against the
module or a Ford As-Built database).

*(Community/third-party items are testimony and bench notes; the verdicts above rest on the cited
binary evidence in the per-track docs. Nothing here has been flashed — static analysis only.)*
