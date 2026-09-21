# PSCM LCA patch — flash-prep + recovery checklist

A printable, do-this-in-order checklist for flashing the LCA-enable patch onto **this vehicle's**
PSCM, with a proven backup and recovery path first. **Nothing here has been flashed.** This module
actuates steering: do this stationary, with a recovery path already tested, and mind type-approval /
road-legal implications. If any step fails or is unclear, **stop** — a half-written app block can leave
the car without power steering until bench-recovered.

Procedure adapted from iglooom's `PSCM_preflight.md` / `PSCM_eeprom_read_write_guide.md`
(<https://github.com/iglooom/PSCM_Firmware_Mod>). No VIN or serial numbers are recorded here.

## 0. This vehicle's identity (from the module poll)
| DID | field | value |
|-----|-------|-------|
| F188 | SW part number (app) | `CV6T-14C217-AR` |
| F124 | calibration #1 | `CV6T-14C218-AX` |
| F108 | signal config | `CV6T-14C386-AB` |
| F111 | core assembly | `BV6T-14C262-AB` |
| F113 | delivery assembly | `CV61-3C579-AS` |
| —   | bootloader (SBL) | `BV6T-14C220-AA` |
| F180 | PBL info | `KPIT-MC56F836-6.00.20.04` |

Diag address **0x730** (tester) → **0x738** (ECU), HS-CAN 500 kbit/s.

## 1. Backups — must all exist before touching the module ✅ (you have these)
- [x] Stock app VBF `CV6T-14C217-AR.VBF` (sha256 `cc68d9…`) — **this is your primary revert.**
- [x] Paired cal `CV6T-14C218-AX` + signal cfg `CV6T-14C386-AB` + boot `BV6T-14C220-AA`.
- [x] Full **As-Built** export of every module (the UCDS XMLs).
- [x] **EEPROM dump** (`0x02000000`, 0x400) — verified size + tool CRC OK.
- [ ] **Second EEPROM read** and compare: identity region `0x000..0x060` (part numbers + VIN) must be
      **byte-identical**; the volatile region (~`0x1BC..0x397`) will differ — that is normal
      (iglooom: ~152/1024 bytes vary between healthy reads). Do **not** use a whole-file diff as
      pass/fail. If the identity region matches, the read is trustworthy.
- [ ] Store **two copies offline**, on separate media. **Never** put the EEPROM/VIN on GitHub or a forum.

## 2. Preflight — confirm your tool can actually do this (no writes yet)
- [ ] **Target check:** read `F188` = `CV6T-14C217-AR` and `F124` = `CV6T-14C218-AX` (they must match §0;
      the patch is only validated for `CV6T-14C217-AR`).
- [ ] **Security access works:** `27 01` (requestSeed L1) → `27 02` (sendKey). Key derived via iglooom's
      `pscm_seckey.py` (level 0x01). A positive response = you can proceed; `NRC 0x35 invalidKey` = the
      key/seed is wrong, re-derive before anything else.
- [ ] **Decide the write path — the critical unknown:** can your tool **write a modified VBF** to the
      PSCM (custom flash), or only OEM-signed images?
      - FORScan / stock UCDS generally flash **only Ford-signed VBFs** → they can restore the stock VBF
        (good for recovery) but **cannot** write the patched VBF.
      - Writing the patched image needs a **scriptable UDS path** (iglooom's SBL + RequestDownload flow)
        or a bench BDM writer. Confirm which you have **before** committing.
- [ ] **Power:** stationary, engine off, ignition on. Battery on a **charger / stable bench supply** —
      a brown-out mid-transfer can lose the module. Solid OBD cable, nothing else drawing the bus.
- [ ] **Transport (if scripting on Linux):** `can_isotp`/`can_raw` loaded, qdisc `pfifo_fast`,
      ISO-TP TX+RX `0x00` padding, 0x730→0x738.

## 3. Generate the patched VBF (on your PC, not the car)
- [ ] Run `apply_lca_patch.py CV6T-14C217-AR.VBF CV6T-14C218-AX.VBF out_LCA_ENABLED.VBF`.
- [ ] Confirm the printout: 18 edit bytes, Word A/Word B recomputed, and (optional) that the output
      **sha256 = `24a9b235…f49999`** — iglooom's road-tested image. Matching hash = byte-perfect build.
- [ ] Keep the patched VBF and the stock VBF **side by side** on the flashing machine.

## 4. Flash (only after §1–§3 all pass)
> The concrete erase/download/verify/activate UDS routine IDs are **tool-specific** and are **not**
> published in full by iglooom's preflight doc — follow your flashing tool's / script's exact sequence.
> General order: extended session `10 03` → security `27` → erase app routine → `34` RequestDownload →
> `36` TransferData (blocks) → `37` TransferExit → verify/checksum routine → ECU reset `11 01`.
- [ ] Flash the **patched** VBF app block.
- [ ] Let the verify/checksum routine pass **before** resetting. If verify fails → go to §5.
- [ ] Reset, then read `F188`/`F124` back and clear DTCs.

## 5. Recovery (if anything goes wrong)
- [ ] **Verify failed / bad app, module still talks:** re-flash the **stock `CV6T-14C217-AR.VBF`** the
      same way. This is the normal undo.
- [ ] **Module won't boot (no valid app):** power-cycle first (SBL work is RAM-only and reverts on
      power cycle). If it still won't respond, the app block is bad → **bench recovery via BDM/JTAG**
      on the DSP56800E (MC56F8366) is required; have this path understood **before** you start.
- [ ] **EEPROM restore:** only if the EEPROM was touched — needs the same SBL + security write flow in
      reverse; the identity region must be restored byte-exact from your backup.

## 6. Post-flash validation (no LCA engagement expected while parked)
- [ ] No new PSCM DTCs; power steering feels normal at standstill.
- [ ] LCA torque only appears **driving > ~80 km/h with lane markings** — bench/closed-course first.
- [ ] The known ~3.7 s re-arm is an **IPMA/vision-DSP** behaviour (not the PSCM), see
      `../IPMA_LCA_REARM_INVESTIGATION.md` — capturing it needs a driving HS-CAN log of `0x3CA`/`0x3CB`.

---
**Bottom line:** you already hold the strongest revert (stock signed VBF + As-Built + EEPROM). The one
gating unknown before flashing is **§2: whether your tool can write a modified (non-Ford-signed) VBF** —
settle that first. Static prep only; nothing here flashes anything.
