export const meta = {
  name: 'ff35-pscm-larefang',
  description: 'PSCM (RH850 EPS) kulso kormanyszog-keres (LaRefAng/ExtSteeringAngleReq) CAN-RX + hataskor-clamp + sebesseg-kapu a full-Cover dumpon; + RCM leiras',
  phases: [
    { title: 'Find', detail: 'CAN-RX szogkeres / hataskor-clamp / sebesseg-kapu / vezerlo-hurok' },
    { title: 'Verify', detail: 'adverzalis - artefakt-e vagy valodi' },
    { title: 'Describe', detail: '12_pscm_larefang.md + 13_rcm.md' },
  ],
}

const PSCM = 'F:/FF3.5_ANALYSIS/decompiled/pscm_full.c'
const RCM = 'F:/FF3.5_ANALYSIS/decompiled/rcm_arm.c'

const HAZARD = `KRITIKUS FIGYELMEZTETES (tanulsag a korabbi munkabol): ez a dekompil (${PSCM}) egy RH850 modul v850e3 SLEIGH-vel dekodolva, ezert ~60% TOROTT (258 halt_baddata / 234 fv). GYAKORI ARTEFAKT: "in_rXX" / "unaff_rXX" = Ghidra-kitalalta FANTOM inicializalatlan regiszterek — ezek NEM valodi valtozok. Egy korabbi "25000 sebesseg-kapu" lelet HIBASNAK bizonyult, mert in_r18 fantom-regiszterrel hasonlitott. EZERT: (1) ha egy allitas fantom-regiszteren (in_/unaff_/extraout_) all, az [HIPOTEZIS] max, es mondd ki hogy artefakt-gyanus; (2) csak akkor [BIZONYITOTT], ha valodi memoriabol (DAT_/gp-relativ/param) olvasott ertek, koherens kod-kornyezetben; (3) a "size N" nagy fv-ek (0x76774=11KB, 0x7924c=14KB, 0x7cf0c=8.7KB) tobbnyire koherensek, a kicsik gyakran szemet.`

const DOMAIN = `TARGY: Ford Focus Mk3.5 PSCM = elektromos szervokormany (EPS, Renesas RH850). Az EPS a busz-rol KULSO kormanyszog/nyomatek-kerest fogad az ADAS-tol es azt korlatozottan koveti:
- LaRefAng_No_Req: savtarto (LKA/TJA) referencia-szog, 0.05 mrad/bit, tartomany kb. +/-5.9deg (= +/-103 mrad = +/-2060 egyseg) — kis "lane nudge".
- ExtSteeringAngleReq: park-assist szog-keres, 0.1 deg/bit, +/-1000deg (= +/-10000 egyseg) — nagy szog, ala csony sebessegen.
- A belso skalazas Q-formatumu fixpont (a nyers CAN-erteket atskalazza nyomatek/szog belso egysegre), ezert a fokban megadott hatar NEM feltetlen jelenik meg literalkent.
FONTOS ADAS-KERDESEK: (a) melyik fv csomagolja KI a kulso szog-kerest a CAN RX bufferbol; (b) mekkora a HATASKOR-korlat (magnitudo + rate/meredekseg limit) amit az EPS megenged a kulso keresnek; (c) van-e SEBESSEG-fuggo kapu (LKA csak bizonyos sebesseg felett/alatt aktiv; park-assist csak lassan) — EZ a valodi LKA/LCA sebesseg-limit az EPS oldalan; (d) mi engedelyezi/tiltja a kulso-keres kovetest (ADAS-aktiv flag, kez-a-kormanyon nyomatek-felulirasi kuszob).`

const METHOD = `MUNKAMODSZER: Bash grep/sed a fajlon (NE cat-eld egeszben). Fuggveny-fejlec: "// ==== FUN_<addr> @ <addr> (size N) ====". Nincs szimbolikus nev. Keresd: (1) CAN-RX unpack: 16-bites elojeles olvasas RX bufferbol (shift/mask/sign-extend), majd szorzas/osztas skalazo konstanssal; (2) szimmetrikus magnitudo-clamp (if x<-L x=-L; if x>L x=L) vagy telitett-osszeadas (__sat, SBORROW, 0x7fff/0x8000); (3) sebesseg-osszehasonlitas (jarmusebesseg valtozo < / > kuszob) ami engedelyez/letilt egy szog/nyomatek-agat; (4) gp-relativ cal-konstansok (DAT_ffffXXXX). Idezd a KONKRET C-sorokat sorszammal. Cimke: [BIZONYITOTT]/[EROS]/[HIPOTEZIS]. Ha nem talalod, mondd ki tisztan (a hianyt is dokumentaljuk).`

