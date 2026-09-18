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
ff)**, with no Pre-FL-only params and no length changes. These are the strongest candidate for a **new
coupled precondition** that the old Pre-FL coding recipe (setting the LCA bit) no longer satisfies on
FL. Which of the three gates lane activation is a HYPOTHESIS — not provable from the app image alone,
because the final 0x3CA status packing lives in the absent lower flash (0x0–0xFFFF).

## Bottom-line answer

On the Mk3.5 (C1MCA), "LCA" was never a separate lane-centering algorithm — it is a **coding bit plus
the shared, bounded (±5.9°) LKA LaRefAng nudge**, gated by a layered stack (As-Built enable bitmap →
calibration speed/threshold records → PSCM cal-resident acceptance gate). Ford completed a true
continuous LCA/TJA only on the newer C519 (Focus Mk4), whose PAM/ADAS stack we decoded separately.

So enabling the LCA As-Built bit on the **facelift** does not produce centering because:

1. There is no dedicated centering controller to switch on — only the shared LKA nudge; **and**
2. Activation now depends on preconditions the bit alone doesn't meet — most likely the three new FL
   group-0x2B As-Built params (0x11C/0x11D/0x11E) and/or the cal-resident PSCM/IPMA gates — whereas on
   Pre-FL the single bit was sufficient.

This is a **configuration + capability-envelope** answer, not a code bug: the FL regression is in the
As-Built precondition set, not in changed lane firmware.

## The single highest-value missing input

Not more static RE. The decisive next step is the **car's As-Built export** — the live values of all
DE0x DIDs and the group-0x2B params (0x11C/0x11D/0x11E, plus 0x02A/0x039/0x03E/0x0BD) — compared
against a **working Pre-FL car's export**. That one diff would pin which precondition the FL bit fails
to satisfy, which the firmware alone cannot reveal (the values are stored config, not code). A CAN log
of the bit being toggled, and the absent lower-flash region, are secondary.

*(Community/third-party items are testimony and bench notes; the verdicts above rest on the cited
binary evidence in the per-track docs. Nothing here has been flashed — static analysis only.)*
