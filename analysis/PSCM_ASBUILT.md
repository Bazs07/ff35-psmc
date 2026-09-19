# PSCM (CV6T-14C217-AR) — As-Built / coding mechanism, config store, and the lane-apply gating verdict

Static reverse-engineering only. Owner's own vehicle, nothing flashed. Target =
NXP/Freescale **DSP56800E** (16-bit program words, `P = VBF_byte/2`). Diagnostic ECU
address **0x730** on CAN_HS. Program addresses are `P` (word) addresses; all disassembly
quoted from `m56800e_disasm.py`.

Files:
- FL app block01 `pscm_fl_b01.bin` (byte-base `0x1C000`, program base `P:0xE000`)
- FL block00 `pscm_fl_b00.bin` (byte-base `0x0`) — holds the flash/EEE driver primitives
- Pre-FL block01 `pscm_pre.block01.0x0001C000.bin` (byte-base `0x1C000`)

This note builds on and does not re-derive: `PSCM_CAN_DIAG.md` (UDS surface, ISRs,
14C386 signal engine), `PSCM_SAFETY_MONITORING.md` (clamps, cal-resident thresholds,
LaRefAng decode at `P:0x12C85`), `SIGCFG_HANDLE_MAP.md` (14C386 bank re-layout),
`PSCM_PRE_FL_CODE_COMPARE.md`. It mirrors the IPMA work in `../ff35-ipma/IPMA_DIAG_CONFIG.md`.

**Decoder caveat (load-bearing).** `m56800e_disasm.py` decodes control-flow, X:absolute
MOVEs (`F07C/F17C/D07C/D17D/8654`), some bit-ops and `CMP` forms, but **not** indexed MOVEs
(`0x7xxx`, `0xE68x/E48x`) nor byte-ALU. UDS single-byte SID compares and the EEE record
descriptors therefore appear as `.word` and are inferred structurally, not decoded. Every
such inference is labelled.

---

## 1. UDS coding services

### 1.1 What is decodable

The PSCM is a UDS server at ECU **0x730** (header, proven in `PSCM_CAN_DIAG.md`). Requests
arrive via the CAN RX ISR (vec69, `P:0x12311`) into staging `X:0x86xx` and are parsed by a
session/service layer whose **diagnostic/format region is `P:0x138F0–0x13E10`**. The call
graph out of that region (`--calls-only`, quoted) is:

```
P:0x13C02  E255 C319   JSR P:0x1C319     ; candidate service handler
P:0x13C41  E255 815B   JSR P:0x1815B     ; candidate service handler
P:0x13C6A  E254 FACE   JSR P:0x0FACE     ; error/DTC latch (see below)
P:0x13C7C  E254 01C3   JSR P:0x001C3     ; EEE parameter READ  (block00)
P:0x13C84  E254 0251   JSR P:0x00251     ; EEE parameter SELECT/prep (block00)
P:0x13C99  E254 01DA   JSR P:0x001DA     ; EEE parameter COMMIT/close (block00)
P:0x13DDA  E255 080A   JSR P:0x1080A
P:0x13DF3  E254 01B1   JSR P:0x001B1
P:0x13E0D  E254 40D2   JSR P:0x040D2
... plus JSR P:0x18A87 ×7 (per-DID read/format helper)
... plus JSR P:0x17BE7 ×N (format a value into the diagnostic response buffer)
```

`JSR P:0x0FACE` is the **fault/DTC latch** (called with a numeric code in reg5:5 and a
handle in reg5:10, e.g. `P:0x15A95 MOVE #0x007A,reg5:5 / JSR 0x0FACE` and `P:0x13C68 MOVE
#0x00FB,reg5:5 / JSR 0x0FACE`), guarded by a "already-latched" flag (`MOVE X:0x17BA` /
`MOVE X:0x1904` before the call). It is the monitoring-error setter, not a UDS service.

