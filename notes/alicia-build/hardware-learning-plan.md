---
title: Hardware Learning Plan (Amiga 1200 / Alicia 1200)
---

# Hardware Learning Plan (Amiga 1200 / Alicia 1200)

This is the hardware-only plan. We will add software/OS topics later.

## 0) Platform choice (A1200 vs Alicia 1200)
- [x] Decide primary learning/build target: Chosen Alicia 1200 r2.0

## 0.1) BOM study and parts procurement
- [x] Study Alicia1200 BOM to learn what components should be ordered — see `notes/alicia-build/alicia1200-r1_6-bom.md`
- [ ] Order parts to build Alicia1200 — see `notes/alicia-build/alicia1200-parts-ordered.md` for detailed procurement tracking

## 0.5) Alicia board inspection and assembly strategy
- [ ] High-level plan for **initial board inspection** when the Alicia 1200 PCB arrives (identify what is factory-soldered vs. what you must add; sanity-check for visible defects, solder bridges, missing parts). Details will go into a separate inspection/build document later.
- [ ] High-level plan for **testing parts you will solder** (resistors, capacitors, ICs, sockets, connectors, etc.) before/while soldering — basic checks where possible (continuity, orientation/markings, pin condition; plan which parts are “expensive/critical” to double-check).
- [ ] Outline **soldering strategies** (order of assembly, SMD vs through-hole approach, flux/inspection habits) and **incremental testing steps** (what to test after each major cluster: power rails, clock, minimal boot, basic video). This will be expanded into a dedicated step-by-step build-and-test guide.

## 1) Alicia 1200 build extras (beyond motherboard)
- [x] Decide target use case: Amiga in-depth learning
- [ ] ROM chips for burning Kickstart and DiagROM — order blank chips (e.g. 2× or 4× **27C400** or equivalent 512KB EPROM/flash) for burning; see `notes/alicia-build/rom-burning-guide.md`.
- [ ] Kickstart 3.2 (or 3.2.3) for A1200 — burn from CD (`amiga-os-3-2-cd/ROM/`) or from `amiga-os-3-2-hyperion-downloads` (3.2.3) using your programmer and the ROM chips above; or buy pre-made from [Amiga Shop](https://www.amiga-shop.net/en/Amiga-Software/AmigaOS-Amiga-operation-systems/AmigaOS-3-2-Rom::1069.html) (you already have a licence).
- [ ] DiagROM (diagnostic ROM for board bring-up and troubleshooting) — [diagrom.com](https://www.diagrom.com/). Burn 32bit-LO.bin and 32bit-HI.bin to ROM chips (same type as above). See `notes/alicia-build/rom-burning-guide.md`.
- [x] AmigaOS 3.2 CD-Rom (purchased, without physical Kickstart ROMs) — [Amiga Shop](https://www.amiga-shop.net/en/Amiga-Software/AmigaOS-Amiga-operation-systems/AmigaOS-3-2-CD-Rom::1068.html) — **AmigaOS 3.2 licence already held** (from CD purchase).
- [ ] AmigaOS 3.2 CF card (optional; install-file source for quick install; you already have a licence for ordering) — [Amiga Shop](https://www.amiga-shop.net/en/Amiga-Software/AmigaOS-Amiga-operation-systems/AmigaOS-3-2-CF-card::1070.html)
- [ ] CF2PCMCIA adapter (removable CF for data transfer Amiga ↔ PC; needs compactflash.device + FAT95 on Amiga) — [Amiga Shop](https://www.amiga-shop.net/en/Amiga-Hardware/Amiga-classic-hardware/CF2PCMCIA-adapter-for-Amiga-600-1200::1006.html)
- [ ] CF-IDE adapter (buffered) for A600/A1200 (main/boot CF + pass-through for 2nd IDE device) — [Amiga Shop](https://www.amiga-shop.net/en/Amiga-Hardware/Amiga-classic-hardware/CF-IDE-adapter-buffered-for-Amiga-600-1200::1230.html)
  - [ ] 2.5" IDE ribbon cable 5 cm or 15 cm (required: board H8 → CF-IDE adapter; e.g. Amiga Shop “2,5 inch IDE ribbon cable 5 cm” / “15 cm”)
- [ ] Power:
  - [ ] Suitable PSU: standard 24‑pin ATX, quality over wattage. See `notes/alicia-build/alicia-psu.md`.
  - [ ] Power cabling and connectors for Alicia 1200
- [ ] Input:
  - [ ] Keyboard (A1200-compatible or USB/PS/2 solution supported by Alicia)
  - [ ] Mouse / game controller plan
- [ ] Video:
  - [ ] Chosen video output path (RGB/SCART, VGA, HDMI scaler, etc.)
  - [ ] Appropriate cables and, if needed, external scaler/adapter
- [ ] Storage:
  - [ ] **Floppy drive (real):** Amiga-compatible internal floppy (e.g. Chinon FZ-354/MZ-354, Mitsumi D357T2/D359M3D, Panasonic JU-253-043P) + **A1200 floppy cable** (Shugart 34-pin; do not use a raw PC floppy cable — pinout differs). Alicia 1200 has the same 34-pin floppy header as A1200. Alternatively: PC floppy + **adapter** (e.g. [AmigaPCDriveAdapter](https://github.com/gianlucarenzi/AmigaPCDriveAdapter), [EZ-FD](https://github.com/indigolemon/EZ-FD)). See `notes/alicia-build/alicia-floppy-storage.md`.
  - [ ] **Floppy alternate (Gotek / emulator):** If you want **both** real floppy and Gotek, get **GoDrive** — [GoDrive1200](https://www.retropassion.co.uk/product/godrive1200-gotek-for-amiga-a1200-and-a500/) (Retro Passion; ask for SLIM if using Mitsumi/TEAC/Panasonic drive) or [GoDRIvE1200 PRO](https://digitalretrobay.co.uk/godrive1200-pro/) (DigitalRetroBay). Switch between real FDD and Gotek as DF0; no case cutting. Or plain Gotek to replace floppy only ([AMIGAstore](https://amigastore.eu/323-usb-floppy-emulator-gotek.html), [Gotek-Retro](https://www.gotek-retro.eu/shop-gotek-oled-internal-a1200/)). See `notes/alicia-build/alicia-floppy-storage.md`.
  - [ ] **IDE HDD (2.5" PATA):** 2.5" 44-pin PATA hard drive + **44-way 2.5" IDE ribbon cable** (5–30 cm, H8 → drive; cable carries power on pins 41–44). Set **MaxTransfer = 0x1FE00** in HDToolBox. 2.5" PATA HDDs are obsolete (used/refurb on eBay); buffered adapter optional for multiple devices. See `notes/alicia-build/alicia-ide-hdd.md`.
  - [ ] **IDE CF/SD (internal):** CF card (or SD card with SD→IDE adapter) + **CF-IDE adapter** (buffered, see above) on H8 = main/boot drive; same cable, same **MaxTransfer = 0x1FE00**, same `scsi.device`. Solid-state, easy to source. See `notes/alicia-build/alicia-ide-cf-sd.md`.
  - [ ] **Optional PCMCIA storage:** CF card + **CF2PCMCIA adapter** (see above) in the PCMCIA slot = additional removable storage; good for data transfer Amiga ↔ PC. On Amiga you need **compactflash.device** and **FAT95** (or similar) to mount FAT-formatted CF. Other PCMCIA options: SRAM, network, etc.
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
