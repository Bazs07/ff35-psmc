# PSCM autopark diagnosis — data-level analysis (Pre-FL PSCM + FL PAM)

**Module:** Ford Focus Mk3.5 PSCM = electric power steering (EPS), CAN 0x730
**Goal:** why autopark fails if the **Pre-FL PSCM** is flashed onto an **FL** car (for LCA) with an **FL PAM**, and whether autopark can be saved while keeping LCA
**Setup (from the user):** the car has an **FL PAM `F1ET-14C090`**; the PSCM has **NOT yet been flashed** (risky); the "doesn't work" reports are from **other people**; currently **static analysis only** (no CAN log/DTC)
**Date:** 2026-09-14
**Method:** VBF extraction + descriptor decode + DSP56800E absolute-address xref + binary table search; every claim reproduced on the actual VBFs

---

## 0. TL;DR

The architecture is **empirically DSP56800E** (the earlier RH850 lead was wrong, to be discarded). The **complete** PSCM-side Pre-FL↔FL signal-config (14C386) difference is **exactly 2 new 3-bit signals**: `7EEB`@group`7F75` (byte3, bits5:3) and `7EB9`@group`7F74` (byte4, bits6:4) — their profile matches exactly the **APA-mode request/status** (`ApaMdeStat_D_RqDrv` / `ApaMde_D_Stat`; SAPP/PPA/POA, per the Lincoln DBC's value tables). Everything else different is **mechanical relocation**. The FL PAM's description is **"Ford-MCA-SAPP"** (semi-automatic parallel park). The Pre-FL PSCM natively supported parallel parking. **Leading hypothesis:** the FL PAM uses an APA-mode handshake that the Pre-FL PSCM's signal config does not decode → the handshake breaks. **Static limitation:** the signal consumers and the group→CAN-ID binding are **pointer-indexed/built at runtime** → with the current partial DSP56800E tooling it cannot be settled whether the FL PAM would accept the Pre-FL PSCM for basic parking.

---

## 1. Architecture — DSP56800E CONFIRMED, the RH850 lead discarded [PROVEN]

Block00's reset vector table is a row of identical 4-byte entries, with a unique first (reset) entry + a repeating default handler:
- FL `CV6T-14C217-AR`: `55e2 c92b` = LE word `E255 2BC9` = `JSR P:0x12BC9` (reset); `55e2 912b` = `JSR P:0x1912B` (default)
- Pre-FL `BV6T-14C217-AF`: `55e2 761d` = `E255 1D76` = `JSR P:0x11D76` (reset); `55e2 3e1d` = `JSR P:0x11D3E` (default)

The `0x1` top address bit comes from the opcode, consistent across both entries (`0x12BC9=(1<<16)|0x2BC9`, `0x1912B=(1<<16)|0x912B`). This structure is explained **only** by DSP56800E JSR encoding (word-addressing, P=VBF/2). → `decompiled/pscm_rh850*.c`, `pscm_esaulenka.c`, `pscm_full.c`, and `extracted/pscm_b01.asm` (V850/RH850 decode) are **all wrong, to be discarded**. Usable: `analysis/m56800e_disasm.py` (partial DSP56800E) + the `*_sigcfg_code.lst` listings.

Memory map (both apps): block00 vector+code `X-P:0x0` (0x9800 bytes), **calibration 14C218 @ `0x9800`**, main code block01 `0x1C000` (0x64000), signal-config 14C386 @ `X:0x8000` (VBF 0x04008000).

## 2. Signal-config (14C386) delta — the core finding [PROVEN]

83 (Pre-FL) vs 85 (FL) descriptors, 10-byte records, after a `0x56` header. Per group (group_word):

| Group | Pre-FL | FL | Δ |
|---|---|---|---|
| 7F6C | 1 | 1 | |
| **7F74** | 18 | 19 | **+1** |
| **7F75** | 17 | 18 | **+1** |
| 7F79 | 3 | 3 | |
| 7F7D | 30 | 30 | |
| 7F81 | 1 | 1 | |
| 7F8A | 13 | 13 | |

Much of the set-diff "added/removed" is **relocation**: because of the 2 inserted signals, the 7F75 `ctl` one-hot slot selectors shifted (`0x80→0x40→0x20`), and the 7F8A signal-storage X-addresses shifted (`+0x0A`/`+0x14`). The **real semantic delta is exactly 2 signals:**

- **`7EEB` @ 7F75**, `byte[3] mask=38` (bits 5:3), 3-bit, new slot `0x80` — raw `eb7e757feb7e03388040`
- **`7EB9` @ 7F74**, `byte[4] mask=70` (bits 6:4), 3-bit — raw `b97e747f000004700200`

Two 3-bit fields = exactly the **APA-mode request + status** profile (the `ford_lincoln_base_pt.dbc`: `ApaMdeStat_D_RqDrv` 3-bit {0=Inactive,1=SAPP,2=PPA,3=POA,6=Off,7=Faulty}; `ApaMde_D_Stat` 3-bit {…SAPP/PPA/POA}). `ExtSteeringAngleReq` (15-bit, msg 936=0x3A8) **is NOT in the delta** → the core park-steering signal path is identical between Pre-FL/FL.

## 3. Group→CAN-ID binding — HYPOTHESIS, cannot be settled statically

- Which CAN message the groups (7F74/7F75) belong to cannot be proven statically:
  - **No absolute X-access** to the `7EEB/7EB9/7F74/7F75` addresses in either app block (filtered against `m56800e_disasm`'s absolute-MOVE forms) → **pointer-indexed** access.
  - The group address words (`7F74` etc.) occur **0×** in the app's code → the group contexts are **runtime-built RAM structures** (X:0x7Fxx, below the 0x8000 sigcfg base, in no flashed block).
  - So the group→CAN-ID mapping (0x3A8 park vs. 0x3CA/0x3CB lane) sits in the signal-config at runtime, not as a literal → it cannot be traced with the current partial decoder.
- **Strong structural argument** that the 2 new signals are PARK/APA (not lane): a 3-bit APA-mode profile + FL brought the expanded park + the FL PAM is "SAPP". But this is **[HYPOTHESIS]**, not [PROVEN].

## 4. Calibration (14C218) — full retune [PROVEN]

Pre-FL `BV6T-14C218-AF` vs FL `CV6T-14C218-AX`: 75,776 bytes each, **96.3% of words differ** (a naive diff is also shifted by one early ~1-word insertion). → **a completely retuned FL calibration**; without a code reference, the park-relevant cell **cannot be filtered out** (the blind diff is too noisy, matching the earlier finding).

## 5. FL PAM — `F1ET-14C090-BG` = "Ford-MCA-SAPP-Application-Executable", ECU 0x736 [PROVEN]
The main function of the park module is **SAPP (semi-automatic parallel park)** — the same function the Pre-FL PSCM natively supported. (The PAM's architecture is a separate module; not yet reverse-engineered — direction 3.)

---

## 6. Leading hypothesis + confidence

**The Pre-FL PSCM retains the core park-steering capability** (the Pre-FL Focus could do SAPP; the `ExtSteeringAngleReq` path is not in the delta). The **only PSCM-side gap is the 2 APA-mode signals** (the FL expanded-park handshake). So the most likely cause: **the FL PAM expects an APA-mode handshake that the Pre-FL PSCM does not decode/acknowledge** → the PAM gives up. **[HYPOTHESIS, MEDIUM]**

**What cannot be settled statically:** whether the FL PAM *requires* the APA-mode handshake for basic (SAPP) parking, or only for the expanded modes (PPA/POA). This lives in the **FL PAM's logic** (not the PSCM firmware), and/or would be immediately visible from a **CAN log**.

## 7. Fix candidates (do NOT implement yet — verify first)

1. **Data-only hybrid:** Pre-FL PSCM app (working LCA) + the 2 FL APA descriptors inserted into the signal config. **Condition:** whether the Pre-FL app's code actually *consumes* the APA-mode signals and sends back status — **currently not confirmed** (code wall). If not, the descriptor alone won't create a handshake.
2. **FL PSCM + LCA unlock** (the project's original, parallel path) — autopark stays intact, but the FL LCA gate would need to be found (previously stalled).

## 8. Recommended next steps (value/risk)

1. **CAN log from the CURRENT (full FL) car during a park attempt** — *read-only, NO flash*, with UCDS. Immediately shows the FL PAM's park sequence (0x3A8 `ExtSteeringAngleReq`, APA-mode fields, PSCM feedback). **Highest value / lowest risk**, and settles the open question in section 6. (Does not require the risky flash.)
2. **Direction 3 — reverse-engineer the FL PAM (`F1ET-14C090`):** what it checks from the PSCM before/during park. Real code image, but a separate architecture, significant work.
3. **Deeper PSCM code RE:** extend the DSP56800E decoder (indexed addressing + base-pointer tracking) to find the signal consumers/park-status TX. Large effort, uncertain payoff (this is where the earlier analysis also stalled).

**Safety frame:** nothing gets flashed without a verified plan + explicit "go ahead"; ASIL-D steering. Static PSCM analysis has reached its reasonable limit with the above; the decisive next step is the CAN log or the PAM side.

---

## 9. Update — 2+3 deep static results (2026-09-14)

**#3 DID part# hypothesis — WEAKENED:**
- The PSCM part# is stored as ASCII in the flashed image: Pre-FL app block01 `BV6T-14C217-AF`, cal `BV6T-14C218-AF`; FL `CV6T-14C217-AR` / `CV6T-14C218-AX` → **in principle patchable** (spoofing), but a VBF block checksum + possibly an internal integrity check would need to be recomputed.
- **BUT the FL PAM does NOT reference the PSCM part#:** the `F1ET-14C090` binary has no `14C217`/`CV6T`/`BV6T`/`PSCM`/`EPAS` string, no `22 F1 88` (UDS read F188) pattern, no `0x730` (PSCM diag) reference. → **no static evidence that the PAM checks the part#** → the part#-spoofing fix is likely **NOT** the solution (would be a blind patch). [PROVEN negative, for the patterns searched]

**#2 FL PAM architecture — NOT identified:**
- The FL PAM `F1ET-14C090-BG` is **NOT M32R** (`m32r_disasm.py` produces garbage on it; the IPMA is M32R, the PAM is a different arch). Cannot be eyeballed; ~487 KB stripped binary @0x780000, build `2015-09-03`. Part strings: `F1ET-15K866-BH`, `SYS_FU5T-15K866-BH_003`, `FordC346MCA MY15`. → fully reverse-engineering the PAM needs Ghidra-based arch ID + more session work, uncertain payoff.

**Consolidated verdict:** of the three suspects, **#1 (APA-mode handshake)** remains the most concrete, but **cannot be proven due to the code wall**; **#3 (part#)** is weakened; **#2 (E2E)** is not localized. **Cheap static analysis has been exhausted with the current tools.** The paths to a reliable answer/fix are: (a) a **CAN log** (decisive, read-only, no flash), (b) a large, multi-session **PAM RE** (starting with Ghidra arch ID), or (c) a **reversible test**. A static, blind patch (part# or signal-config) could target the wrong gate.

## Reproduction
- Extraction: `analysis/vbf_extract.py <vbf> --output-dir …`
- Signal-config decode/compare: `analysis/pscm_sigcfg_decode.py` + scratchpad `sigcfg_compare.py` (grouped diff)
- Absolute-address xref: scratchpad `xref_scan.py` (F07C/D07C/8654 absolute-MOVE + JSR/JMP abs)
- RX-table search: scratchpad `find_rxtable.py` (group-address cluster) → 0 hits (runtime-built)
- Calibration diff: scratchpad `cal_diff.py` → 96.3% difference
