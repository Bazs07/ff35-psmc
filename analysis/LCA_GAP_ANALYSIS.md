# LCA gap analysis — the complete chain, and exactly what is missing on the facelift

Capstone of the overnight full-mapping campaign. Integrates the IPMA decode (F1FT vs working Kuga CV4T),
the PSCM decode (Pre-FL vs FL, incl. As-Built), the PAM/other-module ruling, the static enablement
prediction, and the independent verification/simulation. **Static analysis only; nothing flashed.** No
live As-Built export or CAN log was available, so the working **Kuga CV4T** and the working **Pre-FL
PSCM** are used as reference points instead of the car. Every node below is grounded in a committed
per-track doc.

## The LCA signal chain, node by node

```
 camera optics
   │
   ▼
 [1] Vision DSP (TI DaVinci-class, external SoC)        ── produces lane geometry + the As-Built
   │   F1FT platform CSF2F0 ; CV4T platform CSF265           record values the host consumes
   ▼   (IPMA_BOOT_VISION.md; iglooom F1FT_vs_CV4T)
 [2] IPMA M32R host: perception → feature-status FSM    ── decides LKA/LDW/"LCA" status
   │   fn 0xb2bdc → enum 0x82d8a4 (+ subfields)             (IPMA_ACTIVATION_GATE.md, _ENABLEMENT_STATIC.md)
   ▼
 [3] IPMA As-Built / coding gates                       ── 0x11E enum latch; 0x117 key; 0x119 discrim.
   │   params 0x117/0x119/0x11E (group 0x2b)                (IPMA_ACTIVATION_GATE.md §7, LCA_VERIFICATION.md)
   ▼
 [4] IPMA calibration speed gates                       ── LCA arm 80/band 5/drop 75 ; LKA 64.6/5
   │   ipma_cal.bin @0x902774 / 0x902ea4                     (IPMA_XPLAT_DIFF.md)
   ▼
 [5] CAN: LaRefAng 0x3CB + Lane_Assist_Data 0x3CA       ── 0.05 mrad/bit, ±5.9° ; status enum on wire
   │   (final TX packing in absent low flash 0x0–0xFFFF)     (IPMA_CAN_FEATURES.md)
   ▼
 [6] PSCM RX + lane decode/apply                        ── 12-bit handle loop → X:0x7A90 → assist mix
   │   P:0x12C83 ; byte-identical Pre-FL↔FL (mod reloc)      (PSCM_PREFL_FL_DIFF.md, PSCM_SAFETY_MONITORING.md)
   ▼
 [7] PSCM assist output → EPS motor                     ── 3-phase drive; assist math in absent block00
       (PSCM_MOTOR_CONTROL.md, PSCM_ASSIST_MAP.md)
```

## Node verdicts — works / gated / missing, and FL vs reference

| # | node | status on FL | Pre-FL / Kuga reference | verdict |
|---|------|-------------|-------------------------|---------|
| 1 | Vision DSP platform | CSF2F0 (F1FT) | CSF265 (CV4T working) | **DIFFERENT** — DSP Jaccard 0.000; produces the record values the host reads |
| 2 | IPMA feature-status FSM | present, computes enum ACTIVE at default | equivalent structure on CV4T | **WORKS / equivalent** |
| 3 | IPMA As-Built coding gates | **subfields DEGRADED at FL default** | CV4T provisioned; Pre-FL bit sufficed | **GATED — the primary in-image break** |
| 4 | IPMA cal speed gates | LCA 80/5/75 present & correct | identical on CV4T | **WORKS / identical** — not the cause |
| 5 | CAN lane signals | present; final packing off-image | same encoder | WORKS (TX packing UNRESOLVED, low flash) |
| 6 | PSCM lane decode/apply | byte-identical modulo relocation | same code Pre-FL | **WORKS / unchanged** — not the cause |
| 7 | PSCM assist output/EPS | works; core math in absent block00 | same | WORKS |

## What is missing for LCA on the facelift — ranked

### A. Coding-addressable (no code flash; DE-family / 0x48-class UDS writes on 0x706)
1. **Param 0x117 (signal 279) is unprovisioned.** FL default = all-zero, which matches **none** of the
   76 keys in table `0xe89ed`, so the key-lookup `0xb5ad8` returns not-found → the lane subfields publish
   **DEGRADED/zeroed (quality 2)**, even though the status *enum* computes to ACTIVE. **This is the
   decisive in-firmware break.** Fix: write `0x117[0:6]` to a valid key (e.g. `02 01 01 02 01 11`).
   *(Independently reproduced by simulation — `LCA_VERIFICATION.md` V1/V3.)*
2. **Param 0x119 (signal 281) byte[13] discriminator** must select a matching key row whose code maps
   to a non-zero lane level (discriminator 1/2/3 → code 1/2/2; 0/4 → level-0). Sets the published lane
   level once (1) is satisfied.
3. **Param 0x11E (signal 286) enum latch** — optional lever: value 2 forces the status enum to ACTIVE
   directly; its FL default 0xFF is benign (defers to the compute path, which already yields ACTIVE).
   Not required if (1)+(2) hold, but available as a forcing override that CV4T does not even have.

### B. NOT coding-addressable (genuine capability difference)
4. **The vision-DSP platform (CSF2F0 vs CSF265).** The gate byte (`0x117[6]`) and the record values the
   host consumes are produced upstream by the camera/DSP; iglooom measured 0.000 content overlap between
   the F1FT and CV4T DSP images, and the F1FT cal container is fully rewritten. If the CSF2F0 build does
   not assert an LCA-capable configuration, **no host-side coding restores it** — this is the residual
   hard limit if coding (A) does not by itself produce centering.

### C. Ruled OUT as causes (proven, not the break)
- **PSCM** — no coding gate for lane-apply (WS6); lane decode/apply byte-identical Pre-FL↔FL (WS2);
  no separate LaRefAng magnitude clamp; speed acceptance is cal-resident and unchanged.
- **IPMA speed gates** — LCA 80/5/75 present and identical to the working Kuga (WS1).
- **PAM / park aid** — separate path (ExtSteeringAngleReq 0x3A8), no role in LKA/LCA (WS3).
- **No third module** in the loop; the only RX that feeds the lane FSM (0x117) is written on the IPMA's
  own 0x706 diagnostic channel, not broadcast by another ECU (WS3, IPMA_STATUS_GATE_FLAG.md).

## Bottom line

On the facelift, the LCA chain is intact and equivalent to the working Kuga **everywhere the firmware
can be coded** — the enum computes ACTIVE, the speed gates are correct, the PSCM applies LaRefAng
identically. The one in-image break is that the **IPMA As-Built lane records (0x117 primary key, 0x119
discriminator) are unprovisioned on FL**, so the lane subfields publish degraded. That is
**coding-addressable** (DE-family / 0x48-class UDS writes), and is the concrete thing to try first once
diagnostic access is available. The only thing that could still block LCA after correct coding is the
**upstream CSF2F0 vision-DSP build**, which is not coding-reachable and would require the matched CSF265-
class LCA capability — the genuine Pre-FL/Kuga-vs-FL capability difference. The decisive confirmation
remains a live check (read 0x117/0x119/0x11E on the car vs a working reference; log 0x3CA), which is not
available now; the firmware-only prediction above is the most that static analysis can establish.

*(All claims trace to the committed per-track docs in `ff35-ipma/` and `ff35-psmc/analysis/`; gaps are
marked UNRESOLVED there. Nothing has been flashed.)*
