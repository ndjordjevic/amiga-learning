---
title: Alicia 1200 PSU Notes
---

# Alicia 1200 PSU Notes

The board uses a **standard 24‑pin ATX** connector (CN7 = Molex 39306247). No external A1200 “brick” PSU.

## Voltages and current

| Rail    | Voltage | Min current |
|---------|---------|-------------|
| +3.3 V  | 3.3 V   | 2 A         |
| +5 V    | 5 V     | 3 A         |
| +12 V   | 12 V    | 2 A         |
| −12 V   | −12 V   | 0.5 A       |
| +5 VSB  | 5 V     | 0.5 A       |

Board draw is similar to an original A1200 (tens of watts). A 300–450 W ATX unit is plenty; quality and low noise matter more than wattage.

## Workbench (bench) PSU — no ATX yet

You can power the board from a **bench PSU** while building. Use an ATX 24‑pin breakout or extension cable: connect each rail and **common ground** to the right pins (see standard ATX 24‑pin pinout). You need all five rails; use a multi-rail bench PSU or several units with shared ground.

- **POWER_OK (gray):** Tie to +5 V (e.g. via 1–10 kΩ) so the board sees “power good” and can boot.
- **PS_ON (green):** Leave open or tie to GND.
- Set current limits on the bench PSU; use a non‑conductive surface.

## Desktop ATX PSU — when you have one

Many ATX cases are sold **without** a PSU; check the listing and buy a 300–450 W ATX PSU separately if needed. Plug the 24‑pin cable into CN7. To turn the PSU on without a case, jumper **PS_ON (green)** to **GND (black)** on the connector, or use the board’s power button once the ATTiny and front-panel are wired.

## Manual and troubleshooting

- **Manual:** Use a quality PSU; more watts is not better. Noisy ground can need connector isolation.
- **No boot:** ATTiny expects POWER_OK and drives ATX_PS_ON. Check POWER_OK, 8 MHz clock (pin 2), and ATX_PS_ON (pin 11). See `notes/alicia-schematics-troubleshooting.md`.

## Links and sources

- Enterlogic: https://www.enterlogic.se/?page_id=607  
- Flamelily (kit): https://shop.flamelily.co.uk/alicia1200  
- Docs: `Alicia1200_Manual.pdf`, `Alicia 1200 Schematics & Troubleshooting.pdf`, `notes/alicia-bom-r1_6.md`.
