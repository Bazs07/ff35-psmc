# PSCM (CV6T-14C217-AR) — CAN controller, RX/TX signal set, UDS diagnostics

Static reverse-engineering of the Focus Mk3.5 PSCM (EPS) application block.
CPU = **NXP DSP56800E** (16-bit program words, `P = byte/2`). Diagnostic ECU
address **0x730**, network **CAN_HS** (from `extracted/CV6T-14C217-AR.header.txt`).
App block: `pscm_fl_b01.bin`, VBF byte-base `0x1C000`. All program addresses below
are `P` (word) addresses; disassembly from `m56800e_disasm.py`.

This note builds on, and does not re-derive, the documented core:
`PSCM_ISR_MAP.md` / `pscm_fl_isr_access_map.txt` (vector→ISR), `SIGCFG_HANDLE_MAP.md`
+ `sigcfg_handle_map.txt` (14C386 signal-config), `PSCM_SIGNAL_REGION.md` (12-bit
centered decode / LaRefAng). The peripheral registers live in X: high memory
(`0xF0xx`–`0xF3xx`); RAM/signal data in low X: (`0x0xxx`–`0x1xxx`) and the CAN
message-staging region `X:0x86xx`.

Correction to the task framing: `fl_did_handler.lst` / `pre_did_handler.lst` are
**M32R** disassembly (opcodes `ld24`, `bl.l`, `r0..r11`) — that is the **IPMA
camera** DID handler, **not** the PSCM. It is therefore *not* a valid anchor for
PSCM UDS; the PSCM diagnostics below are taken from the DSP56800E binary directly.

---

## 1. CAN controller + ISR

### 1.1 Peripheral register window — X:0xF280–0xF284 [PROVEN location; module class STRONG]

A single small register window `X:0xF280–0xF284` is driven by **three** interrupt
handlers, plus configured by init/reset routines. Register touches (from the ISR
disasm and a full-binary scan for `word == 0xF28x`):

| Reg | Seen written / read | Inferred role |
|---|---|---|
| `X:0xF280` | init `#0x0000`,`#0x0034`,`#0x0001`; ISR conditional `#0x0020` | **mode/command** register |
| `X:0xF281` | init `#0x000C`,`#0x0000`; bit-set/clear (`E418/E419 F281`) throughout | **interrupt-enable / flag** register |
| `X:0xF283` | read at top of every ISR (`F07C F283` / `E41x F283`) | **status / interrupt-source** register |
| `X:0xF284` | init `#0x00FF`,`#0x0000`; ISR `#0x0055`; RX/TX data reg | **data / acceptance-mask** register (`0xFF` = accept-all) |
| `X:0xF282` | — (never referenced) | reserved / unused |

Init sequence (config routine `P:0x1240F`–`P:0x124A5`), quoted:

```
P:0x12411  8654 F280 0000    MOVE.W #0x0000,X:0xF280     ; mode := 0 (reset/idle)
P:0x12414  8654 F283 0000    MOVE.W #0x0000,X:0xF283     ; clear status
P:0x12470  8654 F280 0034    MOVE.W #0x0034,X:0xF280     ; mode := 0x34 (config/normal)
P:0x12473  8654 F284 0000    MOVE.W #0x0000,X:0xF284
P:0x1249A  8654 F280 0001    MOVE.W #0x0001,X:0xF280     ; enable
P:0x1249D  8654 F284 00FF    MOVE.W #0x00FF,X:0xF284     ; acceptance mask = 0xFF
P:0x124A0  8654 F281 000C    MOVE.W #0x000C,X:0xF281     ; interrupt-enable bits
```

The `mode → mask(0xFF) → interrupt-enable` ordering, an accept-all mask register,
a status register polled at ISR entry, and the three-way Rx/Tx/Status interrupt
split (below) are the signature of an **on-chip CAN/serial message controller**.
It cannot be pinned to a specific NXP module name (FlexCAN vs msCAN vs a windowed
SCI-CAN) **without the exact MC56F8xxx part number**, which is not in the VBFs —
this remains as noted in `PSCM_ISR_MAP.md`. The message-config engine (14C386,
below) routing into `X:0x86xx` and the diagnostic use of address 0x730 make
**CAN** by far the most consistent reading. [Module identity = STRONG, not proven.]

