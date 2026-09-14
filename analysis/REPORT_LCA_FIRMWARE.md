# Focus Mk3/Mk3.5 IPMA–PSCM LCA firmware-vizsgálat

## Cél és terminológia

A vizsgálat célja nem egy teljes Pre-FL firmware vakon történő FL autóra írása,
hanem annak megtalálása, hogy a Pre-FL rendszerben konfigurációval elérhető LCA
(sávközép-tartás) útvonala hol szakad meg a FL IPMA/PSCM párosban.

A korábban használt „hack” itt kizárólag ezt jelenti: az IPMA gyárilag nem
engedélyezett LCA-konfigurációjának bekapcsolása. Ez nem programkód-patch. A
felhasználói tapasztalat szerint ugyanez a konfiguráció a FL autón nem eredményez
működő LCA-t; a firmware-vizsgálat ezt nem írhatja felül.

Firmware-patch vagy flashelhető módosított VBF még nem készült.

## Vizsgált firmware-ek

### Pre-FL

- IPMA host: `BM5T-14F397-AG`
- IPMA DSP: `BM5T-14F397-BG`
- IPMA paraméter: `BM5T-14F398-AG`
- IPMA SBL: `BM5T-14F399-AG`
- PSCM alkalmazás: `BV6T-14C217-AF` (az `AD` változat is megmaradt összehasonlításra)
- PSCM kalibráció: `BV6T-14C218-AF`
- PSCM bootloader: `BV6T-14C220-AA`
- PSCM signal configuration: `BV6T-14C386-AA`

### FL

- IPMA host: `F1FT-14F397-AG`
- IPMA DSP: `F1FT-14F397-BE`
- IPMA paraméter: `F1FT-14F398-AG`
- IPMA SBL: `F1FT-14F399-AD`
- PSCM alkalmazás: `CV6T-14C217-AR`
- PSCM kalibráció: `CV6T-14C218-AX`
- PSCM bootloader: `BV6T-14C220-AA`
- PSCM signal configuration: `CV6T-14C386-AB`

Az eredeti VBF-ek nem módosultak. A bináris blokkok az egyes modulmappák
`Extracted` alkönyvtáraiban vannak, a hozzájuk tartozó `manifest.json` és
`header.txt` fájlokkal együtt.

## Megerősített IPMA-eredmények

### 1. A `706-04-01` konfiguráció valóban a `DE03` DID útvonalára esik

Mindkét host firmware DID-táblájában megtalálható a sorozat:

`DE00`, `DE01`, `DE02`, `DE03`

A `DE03` hossza mindkettőben 12 bájt. A diagnosztikai handler-táblák:

| Funkció | Pre-FL BM5T | FL F1FT |
|---|---:|---:|
| DID-tábla | `0x000E46D0` | `0x000DA238` |
| `DE03` külső handler | `0x00043FD8` | `0x00033428` |
| `DE03` belső getter | `0x000BE074` | `0x000B32A4` |
| perzisztens `DE03` RAM | `0x82DD07` | `0x82D8F3` |
| konfigurációs struktúra alapja | `0x82DB84` | `0x82D768` |
| NVM logikai azonosító | `0x0114` | `0x0114` |

A Pre-FL a 12 bájtot a struktúra `+0x183`, a FL a `+0x18B` eltolására
írja. A FL struktúrája nyolc bájttal átrendezett/nagyobb, de a teljes `DE03`
írási és olvasási útvonal megvan.

**Következmény:** a FL hibája nem magyarázható azzal, hogy az IPMA egyszerűen
nem tárolja vagy nem tudja visszaolvasni az LCA AsBuilt-beállítást.

### 2. A konfigurációhoz tartozó 64 rekordos bit/DTC-tábla azonos

A Pre-FL `0x000E0634` és a FL `0x000D6208` címén ugyanaz a 64 × 12 bájtos
tábla található, bájtra pontosan azonos tartalommal. A kód a rekordokból a
konfiguráció bájtindexét (`record[7]`) és bitpozícióját (`record[11]`) használja.

A közösségi jelölés szerinti `706-04-01 xxxx xx*x xx`, `3 → 8` változtatás a
harmadik adatbájt felső nibble-jét érinti. A táblában ez a 3. bájt 4–7. bitjének
megfelelő rekordcsoport. A tábla feladata legalább részben konfigurációfüggő DTC-
kapuzás; önmagában nem az LCA kormányzási algoritmusa.

**Következmény:** a FL firmware a konfiguráció ezen bitcsoportját ismeri. Ez
azonban még nem bizonyítja, hogy a FL host/DSP a bit hatására előállítja ugyanazt
az LCA parancsot, mint a Pre-FL.

## Megerősített PSCM-eredmények

### 1. Azonos flash-térkép és bootloader

A `BV6T-14C217-AF` és `CV6T-14C217-AR` alkalmazás VBF-szegmensei azonosak:

| VBF bájtcím | Hossz |
|---:|---:|
| `0x00000000` | `0x00009800` |
| `0x0001C000` | `0x00064000` |
| `0x04008C00` | `0x00007400` |