const ANGLES = [
  { label: 'pscm:canrx-anglereq', task: `ANGLE: A KULSO KORMANYSZOG-KERES CAN-RX kicsomagolasa. Keress fv-t, ami egy CAN RX bufferbol 16-bites elojeles erteket olvas ki es atskalazza (a LaRefAng_No_Req vagy ExtSteeringAngleReq fogadasa). Add meg: fv cim, a nyers-olvasas helye, a skalazo konstans, es hogy melyik jel (savtarto vs park-assist). Ha a jel-utat latod a torque-parancsig, vazold.` },
  { label: 'pscm:authority-clamp', task: `ANGLE: A kulso keres HATASKOR-KORLATJA (magnitudo + rate limit). Keress szimmetrikus clamp-et vagy telitett-osszeadast, ami a kulso szog/nyomatek-kerest egy maximumra korlatozza (ez adja meg mennyire "eross" lehet az LKA/LCA rasegites). Add meg a fv cimet, a limit-erteket (es szamitsd at fokra/nyomatekra ha tudod), es a bizonyitek-sorokat. Vigyazz a fantom-regiszter artefaktra.` },
  { label: 'pscm:speed-gate', task: `ANGLE: SEBESSEG-FUGGO KAPU a kulso-keres kovetesere. Keress jarmusebesseg-osszehasonlitast (sebesseg-valtozo < vagy > kuszob), ami engedelyez/letilt egy szog- vagy nyomatek-agat (pl. park-assist csak lassan, LKA csak egy also sebesseg felett). EZ a valodi LKA/LCA sebesseg-limit az EPS-ben. FONTOS: NE ismeteld meg a korabbi 25000-hibat — ha a hasonlitas fantom-regiszteren (in_/unaff_) all, az artefakt, jelold [HIPOTEZIS]-kent. Csak valodi memoriabol olvasott sebessegnel [BIZONYITOTT]. Add meg a fv cimet, a kuszoböt, a valtozo eredetet.` },
  { label: 'pscm:control-loop', task: `ANGLE: A NAGY VEZERLO-FUGGVENYEK szerepe. Vizsgald a 0x76774 (11KB), 0x7924c (14KB), 0x7cf0c (8.7KB), 0x7f544 (2.7KB) fv-eket: melyik a fo nyomatek-szabalyzo hurok, melyik a motor-kommutacio/aramszabalyzas, es melyik kezeli az ADAS kulso-keres felulirast/keverest. Add meg fv-enkent 1-2 mondatot bizonyitekkal (sat-op suruseg, gp-cal olvasas, CAN-erintkezes).` },
]

const FINDING = {
  type: 'object',
  properties: {
    angle: { type: 'string' }, found: { type: 'boolean' },
    function_addr: { type: 'string' },
    artifact_risk: { type: 'string', enum: ['none', 'low', 'high'], description: 'fantom-regiszter/torott-dekompil artefakt kockazata' },
    key_value: { type: 'string', description: 'a kulcs-konstans/kuszob/limit es atszamitasa, ha van' },
    evidence: { type: 'string', description: 'konkret idezett C-sorok sorszammal' },
    summary: { type: 'string' }, confidence: { type: 'string', enum: ['low', 'medium', 'high'] },
  },
  required: ['angle', 'found', 'artifact_risk', 'summary', 'confidence'],
}
const VERDICT = {
  type: 'object',
  properties: { claim: { type: 'string' }, holds: { type: 'boolean' }, is_artifact: { type: 'boolean' }, reasoning: { type: 'string' } },
  required: ['claim', 'holds', 'is_artifact', 'reasoning'],
}

phase('Find')
const found = await parallel(ANGLES.map(a => () =>
  agent(`${HAZARD}\n\n${DOMAIN}\n\n${METHOD}\n\n${a.task}`,
    { phase: 'Find', label: a.label, agentType: 'general-purpose', schema: FINDING })
))
const ok = found.filter(Boolean)
log(`Find: ${ok.filter(d => d.found).length}/${ANGLES.length} talalt; magas artefakt-kockazat: ${ok.filter(d => d.artifact_risk === 'high').map(d => d.angle).join(', ') || 'egyik sem'}`)

