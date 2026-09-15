# PSCM interrupt handlers — entry points and peripheral access (from the real FL binary)

Built from `CV6T-14C217-AR` block00/01 with `pscm_vectors.py` + `m56800e_disasm.py` (DSP56800E).
The vector table is identical in structure to Pre-FL (`BV6T-14C217-AF`) — same active vector indices,
relocated targets (see `PSCM_PRE_FL_CODE_COMPARE.md`). On-chip peripheral registers are memory-mapped
in X space at `0xF0xx–0xF3xx`.

## Active handlers (FL) and what memory they touch

| Vector | FL entry | Peripheral regs (X:0xF…) | RAM | Inference |
|---|---|---|---|---|
| 0/1 reset | `P:0x12BC9` | F1AA, F355 | 0x1BBD | reset/init, then main scheduler |
| 16 | `P:0x17D02` | — | 0x1988, 0x19A7, 0x19AA | RAM-only handler (SWI/soft event) |
| 17 | `P:0x12EAC` | **F143, F166, F1BD, F353, F361** | — | peripheral **A** (shared with vec20) |
| 20 | `P:0x12E83` | **F143, F166, F1BD, F353, F361** | — | peripheral **A** |
| 56 | `P:0x17CCC` | — | 0x1988, 0x19A7, 0x1BDD | RAM-only handler (shares 0x1988 with vec16) |
| 68 | `P:0x122DC` | **F283, F284** | — | peripheral **B** (shared with vec69/72) |
| 69 | `P:0x12311` | **F280, F284** | 0x1643, 0x1647, 0x164C | peripheral **B** |
| 72 | `P:0x1237F` | **F284**, (F280/F281/F283 cleared) | 0x164C | peripheral **B** |
| 78 | `P:0x040B4` | — | 0x17D3 | small RAM handler (block00) |

## Two peripheral groups, honestly labelled

- **Peripheral A** — registers `0xF143/0xF166/0xF1BD/0xF353/0xF361`, driven by **two** ISRs
  (vec17, vec20) with identical register sets. In an EPS this pattern (two tightly-coupled ISRs on one
  register block) fits the **motor-control timing group** (PWM reload / ADC current-sample), which is
  the highest-rate interrupt pair in a steering controller. [INFERENCE — not proven without the exact
  56800E device peripheral map.]
- **Peripheral B** — registers `0xF280–0xF284`, driven by **three** ISRs (vec68/69/72) that issue
  register commands (writes `#0x0020`, `#0x0055`, clears) and use a small RAM buffer `0x1643/47/4C`.
  A three-interrupt peripheral fits a **serial comms block (CAN or SCI): Rx / Tx / Error-Status**.
  [INFERENCE — a CAN message-buffer copy would use pointer/indexed addressing, which the current
  X:abs-only decode does not surface, so this cannot yet be confirmed as CAN specifically.]

## Why exact peripheral identity is still open

Naming A vs B as PWM/ADC/CAN/SCI for certain needs the **specific DSP56800E device's interrupt-vector
and peripheral-register map** (the MCU part number, not in the VBFs). The vector *indices* (16/17/20/
56/68/69/72/78) are the device's fixed interrupt assignment; with the datasheet they resolve directly.
What is proven here: the entry points, the two peripheral register groups, and that the interrupt
configuration is **unchanged Pre-FL → FL**.

## Next step toward the LaRefAng path

The CAN-RX handler only buffers frames; the `LaRefAng`/`ExtSteeringAngleReq` decode and the authority
clamp live in the **main control loop** reached from the reset handler's scheduler, reading the 14C386
signal-config. Tracing that requires broader DSP56800E instruction coverage (indexed MOVE, ALU,
bit-field) than the current decoder — the ongoing build.
