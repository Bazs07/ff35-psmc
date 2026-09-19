# LCA chain — visual map (works / gated / missing)

Companion to `LCA_GAP_ANALYSIS.md`. The full lane-centering signal chain from camera to steering, with
each node marked by its verified status. Renders on GitHub (Mermaid). Static analysis only.

```mermaid
flowchart TD
    CAM["Camera optics"] --> DSP

    subgraph IPMA["IPMA forward camera — M32R host (ECU 0x706)"]
      DSP["Vision DSP (external TI DaVinci-class)<br/>FL: CSF2F0 &nbsp;|&nbsp; Kuga: CSF265<br/>produces lane geometry + config identity"]
      FSM["Feature-status FSM 0xb2bdc<br/>enum 0x82d8a4 = ACTIVE at default"]
      GATE["As-Built gates<br/>0x117 key (0xe89ed lookup)<br/>0x119 discriminator, 0x11E latch"]
      CAL["Cal speed gates<br/>LCA 80/5/75 · LKA 64.6/5"]
      TX["CAN encode 0x3CA/0x3CB<br/>(final packing in absent low flash)"]
      DSP --> FSM --> GATE --> CAL --> TX
    end

    TX -->|"LaRefAng 0x3CB (±5.9°)<br/>Lane_Assist_Data 0x3CA"| RX

    subgraph PSCM["PSCM EPS steering (ECU 0x730, DSP56800E)"]
      RX["RX + lane decode P:0x12C83<br/>12-bit handle → X:0x7A90"]
      MIX["Assist mix + clamps<br/>(cal-resident thresholds)"]
      MOT["3-phase EPS motor drive<br/>(current loop in absent block00)"]
      RX --> MIX --> MOT
    end

    MOT --> WHEEL["Steering torque overlay"]

    PAM["PAM park aid (0x736)<br/>ExtSteeringAngleReq 0x3A8"] -.->|"separate path — NOT LCA"| PSCM

    classDef ok fill:#1b5e20,stroke:#2e7d32,color:#fff;
    classDef gated fill:#b71c1c,stroke:#c62828,color:#fff;
    classDef diff fill:#e65100,stroke:#ef6c00,color:#fff;
    classDef neutral fill:#37474f,stroke:#546e7a,color:#fff;

    class FSM,CAL,TX,RX,MIX,MOT,WHEEL ok;
    class GATE gated;
    class DSP diff;
    class CAM,PAM neutral;
```

## Legend

- 🟢 **green — works / equivalent to the working reference** (Pre-FL PSCM & Kuga CV4T): the feature-status
  FSM computes ACTIVE, the speed gates are present and identical, the CAN encode exists, and the PSCM
  decodes/applies `LaRefAng` byte-identically (modulo relocation) down to the motor drive.
- 🔴 **red — the gate that breaks it:** the IPMA **As-Built lane records** (`0x117` primary key, `0x119`
  discriminator) are at their unprovisioned default on this car, so the `0xe89ed` key-lookup fails and the
  lane subfields publish **degraded**. **Coding-addressable** (see `LCA_CODING_ACTION_SHEET.md`).
- 🟠 **orange — the residual, non-codeable difference:** the **CSF2F0 vs CSF265 vision DSP**. It produces
  the config identity/gate the host consumes; if the FL DSP build is not LCA-capable, coding alone cannot
  restore centering.
- ⚫ **grey — out of the LCA loop:** the camera front-end and the PAM park-aid steering path (`0x3A8`),
  which is proven separate from the lane path (`0x3CB`).

## One-line reading
Everything on the chain works or is equivalent to a working car **except** the red node — the
unprovisioned IPMA As-Built lane key — with the orange DSP node as the only thing that could still block
LCA after correct coding.