phase('Verify')
const toV = ok.filter(d => d.found && d.confidence !== 'low')
const verdicts = await parallel(toV.map(d => () =>
  agent(`${HAZARD}\n\n${DOMAIN}\n\nSZKEPTIKUS/ADVERZALIS ELLENORZES. Probald MEGCAFOLNI, es kulon dontsd el ARTEFAKT-e (fantom-regiszter, torott dekompil). Allitas (${d.angle}): ${d.summary}\nKulcs-ertek: ${d.key_value || '-'}\nFuggveny: ${d.function_addr || '-'}\nArtefakt-kockazat (bejelentett): ${d.artifact_risk}\nBizonyitek: ${d.evidence || '-'}\nOlvasd el a fv-t a ${PSCM}-ben. holds=true CSAK ha valodi memoria-olvasason all es koherens; is_artifact=true ha fantom-regiszter/szemet. Idezz konkret C-t.`,
    { phase: 'Verify', label: 'verify:' + d.angle, agentType: 'general-purpose', schema: VERDICT })
))
const held = verdicts.filter(Boolean).filter(v => v.holds && !v.is_artifact)
log(`Verify: ${held.length}/${toV.length} valodi (nem artefakt) allitas`)

phase('Describe')
const [descP, descR] = await parallel([
  () => agent(`${HAZARD}\n\n${DOMAIN}\n\nFELADAT: Irj RESZLETES elemzest a PSCM (RH850 EPS) kulso kormanyszog-kereserol a Find+Verify alapjan. Szerkezet: (1) VEGSO VALASZ - hol/hogyan fogadja es korlatozza az EPS a kulso LKA/LCA szog-kerest, es mi a sebesseg-fuggose; (2) jel-lanc CAN-RX -> skalazas -> hataskor-clamp -> nyomatek-parancs; (3) a kulcs-fuggvenyek; (4) MODOSITHATOSAG: elmeletileg hol lehetne a hataskor-limitet/sebesseg-kaput hangolni az LCA-hoz, es milyen kockazattal/korlattal (a dekompil torottsege miatt mennyire biztos); (5) bizonyossagi cimkek es a NYITOTT pontok (mit rontott el a decode). LEGY OSZINTE: ha a konkret limit nem olvashato ki a torott dekompilbol, mondd ki. Magyarul, markdown. IRD KI: F:/FF3.5_ANALYSIS/12_pscm_larefang.md.
FIND: ${JSON.stringify(ok.map(d => ({ a: d.angle, found: d.found, art: d.artifact_risk, fn: d.function_addr, v: d.key_value, conf: d.confidence })))}
VERIFY: ${JSON.stringify(verdicts.filter(Boolean).map(v => ({ c: v.claim, holds: v.holds, art: v.is_artifact })))}
Return: 3-4 mondatos osszefoglalo.`,
    { phase: 'Describe', label: 'desc:PSCM', agentType: 'general-purpose' }),
  () => agent(`A fajl ${RCM} egy Ford Focus Mk3.5 RCM (Restraint Control Module = legzsak/utasbiztonsag/utkozes-erzekeles) dekompilatuma, ARM Cortex-M (Thumb), base 0x4000. FIGYELEM: a dekompil TOROTT (52 halt_baddata / 37 fv, sok "unaff_rXX" fantom-regiszter az ARM-Thumb brute-force disassembly miatt) - LEGY OSZINTE errol. A nagy fv-ek (0x5354e=24KB, 0x592cc=15KB, 0x4bb02=15KB, 0x51530=8KB) tobbnyire koherensebbek.
FELADAT: Bash grep/sed a fajlon. Irj egy ROVID, OSZINTE mukodesi leirast az RCM-rol amennyire a torott dekompil engedi: (1) mit tudunk architekturalisan (ARM Cortex-M, blokk 0x4000+, a nagy fv-ek szerepe ha kideritheto), (2) CAN/periferia-nyomok ha vannak, (3) utkozes-erzekeles/legzsak-logika barmi jele, (4) ADAS-relevancia (utkozes utani fekezes, borulas). Mondd ki tisztan mi a dekompil KORLATJA es mi kellene jobb elemzeshez (natural ARM Cortex-M disasm mar jo, de lehet hogy a base/vektortabla finomitas kell). Magyarul, markdown. IRD KI: F:/FF3.5_ANALYSIS/13_rcm.md. Return: 2-3 mondatos osszefoglalo.`,
    { phase: 'Describe', label: 'desc:RCM', agentType: 'general-purpose' }),
])

return { found: ok, verdicts: verdicts.filter(Boolean), held: held.length, descPSCM: descP, descRCM: descR }
