# Focus Mk3 / Mk3.5 IPMA–PSMC LCA firmware investigation — handoff summary

Updated: 2026-08-11

## Precise interpretation of the task

The "Pre-FL LCA hack" does not mean modifying program code. The operation is only
turning on the LCA configuration in the AsBuilt data that IPMA has, from the
factory, not enabled/unlocked. According to reports this works on the Pre-FL
system, but on the user's facelift car enabling this same IPMA setting does not
result in working LCA.

The goal is therefore to find which part of the Pre-FL IPMA–PSCM function chain
changed in the facelift system. The investigation is currently purely static
firmware analysis; no modified or flashable VBF has been produced.

## Firmware examined

### Pre-FL IPMA

- host/application: `BM5T-14F397-AG`
- DSP: `BM5T-14F397-BG`
- parameter: `BM5T-14F398-AG`
- boot/SBL: `BM5T-14F399-AG`

### Facelift IPMA

- host/application: `F1FT-14F397-AG`
- DSP: `F1FT-14F397-BE`
- parameter: `F1FT-14F398-AG`
- boot/SBL: `F1FT-14F399-AD`

### Pre-FL PSCM

- application: `BV6T-14C217-AF`
- earlier/alternative application: `BV6T-14C217-AD`
- calibration: `BV6T-14C218-AF`
- bootloader: `BV6T-14C220-AA`
- signal configuration: `BV6T-14C386-AA`

Important: `BV6T-14C217-AD` and `BV6T-14C217-AF` are different application
versions covering the same flash areas. They are not two complementary blocks,
so they should not be written together as part of one firmware set. `AF` became
the main Pre-FL reference, `AD` was kept as a control.

### Facelift PSCM

- application: `CV6T-14C217-AR`
- calibration: `CV6T-14C218-AX`
- bootloader: `BV6T-14C220-AA`
- signal configuration: `CV6T-14C386-AB`

The original VBFs were not changed. The extracted blocks can be found here:

- `C:\UCDS_v3\PSMC mod\Pre FL\IPMA\Extracted`
- `C:\UCDS_v3\PSMC mod\Pre FL\PSMC\Extracted`
- `C:\UCDS_v3\PSMC mod\FL\IPMA\Extracted`
- `C:\UCDS_v3\PSMC mod\FL\PSMC\Extracted`

## Proven IPMA results

### Storing the 706-04-01 setting also works in the FL host

The `706-04-01` block maps, in the host firmware's diagnostic structure, to the
12-byte `DE03` DID. Both hosts have the complete read, write, and NVM save path.

| Function | Pre-FL BM5T | FL F1FT |
|---|---:|---:|
| DID table | `0x000E46D0` | `0x000DA238` |
| `DE03` external handler | `0x00043FD8` | `0x00033428` |
| `DE03` internal getter | `0x000BE074` | `0x000B32A4` |
| persistent `DE03` RAM | `0x82DD07` | `0x82D8F3` |
| config struct base | `0x82DB84` | `0x82D768` |
| NVM logical identifier | `0x0114` | `0x0114` |

The FL struct is rearranged/larger by eight bytes, but it handles the full
12-byte DE03 data. This rules out the simple explanation that the FL IPMA does
not save or read back the LCA AsBuilt setting.

### Direct references to DE03 did not lead to the LCA algorithm

In the uploaded host blocks, the direct references found to the DE03 persistent
area lead to the getter and a 25-byte configuration-copy helper function. This
copy drives an identical, 64 × 12-byte, configuration-dependent DTC/enable table
in both versions:

- Pre-FL: `0x000E0634`
- FL: `0x000D6208`

The two tables are byte-for-byte identical. This proves that the FL host knows
and processes the configuration bits, but does not prove a functional LCA
command. In the visible host code, no direct DE03 read has yet turned up that
leads into producing an LCA steering-angle or curvature command.

### Part of the IPMA CAN platform layer is missing from the uploaded VBFs

The IPMA host processor is a Renesas M32192/M32R. It has two Full-CAN channels;
the hardware CAN slot areas and the standard ID encoding are identifiable. The
hardware slot codes for IDs `0x3CA` and `0x3CB` are, for example, `0F 0A` and
`0F 0B` respectively.

However, the uploaded applications do not contain the full lower flash section:

