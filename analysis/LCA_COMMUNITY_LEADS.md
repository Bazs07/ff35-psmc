# LCA chain — community leads and the reframed question (to verify against the binaries)

External input from a CAN/firmware community (Telegram "CANBUS" group, researchers "AZ" /
Aleksey Zagorodnikov and the group owner). **This is untrusted third-party testimony, recorded here as
hypotheses to confirm or refute against the actual firmware — not as established fact.** Each claim is
tagged with how to test it and how it maps to what we have already proven.

## The claims

1. **Split speed floor for LKA.** The PSCM is "ready to apply LKA/LCA corrections from ~40 km/h", but
   the **IPMA withholds the correction until ~65 km/h for LKA** (sends neutral below 65). So modding the
   IPMA alone can lower the LKA engage speed to ~40 km/h — but the reporter found it then "doesn't have
   enough authority to stay within lines at lower speeds."
2. **LCA is received but not applied.** The **IPMA sends the LCA (lane-centering) correction
   continuously**, and the **PSCM does not apply it**. Why is unknown to them ("Claude checked everywhere
   and didn't find").
3. **LCA may be unimplemented on this platform.** Possibly the C1MCA (Mk3.5) PSCM firmware never
   implemented LCA at all — Ford started LCA on C1MCA and only completed/released it on the newer C519
   (Focus Mk4). A 2014/2015 Ford demo of an Mk3 with an *additional* IPMA + IPC showed working LCA/TJA.
4. **Patch blocker.** The F1FT (Mk3.5 IPMA) calibration has an **unsolved checksum**; the CV4T (Kuga)
   one is solved. So cal-patching the F1FT IPMA is currently blocked — the PSCM is the more tractable
   target for the LKA-speed change.

## How this maps to what we have proven

- Our `PSCM_SIGNAL_REGION.md` found **no separate LaRefAng magnitude clamp** and the LaRefAng decode is
  **byte-identical Pre-FL↔FL** — consistent with "the PSCM applies what LaRefAng carries." That does not
  yet distinguish an LKA-apply path from an LCA-apply path.
- Our IPMA work found a **40 km/h LKA calibration record (record 10)** and speed thresholds — consistent
  with claim (1): the send-side speed gate is the lever, and a lower-threshold record exists.
- Claim (2)/(3) is the crux and reframes the investigation: **the decisive question is on the PSCM
  apply side, not the IPMA send side.** Specifically: *does the Mk3.5 PSCM contain a code path that
  consumes/applies a continuous LCA correction distinct from the LKA/LaRefAng path — or is the LCA input
  received by CAN and never read?*

## Testable hypotheses (assigned to the running decode)

- **H1 (PSCM speed gate):** a ~40 km/h vehicle-speed compare gates acceptance/apply of the received
  steering correction. → find the compare + speed source. *(PSCM safety/CAN tracks)*
- **H2 (LKA vs LCA as separate inputs):** the PSCM receives separate LKA and LCA correction
  signals/bytes, or a single one. → RX-signal → consumer map. *(PSCM CAN track)*
- **H3 (LCA dead signal):** an LCA correction field is written by CAN RX but has **no consumer** in the
  control loop (received-but-never-applied) — this would confirm "LCA not implemented in the Mk3.5 PSCM."
  → the strongest single test. *(PSCM safety track)*
- **H4 (IPMA send split):** IPMA sends neutral LKA below ~65 km/h but LCA continuously. → find the
  65 km/h TX gate and any distinct LCA output. *(IPMA CAN/feature track)*
- **H5 (checksum):** locate/characterise the F1FT IPMA cal checksum (why unsolved). *(IPMA diag track)*

## Candidate reframed conclusion (pending verification)

If H3 holds — the PSCM has **no LCA-apply path** (the LCA correction is received but never consumed) —
then enabling the LCA As-Built bit can never produce lane-centering on the Mk3.5, regardless of IPMA
mods, because the actuator module simply does not act on it. That would make LCA a genuine
**firmware-capability gap on C1MCA**, not a configuration problem — a materially different answer from
the LKA case (where the lever is the IPMA send-side speed gate). The running PSCM decode is targeted
squarely at proving or refuting this.

*(Sources for the claims are community testimony; treat conclusions as provisional until the cited
binary evidence in the per-track docs confirms them.)*
