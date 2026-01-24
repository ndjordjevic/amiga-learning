---
title: Alicia 1200 Schematics and Troubleshooting Notes
source: Alicia 1200 Schematics & Troubleshooting.pdf
---

# Alicia 1200 Schematics and Troubleshooting Notes

## ROM and CPU notes
- A1200 Kickstart uses two ROMs (HI/LO) as 27C200; larger ROMs (27C400/27C800) can be used if fully filled.
- ATF16V8 handles 32-bit ROM access, sets ROM speed, and controls autovector interrupts.
- If IRQ tests hang, check _AVEC. During ROM access, activity should be visible on _DSACK_0 and _DSACK_1.

## DRAM notes
- U22/U23 optional; U20/U21 alone yields 1 MB Chip RAM, all four yields 2 MB.
- Memory address bus uses series termination resistors; first check DRAM soldering and those resistors.
- Verify control signals (_BRAS etc.) and ensure _ROE is low.

## Power/ATTiny troubleshooting
- ATTiny24A manages power-on reset, keyboard reset, floppy detection, chassis buttons, and ATX power.
- If board does not start, check:
  - POWER_OK on pin 5 (should go low shortly after soft power on).
  - 8 MHz clock on pin 2.
  - ATX_PS_ON on pin 11 should go low after power button press.
- If no green LED, verify pin 12 goes low when pressing power button.

## Sources
- `Alicia 1200 Schematics & Troubleshooting.pdf`, pages 1-5.
