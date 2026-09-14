#!/usr/bin/env python3
"""Zart hurku LCA szimulacio: kinematikus bicycle-model + LaneCenteringController + a LaRefAng
csatorna (a gyari EPS a referenciat koveti). Demonstralja: (1) autopalya-iven a within-envelope
nudge KOZEPEN tart; (2) eles kanyarban a +-5.87deg TELIT -> az auto kilep (a vezeto atveszi = biztonsagos).
stdlib only. Futtasd: python sim.py
"""
import math, os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from controller import LaneCenteringController, LA_LIMIT_DEG
from can_lane_assist import encode_lane_assist_data2, decode_lane_assist_data2

def road_curvature(s):
    """Ut-gorbulet [1/m] a megtett ut (s, m) fuggvenyeben: egyenes -> autopalya-iv (R=250) ->
    egyenes -> eles kanyar (R=28, varosi) -> egyenes."""
    if   s < 200:  return 0.0
    elif s < 500:  return 1/250.0      # autopalya-iv (kb. 0.30-0.6deg kerek-szog kell)
    elif s < 700:  return 0.0
    elif s < 820:  return 1/28.0       # eles varosi kanyar (~5.4deg -> a burok szelen/tul)
    else:          return 0.0

def run(v_kmh=100.0, dt=0.02, ctrl=None, tau_steer=0.15):
    v = v_kmh/3.6
    ctrl = ctrl or LaneCenteringController()
    L = ctrl.L
    s=0.0; e_y=0.30; e_psi=0.0; delta=0.0   # 30 cm kezdeti eltolas (a kozepre kell huznia)
    rows=[]; sat_first=None; max_abs_e=0.0
    steps=int(1000/v/dt)+ int(30/dt)
    for i in range(steps):
        kappa=road_curvature(s)
        ref_deg, sat = ctrl.step(e_y, e_psi, kappa, v)
        # a valos kerek-szog a referenciat koveti elsorendu keslessel (EPS-dinamika kozelites)
        delta += (math.radians(ref_deg) - delta) * (dt/tau_steer)
        # kinematikus sav-relativ modell
        e_y   += v*math.sin(e_psi)*dt
        e_psi += (v*(math.tan(delta)/L) - v*kappa)*dt
        s     += v*dt
        max_abs_e=max(max_abs_e, abs(e_y))
        if sat and sat_first is None and s>150: sat_first=s
        if i%10==0: rows.append((s, e_y, ref_deg, sat, kappa))
        if abs(e_y)>1.5:  # kilepett a savbol (fel savszelesseg ~1.5m) -> vezeto atvesz
            rows.append((s, e_y, ref_deg, sat, kappa)); break
    return rows, sat_first, max_abs_e

def ascii_plot(rows):
    print("\n  s[m]  gorbulet   e_y[m]  LaRefAng[deg]  |  sav-pozicio (|=kozep, o=auto)")
    for s,e_y,ref,sat,kappa in rows[::max(1,len(rows)//40)]:
        pos=int(round((e_y/1.5)*20))+20; pos=max(0,min(40,pos))
        line=['·']*41; line[20]='|'; line[pos]='o' if abs(e_y)<=1.5 else 'X'
        r=1/kappa if kappa else 0
        tag=f"R={r:>4.0f}" if r else "egyenes"
        flag=" SAT" if sat else ""
        print(f"  {s:5.0f}  {tag:8}  {e_y:+5.2f}  {ref:+6.2f}{flag:4}  {''.join(line)}")

if __name__=='__main__':
    print("="*78)
    print("LCA within-envelope szimulacio - LaRefAng nudge csatorna, +-5.87deg gyari burok")
    print("="*78)
    for v in (100.0, 130.0):
        rows, sat_s, max_e = run(v_kmh=v)
        print(f"\n### {v:.0f} km/h ###")
        ascii_plot(rows)
        departed = any(abs(r[1])>1.5 for r in rows)
        print(f"  -> max oldal-hiba: {max_e:.2f} m | telites eloszor: {('%.0f m'%sat_s) if sat_s else 'nem'} | savbol kilepett: {'IGEN (eles kanyar - vezeto atvesz)' if departed else 'nem'}")
    print("\nERTELMEZES:")
    print("  * 0-700 m (egyenes + autopalya-iv R=250): a nudge KOZEPRE huz es ott tart (hiba < ~0.2 m).")
    print("  * ~700-820 m (eles kanyar R=28): a LaRefAng eleri a +-5.87deg burkot (SAT) es NEM eleg ->")
    print("    az auto kilep a savbol. VALODI hasznalatban itt a vezeto veszi at (a burok szandekos).")
    print("  * Ez igazolja: a within-envelope nudge alkalmas autopalya-savkozepre, de nem teljes onvezetes.")
    # egy pelda CAN-frame kiirasa
    cid,d=encode_lane_assist_data2(1.5)
    print(f"\n  Pelda kuldott frame @ +1.5deg: CAN 0x{cid:03X} data={d.hex()} (-> {decode_lane_assist_data2(d)['LaRefAng_deg']:+.2f} deg)")