**`P:0x18A87` = the per-DID read/format helper** (7 call sites in the diag region), and
**`P:0x17BE7` = the response-buffer field writer** (called with source value in reg5:10 and
scratch-buffer pointers `#0x0665/0x0669/0x066D/0x0671/0x0675` in reg5:11/12 —
`P:0x13AE8–0x13B00`). These are ReadDataByIdentifier plumbing.

### 1.2 What is UNRESOLVED

The **single-byte SID switch** (0x10/0x22/0x27/0x2E/0x31/0x19/0x3E…) is compiled as
byte-ALU compares the focused decoder emits as `.word`; the top-level service switch table
could not be dumped. `P:0x1C319` and `P:0x1815B` are the structurally-placed service
handlers (reached at the head of the diag region before the EEE read) but **cannot be
individually named** 0x2E-WriteDataByIdentifier vs 0x31-RoutineControl without byte-compare
decode. **No SID or DID number is asserted.** Session/state gating uses cells
`X:0x17AB`/`X:0x17B1` (12 references in block01, per prior work) — the session-state guard —
but the level encoding is not decoded.

This is a real difference from the IPMA (M32R), where the DID table `0xDA238` and its
`{DID,len,mask,handler}` layout **were** fully recovered. On the PSCM the equivalent table
is byte-indexed and not decodable with this tool. **UNRESOLVED, not invented.**

---

## 2. As-Built / config store

### 2.1 Storage mechanism = D-flash EEE, per-parameter (not a single flat image)

Unlike the IPMA (one 25-byte config image at RAM `0x82D8F3` with a 279-entry param
descriptor table), the **PSCM persists configuration as individually-addressed EEE
(EEPROM-emulation) parameters** through three block00 primitives:

| Primitive | `P` | Role (inferred from usage idiom) |
|---|---|---|
| `0x001C3` | block00 `P:0x001C3` | **READ** a parameter from D-flash into working RAM |
| `0x00251` | block00 `P:0x00251` | **SELECT / prepare** (record id / erase-prep) |
| `0x001DA` | block00 `P:0x001DA` | **COMMIT / writeback / close** |

These are **generic NVM accessors, not As-Built-specific**: a `--calls-only` scan finds them
called **hundreds of times** across the whole app (e.g. `P:0x1A0xx`, `P:0x20Axx`,
`P:0x27xxx`, `P:0x28xxx` clusters), i.e. every calibration/NVM parameter fetch goes through
them. Their bodies (block00 `P:0x001C3–0x002BF`, quoted) are dominated by byte-ALU / indexed
moves plus a flash-timing idiom — a 16× repeated `781F`, a `SUB #0x0001` down-counter
(`P:0x001FA 5443 0001`), a command constant `MOVE #0x2000,reg5:0`
(`P:0x001E7/0x0025B/0x001E7`), and pointer setup `E481/E482/E483/E484` — the signature of a
D-flash controller sequence. Exact flash-controller register addresses are **UNRESOLVED**
(56F8xxx device part number absent from the VBFs, same blocker as COP in
`PSCM_SAFETY_MONITORING.md`).

### 2.2 The config working-copy RAM band and its diagnostic read/format path

The configuration parameters, once read, live in a **contiguous low-X working-copy band**.
In FL that band is **`X:0x0640–0x0660`**. The decoded reads of it (block01) are:

| Cell | Read at `P:` | Consumer context |
|---|---|---|
| `X:0x0640` | `0x164AD` | functional |
| `X:0x0641` | `0x1FAE8` | functional |
| `X:0x0643` | `0x1FA90` | functional |
| `X:0x0647` | `0x13CCA` | diag format twin B → monitor limit |
| `X:0x0648` | `0x13C80` | diag format twin A → monitor limit |
| `X:0x0649` | `0x13D92` | diag format |
| `X:0x064A` | `0x13D52` | diag format |
| `X:0x064B` | `0x13CD5` | diag format twin B |
| `X:0x064C` | `0x13C8E` | diag format twin A |
| `X:0x064D/064E` | `0x13A13/0x13A1B` | diag format |
| `X:0x0650/0651` | `0x13B20/0x13B24`, `0x1B8C4`, `0x2D53D/0x2D540` | **variant/tune** (see §4) |
| `X:0x0652/0653` | `0x2D725/0x2D6F4` | functional variant |
| `X:0x0654` | `0x133EC` | functional variant |
| `X:0x065A–065F` | `0x15AA5/0x15ABD`… | live values compared vs monitor limits |

