export const meta = {
  name: 'ff35-pscm-larefang-rh850',
  description: 'PSCM LaRefAng/ExtSteeringAngleReq masodik hullam a NATIV RH850 dekodon (0.59 hb/fv, 907 __sat, 593 short-olvasas, 244 gp-cal); + RCM ujraleiras a jobb hivasi grafon',
  phases: [
    { title: 'Find', detail: 'CAN-RX szogkeres / hataskor-clamp (cal) / sebesseg-kapu / vezerlo-hurok a RH850-nativ dekodon' },
    { title: 'Verify', detail: 'adverzalis - valodi cal-limit vagy artefakt' },
    { title: 'Describe', detail: '12_pscm_larefang.md frissites + 13_rcm.md frissites' },
  ],
}

const PSCM = 'F:/FF3.5_ANALYSIS/decompiled/pscm_rh850native.c'
const RCM = 'F:/FF3.5_ANALYSIS/decompiled/rcm_arm2.c'

const DECODE = `UJ ALAP: ez a fajl (${PSCM}) a PSCM (Renesas RH850 EPS) firmware a NATIV Ghidra RH850:LE:32:default dekoderrel ujra-dekompilalva (bazis 0x1C000, a valodi kod-regio; a 0x67000+ csak PADDING volt, kihagyva). Ez SOKKAL jobb mint a korabbi v850e3-dekod: halt_baddata 1.10->0.59/fv, es most 907 __saturate (RH850 SATADD/SATSUB), 593 (short) elojeles olvasas, 244 DAT_ffffXXXX gp-relativ cal-konstans LATHATO.
RH850 SZEMANTIKA - FONTOS: a "__saturate(X)" intrinsic az RH850 SATADD/SATSUB = X kiszamitasa majd telites INT32 hatarra (0x7fffffff/0x80000000), NEM egyedi szog-limit. A tenyleges szog/nyomatek HATASKOR-korlat NEM a __saturate boundja, hanem: (a) explicit osszehasonlitas/agazas egy cal-konstansra (DAT_ffffXXXX = gp-relativ kalibracio, ITT elnek a limitek), VAGY (b) min/max idiom, VAGY (c) 16-bites truncalas. A DAT_ffffXXXX ertekek a kalibracios blokkbol jonnek.`

const DOMAIN = `TARGY: Ford Focus Mk3.5 PSCM = elektromos szervokormany (EPS). Az EPS a busz-rol KULSO szog/nyomatek-kerest fogad az ADAS-tol:
- LaRefAng_No_Req (savtarto LKA/TJA referencia-szog): 0.05 mrad/bit, +/-103 mrad = +/-5.9deg. JELOLT KONSTANS: 103 = 0x67 (a fajlban 8x szerepel!), vagy +/-2060 belso egyseg.
- ExtSteeringAngleReq (park-assist szog): 0.1 deg/bit, +/-1000deg = +/-10000 egyseg. JELOLT: 10000 (a fajlban 1x szerepel!).
ADAS-KERDESEK: (a) melyik fv olvassa/skalazza a kulso szog-kerest (593 db (short) olvasas kozul); (b) HATASKOR-korlat: melyik cal-konstans (DAT_ffffXXXX) vagy literal korlatozza a kulso keres magnitudojat/rate-jet; (c) SEBESSEG-kapu: van-e jarmusebesseg-osszehasonlitas ami engedelyez/letilt egy ADAS-agat (a valodi LKA/LCA sebesseg-limit); (d) ADAS-aktiv flag / kez-a-kormanyon nyomatek-feluliras.`

const METHOD = `MUNKAMODSZER: Bash grep/sed a fajlon (NE cat-eld). Fejlec: "// ==== FUN_<addr> @ <addr> (size N) ====". Konkret lepesek: (1) grep -n a '0x67' es '10000' es '103' konstansokra -> nezd meg a kornyezetuket (osszehasonlitas? clamp? skalazas?); (2) grep a '(short)' olvasasokra a CAN-RX-hez, kovesd honnan jon az ertek (RX buffer / gp-relativ) es hova megy; (3) grep 'DAT_ffff' -> a cal-konstansok, kulonosen amiket osszehasonlitassal/clamp-pel hasznalnak; (4) a nagy fv-ek (grep 'size [0-9]\\{4,\\}' a fejlecekben) a fo vezerlo-hurkok. Idezd a KONKRET C-sorokat sorszammal. Cimke: [BIZONYITOTT]/[EROS]/[HIPOTEZIS]. VIGYAZAT a fantom-regiszterekre (in_/unaff_/extraout_) - azok meg mindig artefaktok, de most kevesebb van; ha valodi param/DAT/memoria all a lelet mogott, az [BIZONYITOTT].`

