# PSCM 14C386 signal-config: Pre-FL ↔ FL handle map and net field change

Updated: 2026-09-14

This note refines the Pre-FL→FL signal-configuration (`14C386`) diff. It is derived
purely from the two checked-in decoded descriptor dumps
(`pscm_pre_sigcfg_decoded.txt`, `pscm_fl_sigcfg_decoded.txt`) via
`sigcfg_handle_map.py`, so it does **not** depend on the raw firmware blocks
(those are stored with Git-LFS and are not materialised in every environment).

## Method

Each 10-byte descriptor extracts a bitfield from a source handle `h0` (with a
secondary/validity handle `h1`) and routes it into a signal bank (`group_word`)
under a one-hot selector `ctl`, using `shift`(raw[6]) / `mask`(raw[7]) /
`flags`(raw[9]). Between versions the *engine* is unchanged but handle numbers
and selectors inside two banks are relocated, which defeated a positional diff.

The banks are aligned order-preservingly (LCS) on the **version-invariant**
signature `(shift, mask, flags)` — deliberately excluding `h0/h1` (renumbered)
and `ctl` (re-selectored). The resulting handle remap is internally consistent
(no conflicting mappings), which validates the alignment.

## Net field change (this is the corrected headline)

The earlier handoff described the change as "two new 3-bit fields". The aligned
view shows it is **+3 / −1**, and that bank `7F75` was genuinely re-laid-out,
not merely extended:

| Bank | Δ | Field | Width | mask / shift / sel / flags |
|---|---|---|---|---|
| `7F74` | added | `h0=7EB9` | 3-bit | mask `0x70`, sh 4, sel `0x02`, fl `0x00` |
| `7F75` | **removed** | `h0=7ED8` | 5-bit | mask `0x1F`, sh 0, sel `0x20`, fl `0x40` |
| `7F75` | added | `h0=7ECC` | 2-bit | mask `0x60`, sh 5, sel `0x10`, fl `0x80` |
| `7F75` | added | `h0=7EEB` | 3-bit | mask `0x38`, sh 3, sel `0x80`, fl `0x40` |

Note `7F74` now carries **two** fields on handle `7EB9`: the pre-existing 4-bit
`mask 0x0F` field and the new 3-bit `mask 0x70` field, i.e. a 3-bit subfield was
packed into the upper nibble of an already-used byte.

## Relocations (arithmetic confirmation of "engine unchanged, content moved")

- **Bank `7F8A`** (transmit/output side; `0x86xx` X-memory addresses): all 13
  handles relocated by a uniform **+0x14** (`8608→861C`, …, `862E→8642`).
  `+0x14 = +20 bytes = exactly the two added 10-byte descriptors`. This is a
  clean confirmation that the `0x86xx` values are byte offsets into a table that
  simply grew, not changed signals.
- **Bank `7F75`** (source/logical handles `0x7Exx`): the handles above the
  insertion point renumber by a uniform **−0x08** (`7EEA→7EE2`, `7EE8→7EE0`,
  `7EE2→7EDA`, `7EDF→7ED7`, `7EDD→7ED5`), and every selector steps down one
  one-hot position (`0x80→0x40`, `0x40→0x20`), making room for the new
  `7EEB` field at the top selector `0x80`.
- All other banks (`7F74` except the added field, `7F79`, `7F7D`, `7F81`,
  `7F6C`) keep identical handles and selectors.

The full per-bank alignment and the complete remap table are in
`sigcfg_handle_map.txt`.

## Why this matters for the LCA question

- Bank `7F75` is the only receive bank the FL **substantively reworked** (a
  5-bit field retired, a 2-bit and a 3-bit field added, all handles/selectors
  renumbered) — a better-targeted place to look than the pure insertions
  reported before. If `7F75` turns out to carry a lane-assist request field,
  this re-layout is a candidate for the break; if it is the APA-mode bank, it
  corroborates the perpendicular-parking interpretation.
- The `Pre→FL` handle remap table lets a future consumer-code diff line up the
  *same* signal across the two applications despite the renumbering — this is
  the prerequisite for plan step 3 (find the first differing conditional branch
  in the homologous `AF`/`AR` consumer of a given handle).

## Not settled here

Binding these banks/handles to concrete CAN IDs still needs the receive
message→handle table, which lives in the application code, not in `14C386`.
That, and any re-disassembly, needs the raw firmware/DBC blobs (Git-LFS
objects), which are **not present in this environment** — so CAN-ID binding and
fresh disassembly could not be advanced here. The alignment above needs only the
already-decoded text and stands on its own.
