---
title: Hardware Learning Plan (Amiga 1200 / Alicia 1200)
---

# Hardware Learning Plan (Amiga 1200 / Alicia 1200)

This is the hardware-only plan. We will add software/OS topics later.

## 1) Schematics acquisition and study (start here)
- [x] Locate original Amiga 1200 schematics (full board set)
- [ ] Study A1200 schematics and update notes
- [ ] Locate Alicia1200 schematics (r1.6 and r2.0)
- [ ] Study Alicia1200 schematics and update notes
- [ ] Compare A1200 vs Alicia1200 at high level (ports, buses, power)

## 2) System overview and board architecture
- [ ] A1200 baseline architecture overview (chipset roles, buses, memory map)
- [ ] Alicia 1200 differences vs stock A1200 (ports, expansions, power)
- [ ] Rev differences (r1.6 vs r2.0) and what changes matter

## 3) Core custom chips (AGA)
- [ ] ALICE (Agnus successor) responsibilities and timing
- [ ] LISA (graphics) responsibilities, bitplanes, sprites, display modes
- [ ] PAULA (audio + I/O timing) summary
- [ ] GAYLE / AA-GAYLE (IDE, PCMCIA, address decode) summary
- [ ] BUDGIE (bus controller / glue logic) summary
- [ ] CIA 8520s (I/O, timers, interrupts) summary

## 4) CPU and ROM
- [ ] 68EC020 basics (bus widths, address space, timings)
- [ ] Kickstart ROM layout (HI/LO, sizes, address mapping)
- [ ] ROM access timings and DSACK behavior

## 5) Memory subsystem
- [ ] Chip RAM configuration (1 MB vs 2 MB) and DRAM types
- [ ] Address/data bus termination and signal integrity considerations
- [ ] Refresh timing basics and common failure symptoms

## 6) Video subsystem
- [ ] Native 15 kHz RGB and sync options
- [ ] Video filter behavior and configuration jumpers
- [ ] VP2 / video slot signals and intended use cases

## 7) Audio subsystem
- [ ] Paula audio path and filtering
- [ ] RCA output chain and component roles

## 8) I/O ports and headers
- [ ] PS/2 keyboard and mouse handling
- [ ] Joystick ports and CD32 pad behavior
- [ ] Serial and parallel headers (pinouts and cabling)
- [ ] Floppy header signals and extra breakout behavior

## 9) Storage interfaces
- [ ] 2.5" IDE interface (signals, power, typical issues)
- [ ] PCMCIA slot (16-bit) overview and common expansions
- [ ] Clock port usage and common devices

## 10) Expansion and local bus
- [ ] Tornado V2 120-pin local bus: purpose, signal groups
- [ ] A1200 CPU slot compatibility and adapter considerations
- [ ] Zorro II signals and limitations (non-DMA)

## 11) Power and reset
- [ ] ATX power integration and soft power flow
- [ ] Power_OK and ATX_PS_ON behavior
- [ ] Reset logic and keyboard reset behavior
- [ ] RTC + supercap behavior

## 12) MCU / programmable logic on Alicia
- [ ] ATtiny24A firmware responsibilities
- [ ] ATF16V8 and PICs roles (as documented)
- [ ] ISP header usage and safe flashing steps

## 13) Connectors and mechanicals
- [ ] Placement images: orientation, keying, clearance
- [ ] Standoffs, card height, and connector sourcing notes

## 14) Build process and testing
- [ ] Recommended assembly order (SMD first, connectors later)
- [ ] Pre-power checks (shorts, rail checks, oscillator)
- [ ] Minimal boot test setup (video + PSU)
- [ ] Common troubleshooting flow (no boot, no video, memory errors)

## 15) Schematics deep dive (by section)
- [ ] CPU + ROM section
- [ ] DRAM + address/data bus
- [ ] Video section
- [ ] Audio section
- [ ] I/O and ports
- [ ] Power and reset

## 16) BOM study and sourcing
- [ ] Read BOM notes and identify factory vs optional parts
- [ ] Obsolete parts list and modern equivalents (if any)
- [ ] Critical parts to source early (custom chips, DRAM, connectors)