**The two twin diagnostic-format routines** are the As-Built read/format anchors:

```
; --- twin A : P:0x13C74 ---
P:0x13C74  827B ...                     ; prologue (save regs)
P:0x13C77  E411 CCCD CCCC               ; load 0.8 Q31 scale const (0xCCCCCCCD)
P:0x13C7C  E254 01C3    JSR P:0x001C3   ; EEE read
P:0x13C80  F17C 0648    MOVE.W X:0x0648,reg5:2   ; config param -> scale
P:0x13C84  E254 0251    JSR P:0x00251   ; EEE select
P:0x13C8E  F17C 064C    MOVE.W X:0x064C,reg5:2
P:0x13C92  E401 0032                    ; compare/limit vs #0x0032 (50)
P:0x13C99  E254 01DA    JSR P:0x001DA   ; EEE commit
P:0x13CA8  8748 17C0    MOVE.W #0x17C0,reg5:8    ; dest RAM shadow 0x17C0
P:0x13CAF  8748 17C4    MOVE.W #0x17C4,reg5:8    ; dest RAM shadow 0x17C4
P:0x13CB2  5C43 7530                    ; clamp vs #0x7530 (30000)
P:0x13CBD  E708         RTS
; --- twin B : P:0x13CBE ---  (identical shape, reads X:0x0647/0x064B, dest 0x17Cx)
```

So the As-Built handling is: **EEE-read a parameter → scale by 0.8 (Q31 const `0xCCCCCCCD`)
→ clamp to `[50, 30000]` (`#0x0032`, `#0x7530`) → store a derived limit into the RAM shadow
band `X:0x17C0–0x17CD`.** The scaled/clamped shadow (`0x17CA/17CB/17CC/17CD/17C0/17C2/17C4`)
is the value the rest of the firmware consumes, exactly mirroring the IPMA "parsed config"
indirection (IPMA `0x8904C` accessor off struct base `0x82D768`).

The raw response-formatting (writing these back out for a UDS read via `P:0x17BE7` into
scratch `0x0665/0669/066D/0671/0675`) sits at `P:0x13AE8–0x13B05`, quoted:
```
P:0x13AEF  F57C 17CA   MOVE.W X:0x17CA,reg5:10   ; monitor-limit value -> response
P:0x13AFA  F57C 17CB   MOVE.W X:0x17CB,reg5:10
```

### 2.3 Config parameter map (as decodable)

| RAM (FL) | Kind | Evidence | Notes |
|---|---|---|---|
| `X:0x0640/0641/0643` | functional cal | read `0x164AD/0x1FAE8/0x1FA90` | not lane, not diag-formatted |
| `X:0x0647,0648,064B,064C` | monitor-limit source | twins `0x13C74/0x13CBE` | → `X:0x17C0/17C4/17CA/17CB` after ×0.8, clamp[50,30000] |
| `X:0x0649,064A,064D,064E` | monitor-limit source | `0x13D92/0x13D52/0x13A13/0x13A1B` | second/third limit pair → `X:0x17CC/17CD` |
| `X:0x0650,0651` | **variant/tune selector** | `0x2D53D+0x2D540` read as a pair, `ADD #0x4000`, compared | §4 |
| `X:0x0652,0653,0654` | variant/tune | `0x2D725/0x2D6F4/0x133EC` | §4 |
| `X:0x065A–065F` | live monitored values | `0x15AA5/0x15ABD` | compared vs `0x17Cx` limits |

Parameter **IDs / lengths / an EEE descriptor table** could not be dumped (byte-ALU); the
map above is by RAM cell and consumer, which is the strongest evidence this tool yields.

---

## 3. Config → feature gating on the PSCM (THE KEY TASK)

### 3.1 The lane-apply path reads no config cell