Mindkét összeállítás ugyanazt a `BV6T-14C220-AA` bootloadert használja. Ez erős
jel arra, hogy célzott kód-/kapuátültetés műszakilag vizsgálható. Nem bizonyítja,
hogy a teljes BV6T firmware biztonságosan futtatható a FL kormánygépen; a
kalibráció, EEPROM/NVM-séma és checksum továbbra is külön kockázat.

### 2. A PSCM processzora 56800E és a program már listázható

A program 16 bites, little-endian NXP/Freescale DSP56800E szavakat tartalmaz.
Például a resetvektor eleje:

`E255 1D76` → `JSR P:0x11D76` (Pre-FL)

`E255 2BC9` → `JSR P:0x12BC9` (FL)

A VBF bájtcím és a processzor programcíme között `P = VBF / 2` kapcsolat van.
Az `analysis/m56800e_disasm.py` az NXP kézikönyv alapján már dekódolja a fontos
vezérlésátadási utasításokat, visszatéréseket és abszolút `MOVE.W` formákat.

### 3. A program nem teljesen újraírt; több nagy kódterület áthelyezett közös kód

32 bájtos egyedi exact-window vizsgálatnál a leggyakoribb AF → AR áthelyezés
`+0xB008` VBF-bájt. További gyakori eltolások: `+0x1CA6`, `+0x3296`,
`+0x3074`. A resetvektor fő célfüggvénye például pontosan `+0x1CA6` bájttal
került arrébb.

Ez azt jelenti, hogy a Pre-FL és FL funkciók nagy része párosítható; a LCA-hoz
kapcsolódó eltérést célszerű egy konkrét feature gate, signal handler vagy
kalibrációs ág szintjén keresni, nem teljes alkalmazáscserével kezdeni.

### 4. A signal configuration 83 → 85 rekordra bővült

A generált signal-handle címek normalizálása után 68/83 Pre-FL rekord
változatlanul párosítható a FL rekordjával. Tizenöt korai rekordnál a buffer- és
bitmaszk-kiosztás/flag változott, továbbá két új FL rekord került be:

1. FL index 31, offset `0x018C`:
   `7EEB 7F75 7EEB 3803 4080`
2. FL index 80, offset `0x0376`:
   `7EB9 7F74 0000 7004 0002`

Mindkettő 3 bites mezőnek látszik meglévő `0x7F75`/`0x7F74` signal bufferben.
A jelenlegi bizonyíték nem elegendő ahhoz, hogy ezeket LCA- vagy merőleges
parkolási jelnek nevezzük. Az viszont látható, hogy a FL signal map nem egyszerűen
„eldobta” a Pre-FL térképet: a legtöbb descriptor megmaradt, és két mezővel
bővült.

## Jelenlegi legjobb következtetés

Az eddigi bináris bizonyíték a következő láncot támasztja alá:

1. A FL IPMA elfogadja, tárolja és visszaolvassa a `DE03`/`706-04-01`
   konfigurációt.
2. A kapcsolódó bit/DTC-leíró tábla a Pre-FL és FL hostban azonos.
3. Ennek ellenére a FL autón az LCA nem működik, tehát a konfiguráció önmagában
   nem elég.
4. A hiányzó rész vagy az IPMA funkcionális parancsképző útvonalán (host/DSP),
   vagy a CV6T PSCM kérés-elfogadó/feature-gate ágán van.
5. A felhasználói tapasztalattal és a PSCM családváltással együtt jelenleg a
   **CV6T PSCM kapuzása vagy eltérő parancsértelmezése a valószínűbb fő akadály**,
   de ezt még a `Lane_Assist_Data1/2` parancsútvonal statikus azonosításával kell
   bizonyítani.

## Következő célzott lépések

1. Az IPMA-ban megkeresni a `Lane_Assist_Data1`/`Lane_Assist_Data2` (`0x3CA` /
   `0x3CB`) csomagoló útvonalat, és összevetni, hogy a `3 → 8` beállítás után a
   BM5T és F1FT milyen `LkaActvStats`, referencia-szög és görbület mezőt állít elő.
2. A PSCM 56800E call graphban megkeresni a signal configurationből érkező
   lane-assist mezők fogyasztóját.
3. Az AF és AR homologikus függvényeiben az első eltérő feltételes kaput és annak
   kalibrációs hivatkozását azonosítani.
4. Csak ezután készíteni minimális patch-jelöltet, külön checksum/NVM/rollback
   ellenőrzéssel.

## Elemzőeszközök

- `analysis/vbf_extract.py` – VBF 2.x blokkok és manifestek
- `analysis/m32r_disasm.py` – IPMA host M32R listázás
- `analysis/ipma_feature_table.py` – 64 rekordos IPMA konfigurációs tábla
- `analysis/m56800e_disasm.py` – célzott PSCM 56800E listázás
- `analysis/pscm_chunk_map.py` – áthelyezett közös PSCM kódrészek
- `analysis/sigcfg_diff.py` – PSCM signal descriptor összevetés
- `analysis/pscm_xmem_xrefs.py` – közvetlen 56800E X-memory hivatkozások

## Forrásreferenciák

- NXP/Freescale: *DSP56800E and DSP56800EX Core Reference Manual*
- OpenDBC: `ford_cgea1_2_ptcan_2011.dbc` (a lane-assist CAN mezők elnevezéséhez;
  nem Ford gyári dokumentáció)

