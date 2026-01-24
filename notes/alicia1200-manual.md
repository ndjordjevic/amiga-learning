---
title: Alicia 1200 Manual Notes (Rev 1.6)
source: Alicia1200_Manual.pdf
---

# Alicia 1200 Manual Notes (Rev 1.6)

## Snapshot overview
- Mini-ITX Amiga 1200-compatible motherboard focused on AGA chipset with modern connectors and expansion.
- Emphasis on reliability improvements: decoupling, power rails, clock routing, audio chain, and ESD protection.

## Key features
- PS/2 keyboard + mouse (auto switch between mouse/joystick), dual DB9 joysticks, DB15 RGB video, stereo RCA audio.
- Internal headers: serial (DB9 header), parallel (DB25 header), floppy header with extra breakout signals, IDE 2.5", clock port, ATX power, and front-panel LEDs/buttons.
- Expansion: Tornado II 120-pin local bus (A1200 CPU-slot compatible signals + simple ZII), VP2 video slot with auto video switching and filtering.
- 68EC020 CPU, 2 MB Chip RAM, RTC backed by ATX standby and a supercap.
- ESD protection on I/O ports; improved power rails and decoupling; tuned transmission-line resistors.
- Audio chain uses film caps + audio-grade electrolytics; filter characteristics similar to A500 Rev 8 but lower distortion.
- Multi-layer manual routing for signal integrity and EMI reduction.

## Video port configuration
- 15 kHz VGA supported directly; SCART and composite sync options via DIL switches.
- Built-in video filter and monitor switch for scandoubler/RTG integration; sync signals already buffered.
- DIL switch settings:
  - VGA monitor: Switch 3 = Down, Switch 4 = Down.
  - Video monitor (C1084/8833-II): Switch 3 = Up, Switch 4 = Down (C-SYNC on pin 12).
  - SCART RGB: Switch 3 = Up, Switch 4 = Up (C-SYNC on pin 12, +12 V via 4k to pin 4 for status/aspect).
- Cable mapping examples (from VGA HD15):
  - VGA pin 1/2/3 -> DB9 3/4/5 (RGB).
  - VGA pin 12 (C-SYNC) -> DB9 pin 7.
  - SCART: VGA 1/2/3 -> SCART 15/11/7; VGA 4 -> SCART 8; VGA 9 -> SCART 16; VGA 12 -> SCART 20.

## Build guidance and constraints
- Not a beginner build; assemble SMD parts first, connectors later (video connector needed for test run).
- Avoid sockets; avoid logic family substitutions (e.g., 74HC vs HCT); avoid electrolytic substitutions.
- Use quality PSU; more watts is not necessarily better. Noisy PSU ground can require connector isolation.
- Use a quality VGA cable and avoid KVMs that can add interference.

## Troubleshooting and firmware notes
- ATTiny firmware controls power/reset/keyboard/floppy logic; ISP header available.
- For ATTiny flashing: left-most DIL switch up; no keyboard or floppy connected.
- Some hard drives may need warm-reset; experimental firmware can double-reset on cold boot.
- D46 LED load note: board may not start with too light a load on 3.3 V.
- CD32 joypads: port 2 works with PS/2 mouse, but if a pad is also in port 1, PS/2 mouse cannot be connected.
- DRAM must be compatible FPM SOJ40; EDO often works. Tested DRAM list: V53C16258HK40, IC41C16257-35K, NEC42460-80, TC514265DJ-60, KM416C256BJ-7.

## Sources
- `Alicia1200_Manual.pdf`, pages 1-6.