The 12-bit centered lane decode (the `LaRefAng` class) is the table-driven loop at
`P:0x12C83–0x12CDF`, processing the three signal handles `0x37C9 / 0x18F5 / 0xE70A` with the
`#0x0800` (2048) centre offset. A grep of that whole band for any `X:0x064x`, `X:0x065x` or
`X:0x17Cx` reference returns **nothing** — only the handles and the centre constant appear:

```
P:0x12C83  8745 37C9   MOVE.W #0x37C9,reg5:5    ; handle
P:0x12C85  8747 0800   MOVE.W #0x0800,reg5:7    ; 2048 centre
P:0x12CAA  8745 18F5   MOVE.W #0x18F5,reg5:5
P:0x12CCB  8745 E70A   MOVE.W #0xE70A,reg5:5
;   (no 0x064x / 0x065x / 0x17Cx anywhere in 0x12C60-0x12CF0)
```

The config working-copy band `X:0x064x` and its derived shadow `X:0x17Cx` are referenced
**only** in (a) the diagnostic read/format region `P:0x133xx–0x13Dxx`, (b) the plausibility
monitor `P:0x15AA3+`, and (c) scattered functional tune sites (`0x1B8C4`, `0x1FA90`,
`0x2D53x`) — **none inside the lane decode `0x12Cxx` or the motor-control assist ISR
`0x12E83/0x12EAC`.**

### 3.2 Where the config *does* go: the plausibility/DTC monitor

The config-derived shadow limits feed a **monitoring compare**, not an enable gate. At
`P:0x15AA3` (quoted):
```
P:0x15AA3  F17C 17CA   MOVE.W X:0x17CA,reg5:2    ; config-derived LIMIT
P:0x15AA5  F07C 065C   MOVE.W X:0x065C,reg5:0    ; live measured value
P:0x15AA7  7816                                  ; compare
P:0x15AA8  A40C        Bge P:0x15AB5             ; in range -> skip
P:0x15AB0  E254 FACE   JSR P:0x0FACE             ; out of range -> latch DTC (code #0x7B)
```
i.e. the As-Built parameter sets a **tolerance/limit against which a live signal is checked,
raising a fault if exceeded** — the calibration-resident threshold pattern already documented
in `PSCM_SAFETY_MONITORING.md` §3. It gates *fault latching*, never lane acceptance.

### 3.3 VERDICT

**The PSCM has NO As-Built / coding item that gates lane-assist apply.** The received-steering
path is:
- `LaRefAng` (and the two sibling 12-bit lane handles) are decoded by `P:0x12C85` reading
  **only the CAN signal + the fixed 2048 centre offset**; no coding byte participates
  (§3.1). This matches the `PSCM_SAFETY_MONITORING.md` §4 "no separate PSCM magnitude clamp"
  result — the acceptance/clamp of the lane request is field-width + cal, not coding.
- No config cell is read by the assist-mix / motor-control consumer band either.
- Every decoded consumer of the As-Built band feeds **monitoring limits / fault latches
  (`0x0FACE`)** or **steering-tune/variant parameters** (§4), not a LaRefAng accept-enable.

There is **no coding bit** that enables/disables LKA/LCA acceptance on the PSCM side. This
is the PSCM analogue of the IPMA finding: on the IPMA the coding bit only sets availability
in a shared LKA channel (no distinct LCA algorithm); on the PSCM the lane request is honoured
by the receive/decode path with no coding predicate at all. **If lane-centering is broken FL
vs Pre-FL, it is not because a PSCM coding item gates the apply** — the PSCM apply path is
coding-independent and (per prior work) ~99% identical Pre-FL↔FL. [PROVEN negative to the
decode depth of this tool; the only residual is the byte-ALU-blind indexed reads, which
would have to alias into `0x12Cxx`/assist-ISR to overturn this, and none of the decoded
control flow routes config there.]

---

## 4. Variant / feature coding the PSCM reads

Genuine functional (non-diagnostic) config reads, all **away from the lane path**:

