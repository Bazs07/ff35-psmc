# lca_sim — within-envelope lane-centering: injector + controller + simulation

A runnable LCA reference for the Focus Mk3.5 that can be designed **without a car**. It centers via the
factory `LaRefAng` (lane-keep nudge, **±5.87°**) channel — **within the factory safety envelope**
(the ±5.87° ceiling is deliberately respected in the code too). openpilot-style model: the system
provides a continuous steering reference, but the power-steering unit's own limits remain in effect.

## Files
| File | What it does |
|---|---|
| `can_lane_assist.py` | **DBC-accurate** CAN encoder/decoder for the lane-assist messages (Lane_Assist_Data1/2/3, EPAS_INFO). Motorola (@0+) bit packing, with a self-test. |
| `controller.py` | The lane-centering lateral controller (lookahead-based, damped). Input: lane offset, heading, road curvature, speed → output: `LaRefAng` [degrees], **saturated to ±5.87°**. |
| `sim.py` | Closed-loop kinematic (bicycle) simulation on a test road (straight → highway arc → sharp curve). Shows what it can do and where it hands control back to the driver. |

## Running it
```bash
F:/Sync3/eszkozok/python/python.exe lca_sim/can_lane_assist.py   # the encoder's self-test (ALL OK)
F:/Sync3/eszkozok/python/python.exe lca_sim/sim.py               # the closed-loop simulation
```
(stdlib-only; if you get an error on accented-character output: `PYTHONIOENCODING=utf-8`.)

## The result (what the simulation proves)
- **Straight + highway arc (R=250 m, 100 and 130 km/h):** from a 0.30 m initial offset it **pulls to
  center in under ~50 m** and holds there (e_y ≈ 0.00 m); on the arc `LaRefAng` ≈ 0.6° — **far from
  the ±5.87° limit**. → the within-envelope nudge **is enough for highway lane centering**.
- **Sharp curve (R=28 m, urban):** `LaRefAng` hits the **±5.87° envelope (SAT)** and isn't enough → the
  car exits the lane. **In real use this is where the driver takes over** — this is the envelope's
  intended, safe behavior.

## How this becomes a real injector (based on `21_lca_can_frames.md`)
1. Feed `controller.step(...)`'s output (`LaRefAng` degrees) into the `encode_lane_assist_data2()` frame
   (CAN ID **0x3CB**), + `encode_lane_assist_data1(lka_active=1)` (0x3CB activation).
2. The inputs (lane offset, heading, road curvature) come from the **camera's lane messages** (in a real
   system, by silencing/overriding the camera — this is the hardware step that requires a car).
3. The `EPAS_INFO` (0x82) feedback is read by `decode_epas_info()` (column torque, angle-control status).
4. **Hands on the wheel:** the system measures driver attention from the steering torque (see
   `22_handson_detection.md`). Under intended use (a light hand on the wheel) the hands-off
   timeout **is not an obstacle** — the intervention still goes through.

## What can be further refined (still without a car)
- Controller tuning (k_la, lookahead) to taste for comfort/precision; speed-dependent gain.
- More accurate camera lane-model inputs (decoding the CGEA lane messages).
- Noise/latency robustness (modeling the real CAN chain).

> This package takes within-envelope LCA as far as it can go without a car. Actual long-term
> acceptance (timeout length), the hardware injector, and real tuning require a bench/car test.