- The Pre-FL VBF starts at `0x00020000`, so `0x00000000–0x0001FFFF` is missing.
- The FL VBF starts at `0x00010000`, so `0x00000000–0x0000FFFF` is missing.

The visible host application does not program the CAN slot SFRs directly. The
CAN driver/platform layer is likely in the missing lower flash. Because of this,
the full packing and send path for `0x3CA/0x3CB` cannot be recovered with
certainty from the current IPMA VBFs.

## Important network map from the DBCs

The `ford_cgea1_2_ptcan_2011.dbc` provides community-sourced signal names and
bit layouts. It is not Ford factory evidence, but is very useful for
interpreting binary fields.

### Lane assist

- `0x3CA` / 970, `Lane_Assist_Data1`
  - `LkaActvStats_D_Req`: 3 bits
  - `LdwActvStats_D_Req`: 3 bits
  - `LdwActvIntns_D_Req`: 2 bits
- `0x3CB` / 971, `Lane_Assist_Data2`
  - `LaRefAng_No_Req`: 12-bit reference angle
  - `LaRampType_B_Req`: 1 bit
  - `LaCurvature_No_Calc`: 12-bit curvature
- `0x3CC` / 972, `Lane_Assist_Data3`: PSCM feedback

### Automatic parking

- `0x3A8` / 936, `ParkAid_Data`
  - `ExtSteeringAngleReq`: 15-bit external steering-angle request
  - `EPASExtAngleStatReq`: the external angle-request status/enable bit
- the DBC also contains an alternative `0x3AB` / 939 `ParkAid_Data_CG1` layout

This matters: in the Mk3 network description, LCA and automatic parking do not
request steering on the same CAN command. LCA uses the `0x3CA/0x3CB` path, APA
uses the `0x3A8` path. The appearance of perpendicular parking in the FL
therefore does not automatically mean the LCA steering path was also retained.

## Proven PSCM results

### Platform and flash map

The PSCM uses an NXP/Freescale DSP56800E-family processor, little-endian
16-bit program words. There is a `P = VBF_address / 2` relationship between the
VBF byte address and the processor program address.

Reset entry points:

- Pre-FL AF: `E255 1D76` → `JSR P:0x11D76`
- FL AR: `E255 2BC9` → `JSR P:0x12BC9`

The applications' VBF segment maps are identical:

| VBF byte address | Length |
|---:|---:|
| `0x00000000` | `0x00009800` |
| `0x0001C000` | `0x00064000` |
| `0x04008C00` | `0x00007400` |

Both use the same `BV6T-14C220-AA` bootloader. Much large code is identical,
just relocated; a common AF → AR offset is `+0xB008` VBF bytes. This allows
targeted pairing of homologous functions, but does not make it safe to write the
full Pre-FL application onto an FL steering gear.

### The 14C386 signal configuration boundary and its processing code are identifiable

The 14C386 payload's X-memory base address is `0x8000`. The root struct is
0x56 bytes, followed by 10-byte signal descriptors.

- Pre-FL: 83 descriptors, next table at X-address `0x8394`
- FL: 85 descriptors, next table at X-address `0x83A8`

The boundary is not an estimate: `0x8000 + 0x56 + 83×10 = 0x8394`, and
`0x8000 + 0x56 + 85×10 = 0x83A8`. The main program loads both addresses and
hands them to homologous processing routines:

- Pre-FL: `P:0x2B367` and `P:0x2B38C`
- FL: `P:0x30B6B` and `P:0x30B90`

The routines' instruction sequences are identical except for the relocated
global X-addresses. This is strong evidence that the signal-configuration
engine itself did not change significantly; mainly the configuration content
changed.

### The 14C386's two genuinely new FL signal descriptors

After correctly aligning the 83/85 elements, two new FL records remain:

1. FL index 31, file offset `0x018C`:
   `EB 7E 75 7F EB 7E 03 38 80 40`
2. FL index 80, file offset `0x0376`:
   `B9 7E 74 7F 00 00 04 70 02 00`

The strongest interpretation so far of the descriptor's last four bytes:

- byte 6: bit shift;
- byte 7: bitmask;
- byte 8: a single-byte, one-hot byte selector (`01, 02, 04 … 80`);
- byte 9: control/flag field.