- **`X:0x0650`/`X:0x0651` — a paired variant/tune selector.** At `P:0x2D53D`:
  ```
  P:0x2D53D  F07C 0650   MOVE.W X:0x0650,reg5:0
  P:0x2D540  F07C 0651   MOVE.W X:0x0651,reg5:0
  P:0x2D542  4440 4000               ; ADD #0x4000 (bias) then combine (4C30)
  ```
  read as a 2-word pair, biased and combined — the shape of a **steering-ratio / assist-tune
  variant word** consumed in the `0x2Dxxx` control region. Also read at `P:0x13B20/0x13B24`
  (diagnostic echo) and `P:0x1B8C4`.
- **`X:0x0652/0653/0654`** — read at `P:0x2D725/0x2D6F4/0x133EC`; further tune/variant
  parameters in the same control and gain-scheduling region (`P:0x133EC` sits in a routine
  that also touches `X:0x49DB` and applies a `Bge`/limit).
- **`X:0x0640/0641/0643`** — read at `P:0x164AD/0x1FAE8/0x1FA90` (init and a `0x1Fxxx`
  control routine).

**What each switches is UNRESOLVED at the engineering-unit level** (the arithmetic is
byte-ALU/indexed, and the scaling is calibration-resident in `CV6T-14C218-AX`). Structurally
they are **EPS steering-tune / assist-level / ratio variant** parameters, i.e. the per-vehicle
tune coding — **not** an ADAS/lane feature-enable. No `ADAS-present` or `lane-feature-enable`
coding read could be tied to the lane path (consistent with §3: the lane path has no coding
predicate).

---

## 5. Pre-FL vs FL coding surface

### 5.1 The config working-copy band relocated; the mechanism is identical

The Pre-FL twin diagnostic-format routine is at **`P:0x12AC7`/`P:0x12B11`** (vs FL
`P:0x13C74`/`P:0x13CBE`) and reads its config from **`X:0x01A5/0x01A6/0x01A9/0x01AA`**:
```
; PRE-FL twin
P:0x12AC7  E254 01C3   JSR P:0x001C3
P:0x12ACB  F17C 01A6   MOVE.W X:0x01A6,reg5:2
P:0x12AD9  F17C 01AA   MOVE.W X:0x01AA,reg5:2
P:0x12AE4  E254 01DA   JSR P:0x001DA
P:0x12B15  F17C 01A5   MOVE.W X:0x01A5,reg5:2
P:0x12B20  F07C 01A9   MOVE.W X:0x01A9,reg5:0
```
vs FL `X:0x0647/0x0648/0x064B/0x064C`. **Same three EEE primitives (`0x001C3/0x00251/
0x001DA`), same read→scale→clamp→shadow idiom.** The config working copy moved from the
`X:0x01Ax` band (Pre-FL) to the `X:0x064x` band (FL) — a RAM re-layout consistent with the
FL enlarging the data segment, not a new coding gate. (Note: `0x001C3/0251/01DA` are at the
*same* block00 `P` addresses in both images.)

### 5.2 Byte-level delta

- **No new lane-gating coding parameter appears in FL.** The FL config band is larger and
  relocated, but every added/moved cell resolves to a **monitor limit or a steering-tune
  variant** (§2.3, §4), none read by the lane decode or assist ISR.
- This is the PSCM analogue of the IPMA group-`0x2B` question: on the IPMA, FL *appended*
  three new As-Built params (`0x11C/0x11D/0x11E`) in the ADAS-precondition group. On the
  **PSCM there is no corresponding new ADAS/lane coding parameter** — the delta is a RAM-map
  shift plus tune-parameter growth, and the lane path is coding-free in both images.
- Cross-refs already established: the lane decode loop is ~99% identical Pre-FL↔FL
  (`PSCM_SIGNAL_REGION.md`), and the only 14C386 signal-config delta is bank `7F75` (APA/
  perpendicular-park re-layout, `SIGCFG_HANDLE_MAP.md`), **not** the lane band. So the FL
  coding surface change is APA/park + tune-map growth, **not** a lane-assist coding change.

---

## 6. Security