A second register group, `X:0xF014/F015/F016` and `X:0xF114/F115`, is bit-set/
cleared next to every F28x access (`E418 F281 0000 F014` … `8350 0040` … `D014`).
These are the **interrupt-controller (INTC) enable/pending** registers, gating the
CAN vectors — not part of the CAN block itself.

### 1.2 The three CAN ISRs [PROVEN entries; roles STRONG]

From `pscm_fl_isr_access_map.txt` + disasm. All three share the register window and
a common RAM control block `X:0x163B / 0x1642 / 0x1643 / 0x1647 / 0x164C` and the
message-data staging region `X:0x86xx`.

| Vector | Entry `P` | Behaviour (quoted) | Role |
|---|---|---|---|
| **68** | `0x122DC` | reads `X:0xF283` (status), writes `X:0xF284`; sets `X:0xF281` bit via `#0xFF7F`; no message copy | **Status / error / wake** IRQ |
| **69** | `0x12311` | `MOVE X:0xF283`; on match writes cmd `#0x0020→F280`, `#0x0055→F284`; **copies received bytes** `X:0xF284 → X:0x8642…` via indexed loop (`E680 1647`, ptr `#0x1642`); sets flag `X:0x8640` | **Receive** IRQ (RX buffer → staging) |
| **72** | `0x1237F` | `MOVE X:0xF283`; reads `X:0xF284→X:0x8641`; drains staging (`#0xAFF2`, `X:0x164C` index); clears enable bit `#0xFFDF→F281` | **Transmit** IRQ (staging → TX buffer) |

vec69 RX copy, quoted:
```
P:0x12345  F07C 1643    MOVE.W X:0x1643,reg5:0      ; RX FIFO occupancy / msg present
P:0x12349  F07C F284    MOVE.W X:0xF284,reg5:0      ; read data register
P:0x1234B  8642 ...                                 ; -> staging X:0x8642
P:0x1234E  874A 1642    MOVE.W #0x1642,reg5:10       ; staging pointer base
P:0x12356  E418 F281 0000 F114                        ; ack/clear RX interrupt
```

**ISR/poll:** the module is fully **interrupt-driven** (vectors 68/69/72, RTI-terminated);
there is no CAN polling loop. Frame reception lands in `X:0x86xx` staging, from where
the 14C386 signal-config engine unpacks fields (§2). Message **length** and **index**
live in `X:0x163B`/`0x164C`; `X:0x1643`/`0x1647` are FIFO/mailbox status shadows.

---

## 2. RX signal set

### 2.1 How RX signals are unpacked (14C386 engine) [PROVEN mechanism]

The PSCM does **not** hard-code per-signal RX in C-style handlers. A table of
**10-byte descriptors** in `14C386` (`CV6T-14C386-AB`) drives a generic extractor
(documented: engine "14C386", `SIGCFG_HANDLE_MAP.md`). Each descriptor:
`h0` (source byte handle) + `h1` (validity handle) → `shift`/`mask` → into a signal
**bank** (`group_word`) under a one-hot `ctl` selector. The RX banks and their field
counts (from `sigcfg_handle_map.txt`, FL):

| Bank | Fields | Character |
|---|---|---|
| `7F74` | 19 | mixed status/enable bits + a byte value; **FL added** one 3-bit field on `h0=7EB9` (mask 0x70) |
| `7F75` | 18 | **the FL-reworked receive bank** (5-bit field retired; 2-bit `7ECC` + 3-bit `7EEB` added; all handles renumbered −0x08). APA-mode / park candidate |
| `7F79` | 3 | whole-byte pass-through signals (mask 0x00 = full byte) |
| `7F7D` | 30 | the largest RX bank — many multi-bit status/mode fields |
| `7F81` | 1 | single whole-byte signal |
| `7F6C` | 1 | single control word |

Bank `7F8A` (13 members, handles `0x86xx`) is the **transmit** side (§3): its `h0`
are `X:0x86xx` staging addresses, not `0x7Exx` source handles.

**Signal names / CAN IDs are UNRESOLVED at the descriptor level.** The descriptors
carry numeric handles, not names, and the *handle → CAN-message/byte* binding lives
in a separate RX message table in the application, not in 14C386 (as
`SIGCFG_HANDLE_MAP.md` already states). The reference DBC
`references/ford_cgea1_2_ptcan_2011.dbc` is a **git-LFS pointer only (3 lines, not
materialised)**, so no CAN ID or signal name could be mined from it. **No CAN ID is
asserted anywhere in this document.**

