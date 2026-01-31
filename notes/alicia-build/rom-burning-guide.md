---
title: Burning ROMs for Amiga 1200 / Alicia 1200 (Kickstart and DiagROM)
source: DiagROM download page, Amiga forums, Alicia schematics notes
---

# Burning ROMs for A1200 / Alicia 1200

How to burn **Kickstart 3.2** or **DiagROM** to physical ROM chips for an Amiga 1200 or Alicia 1200. The board uses **two ROMs** (low and high word); you need a **ROM programmer** and either **EPROMs** (one-time or UV-erasable) or **flash ROMs** (reprogrammable without UV).

## What you need

### Hardware

| Item | Purpose |
|------|--------|
| **ROM programmer** | **Already have:** **XGECU T48** (Updated TL866II Plus). Programs EPROM/flash via USB; use **Minipro** or XGecu software. **27C400 is not natively supported** — you need an **adapter** (see below). |
| **Adapter for 27C400** | T48/TL866II Plus has no built-in 27C400; use a **42-pin adapter** for 27C400/800/160/322 (e.g. [27c160-tl866-adapter](https://github.com/mafe72/27c160-tl866-adapter) or commercial equivalent). In software select **AM27C4096**; disable **Check ID** and **Pin Detect**. |
| **2× blank ROM chips** | For A1200: **512KB each** (e.g. **AM27C400** or **27C400** EPROM, 120ns or 150ns; or **flash** equivalents). With the T48 you need the adapter above for 27C400. |
| **UV eraser** (optional) | Only if you use **EPROMs** and want to reuse them; EPROMs are erased with UV light. **Flash ROMs** do not need UV — you reprogram them in the programmer. |
| **A1200/Alicia ROM sockets** | The board has two ROM sockets (U6A = high, U6B = low). Chips must be inserted with correct orientation (pin 1). |

### Software

- **Programmer software** for your device (e.g. **Minipro** for TL866, or the software that came with the Willem).
- **ROM image files** (see below).

### ROM image files

**Kickstart 3.2 (A1200)**  
- **On the CD:** The AmigaOS 3.2 CD `ROM/` folder contains **kicka1200-lo.bin** and **kicka1200-hi.bin** (base 3.2, i.e. 3.2.0). You can burn these yourself with your programmer.  
- **3.2.3 in the ROM — this repo:** If you have the **`amiga-os-3-2-hyperion-downloads`** folder (Hyperion downloads for registered licence holders), extract **AmigaOS-3.2.3.lha** and use the A1200 ROM images inside **Update3.2.3/ROMs/**:
  - **A1200.47.115-lo.bin** → **LO** chip (socket **U6B**)
  - **A1200.47.115-hi.bin** → **HI** chip (socket **U6A**)
  - Each is 512 KB; burn with your programmer like the CD ROMs. You do **not** need to buy physical 3.2.3 ROMs from Amiga Shop if you have these files.  
- **Alternatively:** Register at [Hyperion Entertainment](https://www.hyperion-entertainment.com/) and download **AmigaOS-3.2.3.lha** from the [downloads](https://www.hyperion-entertainment.com/index.php/downloads) page; it contains the same **Update3.2.3/ROMs/** A1200 lo/hi images. Or buy physical **AmigaOS 3.2 ROM (currently 3.2.3)** from [Amiga Shop](https://www.amiga-shop.net/en/Amiga-Software/AmigaOS-Amiga-operation-systems/AmigaOS-3-2-Rom::1069.html) (licence required).

**DiagROM (A1200)**  
- **Download section:** [diagrom.com/index.php/download/](https://www.diagrom.com/index.php/download/)  
  - **Stable** (release, currently 1.3): [DiagROM.zip](https://www.diagrom.com/files/stable/DiagROM.zip)  
  - **Daily** (beta, currently 2.0): [DiagROMV2.zip](https://www.diagrom.com/files/daily/DiagROMV2.zip)  
- Each zip contains **32bit-LO.bin** and **32bit-HI.bin** (already byteswapped for EPROM).  
  - **32bit-LO.bin** → program into **LO** chip (socket **U6B**).  
  - **32bit-HI.bin** → program into **HI** chip (socket **U6A**).

**Socket summary (A1200 / Alicia 1200)**

| Socket | Chip   | Image (Kickstart 3.2.0, CD) | Image (Kickstart 3.2.3, Hyperion) | Image (DiagROM)   |
|--------|--------|-----------------------------|-----------------------------------|-------------------|
| **U6A** | High   | kicka1200-hi.bin            | A1200.47.115-hi.bin               | 32bit-HI.bin      |
| **U6B** | Low    | kicka1200-lo.bin            | A1200.47.115-lo.bin               | 32bit-LO.bin      |

## ROM types

- **27C400** (or AM27C400): 512KB × 8-bit, DIP. Common for A1200; 120ns or 150ns is typical. **EPROM** = needs UV eraser to erase and reuse.
- **Flash ROMs**: Same capacity, reprogrammable in the programmer (no UV). Some vendors (e.g. [GGLabs](https://gglabs.us/)) sell pre-flashed or blank flash ROMs for Amiga; you still need a programmer to flash them unless you buy pre-programmed.

## Step-by-step (generic)

1. **Get the images**  
   - Kickstart: from your AmigaOS 3.2 CD `ROM/` (or `amiga-os-3-2-cd/ROM/`).  
   - DiagROM: from the [download section](https://www.diagrom.com/index.php/download/) (Stable or Daily zip).

2. **Install programmer software**  
   - Install the software for your programmer (e.g. Minipro on Windows/Mac/Linux for TL866).

3. **Select device**  
   - With **T48 + 27C400 adapter:** in the software choose **AM27C4096** and **disable “Check ID” and “Pin Detect”**; follow your adapter’s DIP/bank settings for 27C400. Without an adapter, 27C400 is not in the T48’s native list.

4. **Program each chip**  
   - **LO chip:** Load **kicka1200-lo.bin** (or **32bit-LO.bin** for DiagROM), insert the LO chip in the programmer, then **Program**.  
   - **HI chip:** Load **kicka1200-hi.bin** (or **32bit-HI.bin**), insert the HI chip, then **Program**.  
   - Some software has “high word” / “low word” or “split” options when programming a single 32-bit image; for A1200 you use two separate files and two chips, so load each file onto its chip directly.

5. **Verify**  
   - Use the programmer’s **Verify** function after programming to confirm the contents match the file.

6. **Install on the board**  
   - Power off the Amiga. Insert the **LO** chip in **U6B** and the **HI** chip in **U6A**, with **pin 1** in the correct position (check board silkscreen or schematic). Power on.

## Programmer notes

- **This project’s programmer (already have):** **XGECU T48** (Updated TL866II Plus). **27C400 is not in the native device list** — you need an **adapter** (e.g. 42-pin adapter for 27C400/800/160/322; see [XGECU T48 adapter for 27c160/322/400/800](https://www.arcade-projects.com/threads/xgecu-t48-tl866ii-g3-adapter-for-27c160-322-400-800.29016/) or [mafe72/27c160-tl866-adapter](https://github.com/mafe72/27c160-tl866-adapter)). In the software select **AM27C4096** and disable **Check ID** and **Pin Detect**. With the adapter you can burn **DiagROM** (32bit-LO.bin, 32bit-HI.bin) and **Kickstart** (kicka1200-lo/hi.bin or A1200.47.115-lo/hi.bin); program one chip per file, install LO in **U6B**, HI in **U6A**.
- **TL866 / Minipro:** Very common. Supports many EPROMs; for 27C400 you may need an adapter (e.g. DIP40 16-bit adapter) — check the device list in Minipro.  
  - See e.g. [Programming Amiga Kickstart with TL866CS](https://electronics.stackexchange.com/questions/558359/programming-amiga-kickstart-with-tl866cs).
- **Willem:** Often needs a **27Cxxxx / 16-bit EPROM adapter** to program 27C400.  
- **Pre-programmed ROMs (optional):** Amiga Shop sells physical Kickstart ROMs **(currently 3.2.3)** — [AmigaOS 3.2 Rom](https://www.amiga-shop.net/en/Amiga-Software/AmigaOS-Amiga-operation-systems/AmigaOS-3-2-Rom::1069.html) (licence required). Use this if you want 3.2.3 in ROM but don’t have 3.2.3 image files to burn. If you have the CD and a programmer, you can burn base 3.2 from the CD; for 3.2.3, register at Hyperion and check for ROM image downloads, or buy the physical 3.2.3 set.

## Alicia 1200 specifics

- Alicia 1200 uses the same **two ROMs (HI/LO)** and pinout as the original A1200; socket positions may be labeled on the PCB (e.g. U6A, U6B).  
- ROM timing is handled by the board (e.g. ATF16V8 on Alicia); 120ns or 150ns 27C400 is typically fine.  
- See `notes/alicia-build/alicia-schematics-troubleshooting.md` for ROM/CPU notes.

## References

- **DiagROM:** [diagrom.com](https://www.diagrom.com/) — **Download section:** [diagrom.com/index.php/download/](https://www.diagrom.com/index.php/download/) (file names, socket positions U6A/U6B, Stable vs Daily).
- **Kickstart images:** AmigaOS 3.2 CD `ROM/` or `notes/amiga-os-3-2-cd-content.md`.
- **A1200 ROM layout:** `notes/alicia-build/alicia-schematics-troubleshooting.md`.
- **Amiga forum:** e.g. [Burning Kickstart ROMS](https://forum.amiga.org/index.php?topic=16096.0), [Willem + 27C400](https://forum.amiga.org/index.php?topic=22870.0).
- **TL866/Kickstart:** [Programming Amiga Kickstart with TL866CS](https://electronics.stackexchange.com/questions/558359/programming-amiga-kickstart-with-tl866cs).