This interpretation has not yet been fully proven by reverse-engineering the
generated FSC runtime, but it fits significantly better across every
occurrence of these fields than the earlier "byte offset" naming.

So the new records both look like 3-bit fields:

- `group 0x7F75`, shift 3, mask `0x38`, selector `0x80`;
- `group 0x7F74`, shift 4, mask `0x70`, selector `0x02`.

> **Refinement (2026-09, `SIGCFG_HANDLE_MAP.md`).** A version-invariant alignment
> (`sigcfg_handle_map.py`) shows the two inserted records are not the whole story:
> inside bank `0x7F75` a **5-bit** field on handle `7ED8` (mask `0x1F`, selector
> `0x20`) was *retired* and a **2-bit** field on handle `7ECC` (mask `0x60`,
> selector `0x10`) took its place — an in-place field swap the positional diff hid
> inside a "replace" block. So the field-level change is **+3 / −1**, not simply
> "two new fields", and bank `7F75` was genuinely re-laid-out (all its source
> handles renumbered `−0x08`, every selector stepped down one one-hot). The
> alignment also confirms bank `7F8A` relocated by a uniform **+0x14 = +20 bytes**
> (the two added 10-byte records) and emits a Pre→FL handle remap table.

The `0x7F75` group shows a clear layout shift in the FL: a new 3-bit field was
inserted at selector `0x80`, while several existing field groups shifted to the
next selector (`0x80 → 0x40`, `0x40 → 0x20`). In the `0x7F74` group, another
3-bit field appeared alongside the existing `0x7EB9` internal handle.

### Likely link to perpendicular parking — not yet proof

Later Ford DBCs contain two separate 3-bit APA-mode fields:

- `ApaMdeStat_D_RqDrv`: among other things, SAPP/PPA/POA request;
- `ApaMde_D_Stat`: SAPP/PPA/POA status.

Since the FL expands the Pre-FL 14C386 by exactly two new 3-bit fields, and the
facelift system introduced perpendicular parking, the current strongest
interpretation is that these belong to the expansion of the APA-mode
request/status. This is, however, an inference, not identified CAN-ID
evidence. The next important task is binding the `0x7F75` and `0x7F74`
internal groups to a concrete CAN message.

### The 1012 bytes after the descriptors are largely shared

After the two correct descriptor boundaries, exactly 1012–1012 bytes remain.
Of these, 945 bytes are also identical raw. Of the 506 little-endian words, 61
differ; of these:

- 40 words got exactly a `+0x000A` offset;
- 7 words got exactly a `+0x0014` offset.

These are internal pointers relocated because of the two new, 20-byte-total
descriptors. Among the other differences are signal-index bitmaps, the
`BV6T/CV6T` identifier, the `AA/AB` revision, checksum, and a few still
uninterpreted configuration values. This confirms that most of the 14C386 is
shared structure, not an entirely new format.

## Important negative results and dead ends

- The 14C386 payload contains no raw `0x3CA`, `0x3CB`, `0x3CC`, or `0x3D8`
  CAN ID. The network identifiers are translated into internal groups/pointers.
- The apparent `0x03CA/0x03CC` values found in the PSCM main program are part
  of a long, monotonic mathematical lookup table. They are not CAN IDs.
- The simple `E0/1C/03` triple-mask for the three `Lane_Assist_Data1` fields is
  not found within one group. This does not rule out LCA: the PSCM does not
  necessarily consume all three fields, and the generated signal layer may do
  further transformation.
- The FL IPMA's diagnostic temporary override buffer (`0x82DAF4`) is only used
  during an active diagnostic operation; it did not prove to be an LCA function
  gate.
- The downloaded old GNU binutils patch has Motorola DSP56800 support, not a
  verified complete DSP56800E disassembler, so using it automatically is not
  safe.

## Current, ranked hypotheses

1. **FL PSCM command interpretation or feature gate.** The CV6T application
   accepts the LCA status/angle request under a different condition than the
   BV6T application.
2. **PSCM signal-map difference.** One field of the lane-assist request lands
   on a different internal handle, bit, or validation state in the FL 14C386.
3. **FL IPMA functional send path.** The DE03 bit is saved, but the FL
   host/DSP or the missing lower CAN platform layer does not enable the same
   `0x3CA/0x3CB` command as the Pre-FL.