### 2.2 The 12-bit centered lane-assist signals [PROVEN structure]

The centered-field decode (2048-centre, documented in `PSCM_SIGNAL_REGION.md`) sits
at `P:0x12C80`–`P:0x12CDF`. It processes **three distinct signal handles**, each
twice (value pass + a second guarded pass), quoted:

```
P:0x12C83  8745 37C9   MOVE.W #0x37C9,reg5:5   ; handle A
P:0x12C85  8747 0800   MOVE.W #0x0800,reg5:7   ; +2048 centre offset
P:0x12C87  E418 F800 0004                      ; unpack helper
   ... (guarded second pass on 0x37C9 at P:0x12C94) ...
P:0x12CAA  8745 18F5   MOVE.W #0x18F5,reg5:5   ; handle B
P:0x12CAC  8747 0800   MOVE.W #0x0800,reg5:7
   ... (second pass on 0x18F5 at P:0x12CB8) ...
P:0x12CCB  8745 E70A   MOVE.W #0xE70A,reg5:5   ; handle C
P:0x12CCD  8747 0800   MOVE.W #0x0800,reg5:7
   ... (second pass on 0xE70A at P:0x12CD9) ...
```

So the lane band decodes **three** centered 12-bit signals: handles **0x37C9,
0x18F5, 0xE70A**. `LaRefAng` is one of them (`PSCM_SIGNAL_REGION.md`: `(raw−2048)`,
0.05 mrad/bit). The other two are candidates for `LaCurvature` and/or a second lane
correction. **Which handle is which name is UNRESOLVED** (no handle→name table).

### 2.3 LKA vs LCA correction — one signal or two? [PARTIAL — see Unresolved]

Re: the external claim that the IPMA sends a separate LKA correction **and** an LCA
(lane-centering) correction, and the PSCM receives the LCA one "all the time" but
never applies it:

