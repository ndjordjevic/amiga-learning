---
title: Hardware Learning Plan (Amiga 1200 / Alicia 1200)
---

# Hardware Learning Plan (Amiga 1200 / Alicia 1200)

This is the hardware-only plan. We will add software/OS topics later.

## 0) Platform choice (A1200 vs Alicia 1200)
- [x] Decide primary learning/build target: Chosen Alicia 1200 r2.0
- [ ] Order all necessary components to build Alicia 1200 board
  - [ ] JAE TX24-50R-6ST-H1E (connector) — was out of stock: [Digi‑Key](https://www.digikey.se/en/products/detail/jae-electronics/TX24-50R-6ST-H1E/1283506)
  - [ ] On-Shore ED18DT — was out of stock: [Digi‑Key](https://www.digikey.se/en/products/detail/on-shore-technology-inc/ED18DT/4147597)

## 1) Alicia 1200 build extras (beyond motherboard)
- [x] Decide target use case: Amiga in-depth learning
- [ ] Power:
  - [ ] Suitable PSU: standard 24‑pin ATX, quality over wattage. See `notes/alicia-psu.md`.
  - [ ] Power cabling and connectors for Alicia 1200
- [ ] Input:
  - [ ] Keyboard (A1200-compatible or USB/PS/2 solution supported by Alicia)
  - [ ] Mouse / game controller plan
- [ ] Video:
  - [ ] Chosen video output path (RGB/SCART, VGA, HDMI scaler, etc.)
  - [ ] Appropriate cables and, if needed, external scaler/adapter
- [ ] Storage:
  - [ ] 2.5\" IDE or CF/SD solution
  - [ ] Optional PCMCIA storage/expansion
- [ ] Tools and test gear:
  - [ ] Soldering, hot air, flux, magnification
  - [ ] Basic diagnostics (multimeter, maybe logic probe/oscilloscope)
- [ ] Cooling / airflow considerations if using a tight or custom case
- [ ] Case and mechanics (lower priority):
  - [ ] A1200-compatible case or custom enclosure
  - [ ] Mounting hardware, standoffs, and shielding as needed

## 2) Schematics acquisition and study (start here)
- [x] Locate original Amiga 1200 schematics (full board set)
- [ ] Study A1200 schematics and update notes
- [ ] Locate Alicia1200 schematics (r1.6 and r2.0)
- [ ] Study Alicia1200 schematics and update notes
- [ ] Compare A1200 vs Alicia1200 at high level (ports, buses, power)

## 3) System overview and board architecture
- [ ] A1200 baseline architecture overview (chipset roles, buses, memory map)
- [ ] Alicia 1200 differences vs stock A1200 (ports, expansions, power)
- [ ] Rev differences (r1.6 vs r2.0) and what changes matter

## 4) Core custom chips (AGA)
- [ ] ALICE (Agnus successor) responsibilities and timing
- [ ] LISA (graphics) responsibilities, bitplanes, sprites, display modes
- [ ] PAULA (audio + I/O timing) summary
- [ ] GAYLE / AA-GAYLE (IDE, PCMCIA, address decode) summary
- [ ] BUDGIE (bus controller / glue logic) summary
- [ ] CIA 8520s (I/O, timers, interrupts) summary

## 5) CPU and ROM
- [ ] 68EC020 basics (bus widths, address space, timings)
- [ ] Kickstart ROM layout (HI/LO, sizes, address mapping)
- [ ] ROM access timings and DSACK behavior

## 6) Memory subsystem
- [ ] Chip RAM configuration (1 MB vs 2 MB) and DRAM types
- [ ] Address/data bus termination and signal integrity considerations
- [ ] Refresh timing basics and common failure symptoms

## 7) Video subsystem
- [ ] Native 15 kHz RGB and sync options
- [ ] Video filter behavior and configuration jumpers
- [ ] VP2 / video slot signals and intended use cases

## 8) Audio subsystem
- [ ] Paula audio path and filtering
- [ ] RCA output chain and component roles

## 9) I/O ports and headers
- [ ] PS/2 keyboard and mouse handling
- [ ] Joystick ports and CD32 pad behavior
- [ ] Serial and parallel headers (pinouts and cabling)
- [ ] Floppy header signals and extra breakout behavior

## 10) Storage interfaces
- [ ] 2.5" IDE interface (signals, power, typical issues)
- [ ] PCMCIA slot (16-bit) overview and common expansions
- [ ] Clock port usage and common devices

## 11) Expansion and local bus
- [ ] Tornado V2 120-pin local bus: purpose, signal groups
- [ ] A1200 CPU slot compatibility and adapter considerations
- [ ] Zorro II signals and limitations (non-DMA)

## 12) Power and reset
- [ ] ATX power integration and soft power flow
- [ ] Power_OK and ATX_PS_ON behavior
- [ ] Reset logic and keyboard reset behavior
- [ ] RTC + supercap behavior

## 13) MCU / programmable logic on Alicia
- [ ] ATtiny24A firmware responsibilities
- [ ] ATF16V8 and PICs roles (as documented)
- [ ] ISP header usage and safe flashing steps

## 14) Connectors and mechanicals
- [ ] Placement images: orientation, keying, clearance
- [ ] Standoffs, card height, and connector sourcing notes

## 15) Build process and testing
- [ ] Recommended assembly order (SMD first, connectors later)
- [ ] Pre-power checks (shorts, rail checks, oscillator)
- [ ] Minimal boot test setup (video + PSU)
- [ ] Common troubleshooting flow (no boot, no video, memory errors)

## 16) Schematics deep dive (by section)
- [ ] CPU + ROM section
- [ ] DRAM + address/data bus
- [ ] Video section
- [ ] Audio section
- [ ] I/O and ports
- [ ] Power and reset

## 17) BOM study and sourcing
- [ ] Read BOM notes and identify factory vs optional parts
- [ ] Obsolete parts list and modern equivalents (if any)
- [ ] Critical parts to source early (custom chips, DRAM, connectors)