4. **Calibration gate.** `CV6T-14C218-AX` gives a different threshold or
   feature flag to the shared application code.

Based on the static evidence so far, the explanation "the FL IPMA simply
doesn't store the AsBuilt bit" is weak. The PSCM signal-map/receiving side or
the IPMA's not-yet-visible functional CAN layer is substantially more likely.

## Where to continue from here

1. Find the receive/message table belonging to the `0x7F75` and `0x7F74`
   groups in the PSCM application, and bind them to a concrete CAN ID.
2. Trace the consumers of the new `0x7EEB` and modified `0x7EB9` handle in the
   CV6T application. If they lead into APA-mode logic, identification of the
   two new records is essentially confirmed.
3. Separately, identify the internal signal handles of `0x3CA/0x3CB`, then find
   the first differing conditional branch in the AF and AR homologous consumer
   functions.
4. Compare only the addresses referenced by this identified code between the
   `BV6T-14C218-AF` and `CV6T-14C218-AX` calibrations; a blind diff of the full
   calibration is too noisy.
5. If a CAN log from the FL car becomes available later with the LCA AsBuilt
   toggled off and on, the change in `0x3CA/0x3CB` would immediately settle
   whether the chain breaks on the IPMA sending side or the PSCM receiving
   side. This is useful, but is not a prerequisite for continuing the
   firmware-only analysis.

Only after the above identifications is it worth preparing a minimal patch
candidate. Checksum, VBF signature/verification, NVM schema, rollback, and
steering safety states are not yet fully mapped.

## Analysis files created

- `analysis/vbf_extract.py` – VBF 2.x extraction and manifest
- `analysis/vbf_inventory.json` – firmware inventory
- `analysis/m32r_disasm.py` – IPMA M32R listing
- `analysis/ipma_feature_table.py` – IPMA configuration/DTC table
- `analysis/ipma_can_slots.py` – M32192 Full-CAN slot addresses
- `analysis/m56800e_disasm.py` – careful, partial DSP56800E decoder
- `analysis/pscm_chunk_map.py` – shared/relocated PSCM code areas
- `analysis/pscm_xmem_xrefs.py` – direct X-memory reference finder
- `analysis/pscm_sigcfg_decode.py` – 14C386 descriptor listing
- `analysis/pscm_pre_sigcfg_decoded.txt` – Pre-FL descriptors
- `analysis/pscm_fl_sigcfg_decoded.txt` – FL descriptors
- `analysis/sigcfg_handle_map.py` – Pre-FL↔FL descriptor aligner & handle remap
- `analysis/sigcfg_handle_map.txt` – aligned per-bank output & full remap table
- `analysis/SIGCFG_HANDLE_MAP.md` – corrected net field-change (+3/−1) and relocation note
- `analysis/sigcfg_pre_fl_diff.txt` – descriptor diff
- `analysis/pscm_pre_sigcfg_code.lst` – Pre-FL related code listing
- `analysis/pscm_fl_sigcfg_code.lst` – FL related code listing
- `analysis/REPORT_LCA_FIRMWARE.md` – earlier detailed working report

Copy of external references:

- `analysis/references/DSP56800ERM.pdf`
- `analysis/references/ford_cgea1_2_ptcan_2011.dbc`
- `analysis/tool_sources/opendbc` – current clone of OpenDBC, used only for
  reference

## Brief conclusion

The FL IPMA does save the LCA AsBuilt configuration, but based on the visible
host code it cannot be proven that this produces the same LCA CAN command as
the Pre-FL. The FL PSCM's signal configuration gained two new 3-bit fields,
likely belonging to the expanded automatic-parking modes, while most of the
processing engine remained shared. The most important open question now is not
whether the AsBuilt bit is stored, but whether the `0x3CA/0x3CB` lane-assist
command reaches the correct internal handle in the FL PSCM, and under what
condition the AR application accepts it.

---

## Frissítés — 2026-09-19 kampány (a fenti rangsorolt hipotézisek feloldása)