SecurityAccess (0x27) for a coding session is **not individually decodable** here. The
session/state gate cells are `X:0x17AB`/`X:0x17B1` (referenced 12× in block01), and the
diag region's first-tier handlers `JSR P:0x1C319` / `JSR P:0x1815B` (`P:0x13C02/0x13C41`)
are the structurally-placed candidates for the session/security/service front end — but the
seed generation, the key compare, and the seed→key transform are all byte-ALU / indexed and
emitted as `.word`. **The seed/key structure, level, and algorithm are UNRESOLVED** and are
not asserted. (Whether the coding write even *requires* 0x27 — the IPMA's DE03 did not — is
likewise not determinable, as the DID permission mask is byte-indexed.)

---

## 7. Unresolved (explicit)

1. **UDS SID/DID switch table** — byte-indexed; service handlers located structurally
   (`P:0x1C319`, `P:0x1815B`, per-DID helper `P:0x18A87`, response writer `P:0x17BE7`, EEE
   path `P:0x001C3/0x00251/0x001DA`) but no SID/DID number recovered. Needs byte-compare decode.
2. **EEE parameter descriptor table (IDs/lengths)** — the flash-controller register map and
   the per-parameter id/length layout are in the byte-ALU block00 driver; not dumped. (56F8xxx
   part number absent from VBFs.)
3. **SecurityAccess 0x27 seed/key/algorithm** — not isolated; UNRESOLVED.
4. **Engineering units of the variant/tune config (`0x0650–0x0654`)** — scaling is
   calibration-resident (`CV6T-14C218-AX`); structural role (EPS tune/ratio) only.
5. **Residual byte-ALU-blind reads** — the negative in §3.3 rests on decoded control flow; a
   hypothetical indexed read aliasing config into `0x12Cxx`/assist-ISR was not observed but
   cannot be excluded with 100% certainty by this tool. No such route appears in the decoded flow.

---

## Summary

- **Coding store:** the PSCM keeps configuration as **per-parameter D-flash EEE** records via
  three block00 primitives `P:0x001C3` (read) / `P:0x00251` (select) / `P:0x001DA` (commit),
  used app-wide (hundreds of call sites) — **not** a single flat As-Built image like the IPMA.
  Parameters land in a low-X **working-copy band** (FL `X:0x0640–0x0660`; Pre-FL `X:0x01Ax`),
  and As-Built values are read→scaled (×0.8, `0xCCCCCCCD`)→clamped (`[50,30000]`)→stored into
  RAM shadows `X:0x17C0–0x17CD` by twin routines `P:0x13C74`/`P:0x13CBE` (Pre-FL
  `P:0x12AC7`/`P:0x12B11`).
- **KEY VERDICT (task 3): the PSCM has NO As-Built/coding item that gates lane-assist apply.**
  The `LaRefAng`/lane decode at `P:0x12C85` reads only the CAN signal + the fixed 2048 centre
  offset — no config cell — and neither does the assist-mix consumer. The config band feeds
  **monitor limits / DTC latches** (`P:0x15AA3 → JSR 0x0FACE`) and **steering-tune variant**
  parameters, never a lane accept-enable. The lane apply path is coding-independent.
- **Variant coding:** EPS steering-tune/ratio variant words at `X:0x0650/0651` (paired,
  biased `+0x4000` at `P:0x2D53D`) and `X:0x0652/0653/0654` — per-vehicle tune, not ADAS.
- **Pre-FL vs FL:** same EEE mechanism and same read/scale/clamp idiom; the config working
  copy **relocated** `X:0x01Ax → X:0x064x` and the tune band grew, but **no new lane-gating
  coding parameter appears in FL** (contrast the IPMA's FL-new group-`0x2B` params). The FL
  coding-surface delta is RAM re-layout + tune growth + the 14C386 `7F75` APA/park re-layout —
  not a lane-assist coding change.
- **Security:** 0x27 seed/key/algorithm UNRESOLVED (byte-ALU); session gate cells
  `X:0x17AB`/`X:0x17B1`; front-end handler candidates `P:0x1C319`/`P:0x1815B`.
