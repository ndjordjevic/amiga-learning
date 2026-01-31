---
title: Floppy drive and storage (Alicia 1200 / A1200)
source: Web research, Alicia manual, Amiga forum
---

# Floppy drive and storage (Alicia 1200)

## Real floppy on Alicia 1200

Alicia 1200 has the same **34-pin internal floppy header** as the original Amiga 1200 (Shugart pinout). You can use a **real floppy drive**; a raw PC floppy will **not** work without an adapter (see below).

### Interface

- **Connector:** 34-pin IDC (same physical connector as PC floppy, but **pinout is Shugart/Amiga**, not IBM/PC).
- **Cable:** Use an **Amiga A1200 floppy cable** (e.g. [Amiga Kit](https://www.amigakit.com/a1200-floppy-disk-drive-cable-amiga-1200-p-568.html), [Amiga Shop](https://www.amiga-shop.net/)); a PC floppy cable has the wrong pin assignments (drive select and motor lines differ).

### Option 1 — Original or Amiga-compatible floppy drive (recommended for “real” floppy)

Use a drive that speaks **Shugart** and matches the A1200 internal form factor:

| Drive model | Notes |
|-------------|--------|
| **Chinon FZ-354** | Original A600/A1200 style; DD. |
| **Chinon MZ-354** | Compatible A600/A1200. |
| **Mitsumi D357T2** | A1200-compatible. |
| **Mitsumi D359M3D** | A1200-compatible. |
| **Panasonic JU-253-043P** | A1200-compatible. |

**What you need:** One of the drives above (or equivalent Amiga 1200 floppy) + **A1200 floppy ribbon cable**. Alicia’s floppy header is A1200-compatible; no extra adapter needed for these drives.

**Where to look:** Retro Amiga suppliers (e.g. Amiga Kit, Amiga Shop, Analogic UK, Retro Passion). Search for “Amiga 1200 floppy drive” or “A1200 internal floppy”.

### Option 2 — PC floppy drive + adapter

Standard **PC floppy drives** use the **IBM** pinout (different drive select/motor pins). They do **not** work when plugged directly into the Amiga/Alicia floppy header.

To use a **PC floppy** you need an **adapter** that converts Shugart (Amiga) ↔ IBM (PC):

- **[AmigaPCDriveAdapter](https://github.com/gianlucarenzi/AmigaPCDriveAdapter)** — PCB project for PC floppy ↔ Amiga.
- **[EZ-FD](https://github.com/indigolemon/EZ-FD)** — “Allow standard PC floppy drives to be used with an Amiga”.

With one of these adapters you can use a common PC 3.5" floppy drive (usually 1.44 MB; the Amiga will use it in DD mode for 880 KB disks). You still need a cable that fits the Alicia floppy header and the adapter (or drive), as per the project docs.

### Option 3 — Gotek / floppy emulator (floppy alternate)

A **Gotek** with **FlashFloppy** (or **HxC**) firmware emulates a floppy using a USB stick (ADF files); it connects to the same 34-pin Shugart Amiga floppy interface. You can use it **instead of** a real floppy, or **alongside** one (with a dual-FDD solution). Alicia 1200 has the same floppy header as A1200, so A1200 Gotek solutions are compatible.

**Gotek vs GoDrive (not the same thing):**

| Term | Meaning |
|------|--------|
| **Gotek** | The **floppy emulator hardware** itself: small unit with 34-pin floppy connector, USB port for a stick, and firmware (e.g. FlashFloppy or HxC). A generic product used on Amiga, Atari, PC, etc. You can buy “a Gotek” on its own and mount it instead of (or alongside) a real floppy. |
| **GoDrive1200** / **GoDRIvE1200 PRO** | **Specific A1200 products** that *include* a Gotek but add a PCB, cabling, and breakout box so you can **keep your real internal floppy** and **also** have a Gotek, and **switch** between them (both present as DF0, one at a time; no case cutting). So: **GoDrive = Gotek + dual-drive switcher** for A1200. |

**Types:**

| Type | Description |
|------|--------------|
| **Internal replace** | Gotek replaces the internal floppy; 3D-printed or OEM-style mount, OLED optional. No case cutting on A1200-style installs. |
| **Internal + keep real floppy** | PCB sits on the 34-pin floppy header; you switch between real FDD and Gotek (both as DF0). No case mod. |
| **External** | Adapter (e.g. M1) from Amiga external DB23 floppy port to Gotek; shows as DF1. Boot from DF0 (internal) or DF1 depends on Kickstart and selector. |

**Where to buy (A1200-compatible; also suitable for Alicia 1200):**

| Retailer | Product | Notes |
|----------|--------|--------|
| [AMIGAstore.eu](https://amigastore.eu/323-usb-floppy-emulator-gotek.html) | USB Floppy Emulator Gotek | FlashFloppy or HxC; optional OLED, rotary, Amiga/Atari cable; optional M1 external adapter, DF0 selector. |
| [Retro Passion](https://www.retropassion.co.uk/product/godrive1200-gotek-for-amiga-a1200-and-a500/) | **GoDrive1200** Gotek A1200/A500 | Keep internal floppy **and** Gotek; switch between both (both as DF0). OLED, rotary, FlashFloppy. No case cutting. SLIM version for Mitsumi/TEAC/Panasonic drives. |
| [DigitalRetroBay](https://digitalretrobay.co.uk/godrive1200-pro/) | **GoDRIvE1200 PRO** | Same idea: keep real FDD + Gotek, switch on the go. Larger 2.42" OLED, rotary, buzzer, FFC ribbon. FlashFloppy. |
| [Gotek-Retro EU](https://www.gotek-retro.eu/shop-gotek-oled-internal-a1200/) | Gotek Internal A1200 (0.91" OLED) | Internal replace; bracket, FlashFloppy, no drilling. |
| [Retro Passion](https://www.retropassion.co.uk/product/amiga-1200-gotek-drive-oled-display-flashfloppy/) | Amiga 1200 Gotek Drive + 3D Mount + OLED | Internal replace; 3D mount, OLED, FlashFloppy. |
| [Simulant UK](https://www.simulant.uk/shop/Amiga-1200-Floppy-Disk-Drive-Emulator-OLED-BRACKET-MOUNT-Gotek-USB-A1200) | A1200 Gotek OLED bracket/mount | Mount/bracket only; you add Gotek + FlashFloppy. |
| [HxC](https://hxc2001.com/floppy_drive_emulator/) | HxC (SD/USB or Gotek firmware) | Original HxC emulator (SD or USB) or HxC firmware for Gotek; supports many machines including Amiga. |

**Firmware:** Most units ship with **FlashFloppy** ([Keir Fraser](https://github.com/keirf/flashfloppy)); some offer **HxC**. Both support ADF and work on Shugart/Amiga interface. You need a USB stick (FAT32) with ADF files; USB stick usually not included.

**Escom A1200:** If the machine is an Escom A1200 (PC-style floppy), a bridge wire between pin 2 and 34 under the FDD connector must be cut or removed for Amiga-compatible floppy or Gotek to work. Not relevant for Alicia 1200.

## Summary

| Goal | Solution |
|------|----------|
| **Real floppy, no adapter** | Amiga-compatible drive (Chinon, Mitsumi, Panasonic as above) + **A1200 floppy cable**. |
| **Real floppy, use a PC drive** | **PC floppy** + **AmigaPCDriveAdapter or EZ-FD** + appropriate cable. |
| **Floppy alternate** | Gotek (or HxC) with FlashFloppy — internal replace, or keep real floppy + Gotek (GoDrive1200 / GoDRIvE1200 PRO). See “Option 3” and retailer table above. |

**You do not need an “old Amiga 1200 floppy” per se** — you need a drive that is **Amiga/A1200-compatible** (Shugart) and an **A1200 floppy cable**. Original Chinon/Mitsumi/Panasonic units are one way to get that; the other is a PC drive plus an adapter.

## References

- [Amiga 1200 floppy connector / PC compatibility](https://forum.amiga.org/index.php?topic=38378.0) (Amiga.org).
- [Amiga floppy cable for Gotek (twist)](https://rasterirq.com/2022/03/amiga-floppy-cable-for-gotek-with-a-twist/) (RasterInterrupt).
- [AmigaPCDriveAdapter](https://github.com/gianlucarenzi/AmigaPCDriveAdapter) — PC floppy ↔ Amiga.
- [EZ-FD](https://github.com/indigolemon/EZ-FD) — PC floppy on Amiga.
- Alicia 1200 manual: internal floppy header with extra breakout; ATTiny handles floppy detection.
- [FlashFloppy](https://github.com/keirf/flashfloppy) — firmware and FF config guide.
- [HxC floppy emulator](https://hxc2001.com/floppy_drive_emulator/) — SD/USB hardware and Gotek firmware.