Az éjszakai teljes-feltérképező kampány (valódi GNU binutils 2.42 m32r objdump + a működő
Kuga CV4T és a Pre-FL PSCM referenciaként) a fenti nyitott kérdéseket nagyrészt lezárta.
Autós hozzáférés (As-Built export, CAN-log) NEM állt rendelkezésre, így minden statikus,
firmware-alapú; semmit sem flasheltünk. Részletek: `LCA_GAP_ANALYSIS.md` (capstone),
`../../ff35-ipma/IPMA_ACTIVATION_GATE.md`, `IPMA_ENABLEMENT_STATIC.md`, `IPMA_XPLAT_DIFF.md`,
`PSCM_ASBUILT.md`, `PSCM_PREFL_FL_DIFF.md`, `LCA_VERIFICATION.md`.

**A bizonyított fő ok (in-image):** az FL IPMA sáv-státusz döntése (`0xb2bdc`) az enumot
ACTIVE-ra számolja alaphelyzetben, DE a tényleges sáv-almezők **DEGRADED**-ként publikálódnak,
mert a **0x117 (signal 279) As-Built rekord gyári alapértéke csupa nulla**, ami a `0xe89ed`
kulcstábla 76 kulcsának **egyikére sem illik** → a `0xb5ad8` keresés „not found" → degradált ág.
Ezt szimulációval, a bináris valódi tábláin, függetlenül is reprodukáltuk (V1/V3).

**A régi rangsorolt hipotézisek feloldása:**
1. *FL PSCM parancs-értelmezés / feature-gate* → **CÁFOLVA.** A PSCM-nek nincs coding-eleme,
   ami a sáv-apply-t kapuzná (`PSCM_ASBUILT.md`), és a sáv-decode/apply hurok **bájt-azonos
   Pre-FL↔FL** (relokációtól eltekintve; a teljes app újrafordítás, +0xE53 szó eltolás)
   (`PSCM_PREFL_FL_DIFF.md`).
2. *PSCM signal-map különbség* → a 14C386 két új 3-bites mezője az **APA/merőleges parkolás**
   bővítéséhez tartozik, nem a sávtartáshoz (`SIGCFG_HANDLE_MAP.md`); a sáv-handle feldolgozás
   változatlan.
3. *FL IPMA funkcionális küldő út* → a valódi törés az **IPMA As-Built provisionálása** (0x117
   kulcs + 0x119 diszkriminátor), nem maga a küldő kód. A végső 0x3CA csomagolás a hiányzó alsó
   flashben van, de a döntés és a bit-pakolás ebben az image-ben van (`IPMA_ACTIVATION_GATE.md`).
4. *Kalibrációs kapu* → a sebességkapuk **jelen vannak és helyesek** (LCA 80/5/75, LKA 64.6/5),
   **azonosak a működő Kugáéval** (`IPMA_XPLAT_DIFF.md`, V4/V5); mind a 13 LCA cal-rekord 80 km/h,
   nincs alacsonyabb sebességű LCA rekord — nem ez a törés oka.

**Kuga (CV4T, működő) vs Focus (F1FT) — a lényeg:** a *kódolható* státusz-lánc (kapuk, 279/280/281
lane-paraméterek, availability-számítás, enum→0x3CA) **egyenértékű**. Ford az FL-en hozzáadta a
0x11E enum-reteszt (a Kugán nem létezik), de a 0xFF alapérték jóindulatú. A **nem coding-gal
orvosolható** különbség a **vision-DSP platform (CSF2F0 az FL-en vs CSF265 a Kugán)** — a DSP
állítja elő fentebb azokat a rekord-értékeket, amiket a host fogyaszt.

**Következtetés (a régi „Rövid összefoglaló" felülírva):** a facelift LCA-törés nem azon múlik,
hogy tárolódik-e az As-Built bit (tárolódik), hanem hogy az **IPMA As-Built sáv-rekordjai (0x117,
0x119) provisionálatlanok az FL alapállapotban**, ezért a sáv-almezők degradáltak. Ez **coding-gal
orvosolható** (DE-család / 0x48-osztályú UDS írások a 0x706-on), és ez a legelső kipróbálandó,
amint diagnosztikai hozzáférés lesz. Ami ezután is blokkolhat, az kizárólag a **CSF2F0 DSP-build**
képessége — ez nem coding-kérdés. A PSCM-et, a PAM-ot és a sebességkapukat mint okot kizártuk.