const ANGLES = [
  { label: 'pscm:canrx-scale', task: `ANGLE: A KULSO SZOG-KERES olvasasa+skalazasa. A 0x67(=103) es 10000 konstansok kornyezete a kulcs. grep -n mindkettore, es minden elofordulasnal dontsd el: skalazo szorzo/oszto, magnitudo-hatar, vagy tengely-torespont? Kovesd a (short) RX-olvasastol a belso szog-valtozoig. Add meg: fv cim, a konstans szerepe, es hogy LaRefAng (savtarto) vagy ExtSteeringAngleReq (park) uthoz tartozik.` },
  { label: 'pscm:authority-clamp', task: `ANGLE: A kulso keres HATASKOR-KORLATJA. Keress explicit osszehasonlitast VAGY min/max idiomot ami a kulso szog/nyomatek-kerest egy cal-konstansra (DAT_ffffXXXX) vagy literalra korlatozza. NE a __saturate int32-boundot vedd (az nem a limit). Add meg: fv cim, a limit forrasa (melyik DAT_ffff cal vagy literal), az ertek ha olvashato, es szamitsd at fokra/mrad-ra ha lehet. Ez adja meg mennyire eross lehet az LKA/LCA rasegites.` },
  { label: 'pscm:speed-gate', task: `ANGLE: SEBESSEG-FUGGO KAPU. Keress jarmusebesseg-valtozo osszehasonlitast (< vagy > kuszob, kuszob lehet DAT_ffff cal), ami engedelyez/letilt egy szog/nyomatek-agat vagy ADAS-modot. EZ a valodi LKA/LCA sebesseg-limit az EPS-ben. A korabbi 25000-lelet a v850e3-dekod fantom in_r18-jan allt - a nativ dekodban ellenorizd van-e VALODI sebesseg-kapu (valodi memoria-olvasas). Add meg: fv cim, kuszob-ertek/forras, a valtozo eredete. Ha nincs, mondd ki.` },
  { label: 'pscm:control-loop', task: `ANGLE: A fo vezerlo-hurok es az ADAS-keres BEKEVERESE. Vizsgald a legnagyobb fv-eket (size>=2000): melyik a fo nyomatek-szabalyzo, es HOL adodik hozza/keverodik be a kulso ADAS szog/nyomatek-keres a suroffer/kezi nyomatekhoz (ez az override/mixing pont). Add meg fv-cimet es a bekeveres modjat (osszeadas, valtas, sulyozott keveres) bizonyitekkal.` },
]

const FINDING = {
  type: 'object',
  properties: {
    angle: { type: 'string' }, found: { type: 'boolean' },
    function_addr: { type: 'string' },
    cal_or_literal: { type: 'string', description: 'a limit/kuszob forrasa: melyik DAT_ffffXXXX cal vagy literal ertek' },
    key_value: { type: 'string', description: 'az ertek es atszamitasa fokra/mrad-ra/km/h-ra ha lehet' },
    artifact_risk: { type: 'string', enum: ['none', 'low', 'high'] },
    evidence: { type: 'string' },
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
  agent(`${DECODE}\n\n${DOMAIN}\n\n${METHOD}\n\n${a.task}`,
    { phase: 'Find', label: a.label, agentType: 'general-purpose', schema: FINDING })
))
const ok = found.filter(Boolean)
log(`Find: ${ok.filter(d => d.found).length}/${ANGLES.length} talalt; cal-forras leletek: ${ok.filter(d => d.cal_or_literal).map(d => d.angle + '=' + d.cal_or_literal).join('; ') || '-'}`)

