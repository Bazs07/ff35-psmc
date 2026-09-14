#!/usr/bin/env python3
"""Ford Focus Mk3.5 (CGEA1.2) savtarto CAN uzenetek kodolasa/dekodolasa - DBC-pontos.
A LaRefAng (nudge) csatorna injektalasahoz. Motorola (@0+, big-endian) bit-pakolas, stdlib only.
Onteszt a fajl vegen: futtasd `python can_lane_assist.py`.
Forras: ford_cgea1_2_ptcan_2011.txt (lasd 21_lca_can_frames.md).
"""

# --- Motorola (@0+, big-endian) jel pakolas 8 bajtos frame-be ---
def _mot_place(value, start_bit, length):
    """value beillesztese egy 64-bites big-endian szoba a DBC 'sawtooth' start_bit (MSB) szerint."""
    byte_index = start_bit // 8
    bit_in_byte = start_bit % 8
    msb_pos_left = byte_index * 8 + (7 - bit_in_byte)   # pozicio balrol (0 = byte0 MSB-je)
    shift = 63 - (msb_pos_left + length - 1)             # az LSB-mezo pozicioja jobbrol
    mask = (1 << length) - 1
    return (value & mask) << shift

def _mot_extract(word, start_bit, length):
    byte_index = start_bit // 8
    bit_in_byte = start_bit % 8
    msb_pos_left = byte_index * 8 + (7 - bit_in_byte)
    shift = 63 - (msb_pos_left + length - 1)
    return (word >> shift) & ((1 << length) - 1)

def _to_bytes(word): return word.to_bytes(8, 'big')
def _to_word(data):  return int.from_bytes(bytes(data).ljust(8, b'\x00')[:8], 'big')

def phys_to_raw(phys, scale, offset, length, signed=False):
    raw = round((phys - offset) / scale)
    lo, hi = (0, (1 << length) - 1) if not signed else (-(1 << (length-1)), (1 << (length-1)) - 1)
    return max(lo, min(hi, raw))

def raw_to_phys(raw, scale, offset): return raw * scale + offset

# --- Jel-definiciok (DBC) ---
# BO_ 971 Lane_Assist_Data2: LaRefAng_No_Req 19|12@0+ (0.05,-102.4) mrad
# BO_ 970 Lane_Assist_Data1: LkaActvStats_D_Req 7|3, LdwActvStats 4|3, LdwActvIntns 1|2
# BO_ 972 Lane_Assist_Data3: LaHandsOff 7|1, LaActDeny 6|1, LaActAvail 5|2
LANE_ASSIST_DATA1 = 0x3CA  # 970
LANE_ASSIST_DATA2 = 0x3CB  # 971
LANE_ASSIST_DATA3 = 0x3CC  # 972
EPAS_INFO         = 0x082  # 130

def encode_lane_assist_data2(la_ref_ang_deg, ramp_type=0, curvature_1pm=0.0):
    """LaRefAng savtarto referencia-szog FOKban (a gyari +-5.87deg burkon belul telitve)."""
    mrad = max(-102.4, min(102.4, la_ref_ang_deg * 17.4533))  # deg->mrad, +-102.4 hatar
    raw = phys_to_raw(mrad, 0.05, -102.4, 12)
    word  = _mot_place(raw, 19, 12)
    word |= _mot_place(ramp_type & 1, 4, 1)
    word |= _mot_place(phys_to_raw(curvature_1pm, 5e-06, -0.01, 12), 3, 12)
    return LANE_ASSIST_DATA2, _to_bytes(word)

def encode_lane_assist_data1(lka_active=1, ldw_active=0, ldw_intens=0):
    word  = _mot_place(lka_active & 7, 7, 3)
    word |= _mot_place(ldw_active & 7, 4, 3)
    word |= _mot_place(ldw_intens & 3, 1, 2)
    return LANE_ASSIST_DATA1, _to_bytes(word)

def decode_epas_info(data):
    """A PSCM visszajelzese (0x82): oszlop-nyomatek + szog-vezerles allapot."""
    w = _to_word(data)
    return {
        'SteeringColumnTorque_Nm': raw_to_phys(_mot_extract(w, 7, 8), 0.0625, -8.0),
        'EPAS_FAILURE': _mot_extract(w, 9, 2),
        'SteMdule_I_Est_A': raw_to_phys(_mot_extract(w, 21, 12), 0.05, -64.0),
        'SAPPAngleControlStat1': _mot_extract(w, 23, 2),
    }

def decode_lane_assist_data2(data):
    w = _to_word(data)
    return {'LaRefAng_mrad': raw_to_phys(_mot_extract(w, 19, 12), 0.05, -102.4),
            'LaRefAng_deg': raw_to_phys(_mot_extract(w, 19, 12), 0.05, -102.4) / 17.4533}

if __name__ == '__main__':
    print("=== ONTESZT: pakolas/kicsomagolas round-trip ===")
    ok = True
    # LaRefAng: 0deg (center) -> raw 2048 (0x800), byte2 also nibble 0x8
    cid, d = encode_lane_assist_data2(0.0)
    dec = decode_lane_assist_data2(d)
    print(f"  0x{cid:03X} LaRefAng 0deg -> {d.hex()}  dekod: {dec['LaRefAng_deg']:+.3f} deg (raw center=2048 elvart)")
    ok &= abs(dec['LaRefAng_deg']) < 0.03
    for deg in (-5.87, -2.0, -1.0, 0.0, 1.0, 2.0, 5.87):
        cid, d = encode_lane_assist_data2(deg)
        back = decode_lane_assist_data2(d)['LaRefAng_deg']
        clamp = max(-5.868, min(5.868, deg))
        good = abs(back - clamp) < 0.06
        ok &= good
        print(f"  {deg:+.2f} deg -> {d.hex()} -> {back:+.3f} deg  {'OK' if good else 'HIBA'}")
    # tulcsordulas: +10deg -> +-5.87-re telit
    cid, d = encode_lane_assist_data2(10.0)
    back = decode_lane_assist_data2(d)['LaRefAng_deg']
    print(f"  +10deg (tulcsordul) -> {back:+.3f} deg (burok ~+5.87 elvart)  {'OK' if back < 5.9 else 'HIBA'}")
    ok &= back < 5.9
    cid, d = encode_lane_assist_data1(lka_active=1)
    print(f"  0x{cid:03X} Lane_Assist_Data1 (LKA aktiv) -> {d.hex()}")
    print("\nEREDMENY:", "MINDEN OK" if ok else "VAN HIBA")
