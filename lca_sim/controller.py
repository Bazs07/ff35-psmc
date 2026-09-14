#!/usr/bin/env python3
"""Lane-centering lateral szabalyozo - a kamera sav-adatabol LaRefAng referencia-szoget szamol,
a gyari +-5.87deg burokra telitve. Ez a within-envelope LCA "agya" (openpilot lateral-controller analog).
Lookahead-alapu, termeszetesen csillapitott sav-tarto torveny. stdlib only.
"""
import math

LA_LIMIT_DEG = 5.868   # a LaRefAng gyari hataskor-plafonja (+-102.4 mrad) - SZANDEKOSAN betartva

class LaneCenteringController:
    def __init__(self, wheelbase=2.648, k_la=0.085, lookahead=12.0, k_ff=1.0):
        self.L = wheelbase          # tengelytav [m]
        self.k_la = k_la            # lookahead-hiba -> kerek-szog [rad/m]
        self.Lh = lookahead         # elore-tekintesi tavolsag [m] (termeszetes csillapitas)
        self.k_ff = k_ff            # elorecsatolas-suly (uthajlat)

    def step(self, e_y, e_psi, curvature, v):
        """e_y: oldal-eltolas a sav-kozeptol [m] (jobbra +); e_psi: heading-hiba [rad];
        curvature: ut-gorbulet [1/m]; v: sebesseg [m/s]. Visszaad: (LaRefAng[deg], telitett-e)."""
        delta_ff = self.k_ff * self.L * curvature                 # ivhez szukseges kerek-szog (Ackermann)
        lookahead_err = e_y + self.Lh * math.sin(e_psi)           # a lookahead-pont oldal-hibaja
        delta_fb = -self.k_la * lookahead_err                     # sav-kozepre huzas (csillapitott)
        delta = delta_ff + delta_fb                               # kivant kerek-szog [rad]
        ref_deg = math.degrees(delta)
        saturated = abs(ref_deg) > LA_LIMIT_DEG
        ref_deg = max(-LA_LIMIT_DEG, min(LA_LIMIT_DEG, ref_deg))  # a GYARI burok betartasa
        return ref_deg, saturated