phase('Verify')
const toV = ok.filter(d => d.found && d.confidence !== 'low')
const verdicts = await parallel(toV.map(d => () =>
  agent(`${DECODE}\n\n${DOMAIN}\n\nSZKEPTIKUS/ADVERZALIS ELLENORZES. Probald megcafolni ES dontsd el artefakt-e. Allitas (${d.angle}): ${d.summary}\nCal/literal forras: ${d.cal_or_literal || '-'}\nErtek: ${d.key_value || '-'}\nFv: ${d.function_addr || '-'}\nBizonyitek: ${d.evidence || '-'}\nOlvasd el a fv-t a ${PSCM}-ben. holds=true CSAK ha valodi memoria/param/cal-olvasason all es koherens; is_artifact=true ha fantom-reg/szemet. Kulonosen ellenorizd: a 0x67/10000/DAT_ffff tenyleg szog-limitkent/skalazokent hasznalt-e, nem mas cel. Idezz C-t.`,
    { phase: 'Verify', label: 'verify:' + d.angle, agentType: 'general-purpose', schema: VERDICT })
))
const held = verdicts.filter(Boolean).filter(v => v.holds && !v.is_artifact)
log(`Verify: ${held.length}/${toV.length} valodi (nem artefakt)`)

phase('Describe')
const [descP, descR] = await parallel([
  () => agent(`${DECODE}\n\n${DOMAIN}\n\nFELADAT: FRISSITSD a 12_pscm_larefang.md-t a NATIV RH850 dekod eredmenyeivel. A korabbi verzio azt mondta "nem olvashato ki" (a v850e3-dekod es a padding-felreertelmezes miatt) - most a jobb dekoddal tobbet tudunk. Szerkezet: (1) FONTOS KORREKCIO: a 0x67000+ regio PADDING (nem elveszett komm-kod), es a nativ RH850 dekod felezi a hibaaranyt; (2) VEGSO VALASZ a 4 ADAS-kerdesre amennyire MOST kiolvashato (CAN-RX skalazas, hataskor-clamp cal-bol, sebesseg-kapu, mixing); (3) a kulcs-fuggvenyek es cal-konstansok (DAT_ffff); (4) MODOSITHATOSAG: hol lehetne az LCA-hoz a hataskort/sebesseg-kaput hangolni, milyen kockazattal; (5) OSZINTE bizonyossag + NYITOTT pontok (mi meg mindig torott). Ird felul a fajlt: F:/FF3.5_ANALYSIS/12_pscm_larefang.md.
FIND: ${JSON.stringify(ok.map(d => ({ a: d.angle, found: d.found, art: d.artifact_risk, fn: d.function_addr, cal: d.cal_or_literal, v: d.key_value, conf: d.confidence })))}
VERIFY: ${JSON.stringify(verdicts.filter(Boolean).map(v => ({ c: v.claim, holds: v.holds, art: v.is_artifact })))}
Return: 3-4 mondat osszefoglalo.`,
    { phase: 'Describe', label: 'desc:PSCM', agentType: 'general-purpose' }),
  () => agent(`A fajl ${RCM} a Ford Focus Mk3.5 RCM (Restraint Control Module = legzsak/utasbiztonsag/utkozes-erzekeles) ujra-dekompilalva, ARM Cortex-M (Thumb), base 0x4000, PROLOGUS-alapu seedelessel. Ez sokkal jobb mint a korabbi brute-force: fv 37->181, es most 191 belso hivas-el (volt 0 = ures hivasi graf). Meg mindig van torott resz (~224 halt_baddata a false-positive prologus-seedek miatt), de a valodi fv-ek es a hivasi graf mostmar lathato.
FELADAT: Bash grep/sed. FRISSITSD a 13_rcm.md-t egy VALODI mukodesi leirassal amennyire a jobb dekod engedi: (1) architektura (ARM Cortex-M, hivasi graf mostmar osszefugg), (2) a legtobbet hivott/leghosszabb fv-ek szerepe (grep a FUN_ hivasi gyakorisagra, es a nagy fv-ekre size>=2000), (3) CAN/periferia-nyomok, (4) utkozes-erzekeles/legzsak/oving-elofeszito logika barmi jele, (5) ADAS-relevancia. Legy oszinte a maradek korlatokrol. Ird felul: F:/FF3.5_ANALYSIS/13_rcm.md. Return: 2-3 mondat.`,
    { phase: 'Describe', label: 'desc:RCM', agentType: 'general-purpose' }),
])

return { found: ok, verdicts: verdicts.filter(Boolean), held: held.length, descPSCM: descP, descRCM: descR }
