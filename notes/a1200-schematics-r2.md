---
title: Amiga 1200 Schematics (Rev 2) Notes
source: A1200_R2.pdf
---

# Amiga 1200 Schematics (Rev 2) Notes

## Document overview
- Rev 2 “Channel Z” schematic set, 16 pages, dated 1992-03-13 with revision notes.
- Key component index includes 68EC020 CPU, Alice, Lisa, Paula, AA-Gayle, Budgie, CIAs, video encoder/DAC, and major connectors.

## Major subsystems by page
- Page 2: Processor and core components (CPU, Alice, AA-Gayle, optional FPU).
- Page 3: DRAM and memory/bus interface around Budgie.
- Page 4: Video section (Lisa, DAC, encoder, clocking, filters).
- Page 5: Paula and audio filters plus joystick ports.
- Page 7: Serial and parallel ports (1488/1489 level shifting).
- Page 8: Floppy subsystem and external/internal connectors.
- Page 10: ROM + RTC + flash options (ROM wait-state logic, optional flash, RTC).
- Page 11: PCMCIA/credit card interface (signals and buffers).
- Page 12: Memory expansion and IDE connector.
- Page 13: Power distribution and decoupling overview.
- Page 15: LED PCB assembly schematic.

## Connectors and ports (from key component index)
- DB23 video output, RCA composite video, RCA audio left/right.
- DB9 joystick/mouse ports (x2).
- DB25 serial and DB25 parallel ports.
- Internal/external floppy connectors + power header.
- PCMCIA slot, IDE header, and memory expansion edge connector.
- Square DIN power supply connector.

## Study notes to extract next
- CPU/ROM signals: _AS, _DSACK, ROMEN, overlay, wait-state logic.
- Budgie DRAM control signals and chip RAM configuration.
- Lisa video path: DAC/encoder chain and clocking (PAL/NTSC).
- AA-Gayle: IDE/PCMCIA control signals, interrupt routing.
- Power distribution: rail filtering, decoupling clusters, and test points.

## Sources
- `A1200_R2.pdf`, pages 1-16.