- Evidence **for more than one** received steering-correction field: the 2.2 cluster
  has **three** distinct centered 12-bit handles, not one. If two of these are
  separate corrections (e.g. an LKA "reference angle" and an LCA "curvature/offset
  correction"), that matches the "two corrections received" claim.
- Evidence on **consume vs dead**: all three handles go through the **identical**
  decode (2048 offset + the `8F07`/`Bne` range-guard loop at `P:0x12C92`,`0x12CA8`,
  `0x12CB6`…). None is written-and-then-ignored *at the unpack stage* — they are all
  produced. Whether a given decoded value is subsequently **read by the steering
  control loop** (Peripheral A motor-control group, vec17/vec20 at `P:0x12E83/EAC`)
  or is a dead RAM cell cannot be proven with the current disassembler, which does
  **not decode indexed MOVEs / byte-ALU** — the exact RAM destinations and their
  downstream reads are not surfaced. Proving a *dead* signal (a negative) needs the
  full control-loop read-map, which exceeds this toolchain.
- What is already established (`PSCM_SIGNAL_REGION.md`, DECISIVE): the 12-bit lane
  decode loop is **~99% identical Pre-FL↔FL**, and the only 14C386 delta is in the
  APA/park bank `7F75`, not the lane band. So if an LCA field is received-but-unapplied,
  that condition is **the same in the Pre-FL (LCA-working) and FL (LCA-broken)
  binaries** — i.e. it is not itself the FL differentiator. This is consistent with
  the standing conclusion that the break is on the **IPMA send side**, and defers the
  definitive per-field apply/no-apply verdict to the apply-path (safety) trace.

### 2.4 Vehicle speed [UNRESOLVED name; mechanism located]

A speed-dependent assist curve requires a received road-speed signal. It is received
through the same 14C386 mechanism (§2.1) — most plausibly a whole-byte or multi-byte
field in bank `7F7D` (the large status/value RX bank) or `7F79`/`7F81` (whole-byte
pass-throughs). **The specific handle for vehicle speed is UNRESOLVED** (no
handle→name binding, DBC absent). No speed-scaling literal (e.g. Ford 1/128 km/h or
0.01 km/h) could be tied to a decode site with the current byte-ALU-blind decoder;
the `10000`/`1000`-scaled band (`P:0x22xxx`/`0x27xxx`, per `PSCM_SIGNAL_REGION.md`)
is the place to resume that search. Yaw/ABS and ignition/mode signals are likewise
present as bank fields but not name-bound here.

---

## 3. TX signal set

### 3.1 Transmit path [PROVEN mechanism]

The PSCM transmits via 14C386 bank **`7F8A`** (13 fields), whose `h0` values are the
**`X:0x86xx` staging addresses** written by the control loop and drained by the TX
ISR (vec72, `P:0x1237F`). vec72 quoted:

```
P:0x12393  F07C F284   MOVE.W X:0xF284,reg5:0
P:0x12395  8641 ...                              ; from staging X:0x8641
P:0x123AE  8749 AFF2   MOVE.W #0xAFF2,reg5:9      ; TX drain marker
P:0x123BA  8740 FFDF   MOVE.W #0xFFDF,reg5:0      ; clear TX interrupt-enable bit
```

The 13 TX fields map to the standard EPS transmit content — **steering-wheel angle /
angle status, EPS operating status / fault status, and steering torque / motor
current** — but, as with RX, the descriptors carry only handles, so the **exact
field→name and the transmit CAN ID(s) are UNRESOLVED** (app TX message table + DBC
required; DBC not materialised). The whole binary was scanned for 11-bit-ID-shaped
immediates; the only 0x7xx literals found (`0x0735`,`0x0736`,`0x0738`) are **X-memory
addresses** (a DTC/monitor value table at `X:0x56xx`, region `P:0x138F0–0x139F9`),
**not CAN-ID constants** — so no TX ID is asserted.

### 3.2 FL vs Pre-FL TX change [PROVEN, from prior work]

All 13 `7F8A` handles relocated by a uniform **+0x14** (`8608→861C` … `862E→8642`) =
exactly the +20 bytes of the two inserted RX descriptors. The transmit **content is
unchanged** Pre-FL→FL; only table offsets moved (`SIGCFG_HANDLE_MAP.md`).

---

## 4. UDS diagnostics, DIDs, and As-Built enable bits

### 4.1 Service dispatcher [PARTIAL]

The PSCM is a UDS server at ECU address **0x730** on CAN_HS (header, proven). Requests
arrive through the CAN RX ISR (§1.2) into the `X:0x86xx` staging buffer and are parsed
by a session/service layer. The diagnostic/monitor evaluation region is
`P:0x138F0–0x13E00`; it repeatedly reads a monitor-threshold table `X:0x56BE/56CE/56D2/
56DA/56DE`, guards on session/state cells `X:0x17AB/0x17B1`, and calls a recurring
helper `JSR P:0x18A87` (per-DID read/format) and NVM/coding accessors
`JSR P:0x001C3 / 0x00251 / 0x001DA` (block00 flash/EEPROM routines) — see 4.3.

**The full service-ID switch table (0x10/0x22/0x27/0x2E/0x31/0x19/0x11/0x3E/0x14/…)
is UNRESOLVED.** UDS service IDs are single bytes compared with byte-ALU instructions
(`CMPU`/`byte MOVE`) that the focused disassembler emits as `.word`, so the dispatch
compares are not decoded. Enumerating the service set rigorously needs byte-compare
and indexed-move coverage added to `m56800e_disasm.py`. **No service or DID number is
invented here.** What is proven: a UDS server exists, is reached from the CAN RX path,
uses session/state gating (`X:0x17AB/0x17B1`), and has a per-DID read helper
(`P:0x18A87`) and NVM-coding read/write path (`P:0x001C3/0x00251/0x001DA`).

### 4.2 SecurityAccess / RoutineControl [UNRESOLVED]

Not individually located. The call graph out of the diagnostic region includes
`JSR 0x0FACE`, `0x1C319`, `0x1815B`, `0x1080A`, `0x13B32`, `0x13C74`, `0x13D02`,
`0x13CBE`, `0x13D13` — candidate service handlers (seed/key, routine, read/write), but
none is confirmed as SecurityAccess or RoutineControl without byte-level decode. Marked
UNRESOLVED rather than guessed.

### 4.3 As-Built / coding parameters (ADAS enable bits) [MECHANISM located; bits UNRESOLVED]

Coding/As-Built is read through block00 NVM accessors `P:0x001C3` (read), `P:0x00251`,
`P:0x001DA`, invoked in two back-to-back blocks at `P:0x13C7C–0x13C99` and
`P:0x13CC6–0x13CE3` inside the diagnostic region — i.e. two As-Built records read and
formatted for a diagnostic response. The **APA-mode / park-assist enable bits** the
FL firmware reworked live in **14C386 bank `7F75`** (§2.1): the FL delta is exactly
here (a 5-bit field retired; 2-bit `h0=7ECC` and 3-bit `h0=7EEB` added; selectors
shifted), which `SIGCFG_HANDLE_MAP.md` already flags as the **APA/perpendicular-park
re-layout** and the LCA-relevant coding candidate. The concrete bit that enables
LCA/park-assist could not be name-bound to a specific As-Built byte/offset here —
that binding requires the handle→As-Built map (not in 14C386) plus byte-ALU decode.
**No enable-bit value is asserted.** The strongest evidenced statement: the only
FL-vs-PreFL coding-layer change is in bank `7F75`, the APA/park bank — consistent with
the perpendicular-park interpretation and **not** a lane-assist coding change.

---

## 5. Unresolved (explicit)

1. **CAN module identity** — F280–F284 is a CAN/serial controller (STRONG); exact NXP
   module (FlexCAN/msCAN/windowed) needs the MC56F8xxx part number, absent from VBFs.
2. **All CAN IDs (RX and TX, and the diagnostic request/response IDs)** — the app
   RX/TX message→handle table is not in 14C386, and `ford_cgea1_2_ptcan_2011.dbc` is an
   un-materialised git-LFS pointer. No CAN ID is stated in this document.
3. **RX signal names** — handles (`0x37C9`,`0x18F5`,`0xE70A`, bank source handles
   `0x7Exx/0x7Fxx`) are numeric; no handle→name table present. Vehicle speed, yaw/ABS,
   ignition/mode, ExtSteeringAngleReq/EPAS-mode located only as bank fields, not named.
4. **RX-field → consumer proof (LKA vs LCA "received but not applied")** — three
   centered lane handles are all *decoded*; whether each decoded value is *read by the
   control loop* or is a dead cell needs indexed-MOVE / byte-ALU decode not in the
   current tool. Deferred to the apply-path (safety) trace.
5. **UDS service/DID/RoutineControl/SecurityAccess enumeration** — dispatcher located
   (`P:0x138F0–0x13E00`, per-DID helper `P:0x18A87`, NVM path `P:0x001C3/00251/01DA`) but
   the byte-level service switch is emitted as `.word`; needs byte-compare decode.
6. **ADAS/park As-Built enable bit** — mechanism (bank `7F75` + block00 NVM accessors)
   located; the specific enable byte/bit is not name-bound.

---

## Summary

- **CAN peripheral:** on-chip CAN controller at **X:0xF280–0xF284** (F280 mode/cmd,
  F281 int-enable, F283 status, F284 data/mask=0xFF), gated by INTC regs `X:0xF014/
  F015/F114`, init at `P:0x1240F–0x124A5`. Fully interrupt-driven by **three ISRs**:
  vec68 status/error (`P:0x122DC`), **vec69 receive** (`P:0x12311`, copies frame →
  staging `X:0x86xx`), **vec72 transmit** (`P:0x1237F`). No poll loop.
- **RX signals:** unpacked by the 14C386 descriptor engine into banks `7F74/7F75/7F79/
  7F7D/7F81/7F6C`. Lane band decodes **three** centered 12-bit handles (`0x37C9`,
  `0x18F5`, `0xE70A`) at `P:0x12C83+`, one of which is LaRefAng. Vehicle speed is a
  14C386 field (bank `7F7D`/`7F79` most likely) — **handle not name-bound**.
- **TX signals:** bank `7F8A` (13 fields → `X:0x86xx` staging, drained by vec72) —
  the EPS angle/status/torque set; content unchanged FL vs Pre-FL (uniform +0x14
  offset shift only). **No TX CAN ID recoverable** (DBC absent).
- **UDS:** server at ECU 0x730; dispatcher/monitor region `P:0x138F0–0x13E00`,
  per-DID helper `P:0x18A87`, As-Built/NVM accessors `P:0x001C3/0x00251/0x001DA`. The
  service/DID list itself is **UNRESOLVED** (byte-ALU not decoded) — nothing invented.
- **ADAS enable coding:** the sole FL-vs-PreFL coding change is 14C386 bank **`7F75`**
  (APA/perpendicular-park re-layout: −1 5-bit field, +2 fields, selectors shifted),
  read via the block00 NVM path — an **APA/park-assist** coding change, not a lane
  change. The concrete LCA/park enable bit is not name-bound. No CAN ID or DID is
  asserted anywhere in this document; every such binding is marked UNRESOLVED.
