---
title: Alicia 1200 BOM Notes (Rev 1.6)
source: 2025-10-08 BOM Alicia 1200 R1_6.pdf
---

# Alicia 1200 BOM Notes (Rev 1.6)

## BOM metadata
- Green rows = factory populated, gray rows = optional from Enterlogic.
- Parts listed with manufacturer part numbers plus Digikey/Mouser references.
- Document requests reporting inconsistencies to shoe@enterlogic.se and to read the entire document for end notes.

## Pre-programmed devices
- ATF16V8B (U3), PIC16F627A (U5), PIC16F84A (U11), ATTINY24A (U12) listed as pre-programmed.

## Key connectors and headers (examples)
- CN8: 120-pin local bus (Tornado II) JAE TX24-120R-6ST-H1E.
- CN9: 50-pin video port JAE TX24-50R-6ST-H1E.
- CN7: 24-pin ATX power Molex 39306247.
- H8: 44-pin 2.5-inch IDE header.
- H6: 22-pin clock port header (alt 44-pin header available).

## Obsolete/legacy parts list
- Custom chipset: ALICE, LISA, AA-GAYLE, BUDGIE, MOS8520s, ROMs, ADV101.
- CPU: MC68EC020 (U1).
- DRAM and RTC parts listed as obsolete (HM514260AJ8, MSM6242B, etc.).
- X1 oscillator listed as obsolete.

## XR jumper guidance (summary)
- XR2/XR3 mounted for floppy header extra functions.
- XR7/XR9 configure video filter (default 18 MHz).
- XR1 mount to add ROM wait.
- XR4 mounted for Lisa Wide.
- XR5 is NC (KB_Reset pulldown), XR6 is NC (disable keyboard reset warning).
- XR8 is NC; XR10 must not be mounted unless absolutely sure.

## DAC selection notes
- If U19 = VP101: R156 = NC, C64 = NC, U17 = NC, C63 = mounted.
- If U19 = ADV101: R156 = mounted, C64 = NC, U17 = mounted, C63 = mounted.
- Note: some DACs may require C64 to be mounted.

## Sources
- `2025-10-08 BOM Alicia 1200 R1_6.pdf`, pages 1-3.
