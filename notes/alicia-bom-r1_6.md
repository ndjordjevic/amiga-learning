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
- CN9: 50-pin video port JAE **TX24-50R-6ST-H1E** (50 contacts, 2-row, 1.27 mm pitch, through-hole receptacle). **Compatible alternative:** JAE **TX24A/TX25A** series (same pitch, same mating interface and board footprint); use 50-position receptacle from that series if TX24 is unavailable.
- CN7: 24-pin ATX power Molex 39306247.
- H8: 44-pin 2.5-inch IDE header.
- H6: 22-pin clock port header (alt 44-pin header available).

## Obsolete/legacy parts list

**What “obsolete” means here:** These parts are **no longer manufactured** (or are end-of-life). You cannot order them as new stock from normal distributors (DigiKey, Mouser, etc.). You need to source **used** chips (e.g. from old Amigas), **NOS** (new old stock) from surplus/small suppliers, or a **compatible replacement** if one exists.

- Custom chipset: ALICE, LISA, AA-GAYLE, BUDGIE, MOS8520s, ROMs, ADV101.
- CPU: MC68EC020 (U1).
- DRAM and RTC parts listed as obsolete (HM514260AJ8, **MSM6242B**, etc.).
- **U28:** Socket = On-Shore ED18DT (18-pin DIP). **IC for U28 = MSM6242B** (OKI) — Real-Time Clock (RTC). MSM6242B is obsolete (no longer made); source used/NOS or a compatible RTC. **Still available from Amiga/specialist sellers** (e.g. as “U28 RTC”).
- X1 oscillator listed as obsolete.

## Obsolete parts sourced (this build)

The following obsolete parts were sourced from a specialist Amiga seller (chipset, DAC, CPU, RAM, RTC, crystal). BOM refs and part numbers for reference:

| BOM ref(s) | Part | Notes |
|------------|------|--------|
| U4, U15, U6, U16 | ALICE, LISA, AA-GAYLE, BUDGIE | Chipset (AGA) |
| U26, U25 | 2× MOS8520 PLCC44 (CIA) | I/O, timers |
| U24 | MOS8364 PLCC52 (Paula) | Audio, floppy, serial |
| U19 | ADV101 (Analog Devices) | DAC (video) |
| U1 | MC68EC020 TQFP (Motorola) | CPU |
| U20–U23 | 4× HM514260AJ8 (Hitachi) | DRAM (2 MB chip RAM) |
| U28 | MSM6242B (OKI) | RTC — goes in ED18DT socket |
| X1 | XTAL oscillator 28.37516 MHz | Crystal |

Seller confirmed: U19 = DAC; U24–U26 = smaller chips (2× CIA + Paula); U28 = RTC; crystal = X1.

**ROM chips:** ROMs appear in the BOM as obsolete/legacy parts (no orderable part number for blank chips). The BOM does **not** list blank ROM chips for burning Kickstart or DiagROM — you must source them separately. Order **2× or 4×** blank 512KB ROMs (e.g. **27C400** or AM27C400, 120ns/150ns, or flash equivalent) and burn Kickstart 3.2 / DiagROM yourself. See `notes/hardware-learning-plan.md` (ROM chips, Kickstart, DiagROM) and `notes/rom-burning-guide.md`.

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
