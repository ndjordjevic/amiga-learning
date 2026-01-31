---
title: AmigaOS 3.2 CD contents
---

# AmigaOS 3.2 CD contents

This folder is the contents of the **AmigaOS 3.2 CD-Rom** (or equivalent download), laid out as an Amiga volume. Use it as the **install source** for AmigaOS 3.2 (e.g. from a CF card) or as reference for writing ADFs and burning ROMs.

## Top-level structure

| Folder / file | Purpose |
|---------------|---------|
| **ADF/** | Floppy disk images (35 ADFs). Write to real floppies or use with Gotek for install. |
| **ROM/** | Kickstart ROM images (A1200, A3000, A4000, A4000T, CDTV). For burning physical ROMs or emulator use. |
| **Install/** | Installer: StartHere, HDToolBox launcher, VirtualFloppies, ReadMe.txt, PartitionAndFormat.txt. |
| **C/**, **S/**, **System/**, **Tools/**, **Utilities/**, **Libs/**, **Devs/**, **Prefs/**, **L/**, **WBStartup/** | Minimal runtime for Amiga Preinstallation Environment (AmigaPE). |
| **NDK3.2/** | Native Development Kit (headers, docs, tools). |
| **GlowIconsCollection/** | Optional GlowIcons. |
| **FAQs/** | FAQ documents. |
| **Labels/** | Printable labels (PNG). |
| **S/AmigaOS3.2CD.MD5.hashes** | MD5 checksums for integrity. |
| **Gmail - Amiga OS 3.2 Full Version (incl Update 2) – CD Rom.pdf** | Saved compusys.cc email (license, updates, CF info). |
| **Gmail - Welcome to _Hyperion Entertainment Message Boards_.pdf** | Saved Hyperion forums welcome email. |

## Notes from compusys.cc email (Jan 2024)

Summary from **Peter Jaeger (compusys.cc)** re. **Amiga OS 3.2 Full Version (incl Update 2) – CD Rom**. Source: email 20 Jan 2024; local copy: **Gmail - Amiga OS 3.2 Full Version (incl Update 2) – CD Rom.pdf** in this folder.

### Kickstart ROM

- **“Kickstart ROM”** = **physical ROM chips** for a **physical Amiga**. For **emulator** (e.g. WinUAE) use the ROM images from **ROM/** (e.g. `kicka1200-lo.bin`, `kicka1200-hi.bin`). CD-only is enough for emulation.

### License registration

- Register at [Hyperion Entertainment](https://www.hyperion-entertainment.com/) using the **license code from the invoice**. **Invoice = only proof of license** — do not discard. After registration you can download 3.2.1, 3.2.2, and later updates. Keep the license code with the invoice; do not share or commit it.

### Alternative download sources (updates)

**RetroBuddys** (for registered licence holders):

| Update / hotfix | URL |
|-----------------|-----|
| Update 3.2.1    | `https://www.retrobuddys.com/download/Update3.2.1.lha` |
| Update 3.2.2    | `https://www.retrobuddys.com/download/Update3.2.2.lha` |
| Hotfix 3.2.2.1  | `https://www.retrobuddys.com/download/Hotfix3.2.2.1.lha` |

Install order: **3.2 → 3.2.1 → 3.2.2 → hotfix**. See `notes/amigaos-3-2-install-guide.md`.

### CF card (if supplied)

- **CF adapter + 4 GB CF:** minimal OS 3.2.2 for max compatibility (e.g. A600 2 MB chip RAM). **Pre-made images:** [wb32_a600_glow.zip](https://www.retrobuddys.com/download/wb32_a600_glow.zip) (~2 GB), [wb_3221_clean_small.zip](https://www.retrobuddys.com/download/wb_3221_clean_small.zip). **Tool:** [Win32DiskImager](https://win32diskimager.org/).

### CD-ROM image

- compusys cannot provide the CD-ROM image for download; use the **physical CD** when it arrives.

## Using this folder

### As install source (CF or volume)

1. Copy this **entire** folder to an Amiga-accessible drive (e.g. CF card).
2. On the Amiga, **rename the volume to exactly `AmigaOS3.2CD`** (no spaces). The partition must be FFS.
3. Boot from **Install3.2** floppy (write **ADF/Install3.2.adf** to a floppy first).
4. Run **Install → StartHere**; choose **AmigaOS3.2CD** as source and your target partition as destination.

See **`notes/amigaos-3-2-install-guide.md`** (including “Making an install CF from the CD”).

### Boot floppy

- Write **ADF/Install3.2.adf** to a DD floppy (e.g. with WinUAE or a PC floppy writer). Boot the Amiga from it for a fresh install.

### Burning Kickstart ROMs (A1200)

- **ROM/** contains **kicka1200-lo.bin** and **kicka1200-hi.bin** (base 3.2, i.e. 3.2.0). Burn **LO** → socket **U6B**, **HI** → socket **U6A**.
- For **3.2.3 in ROM**, use the ROM images from **`amiga-os-3-2-hyperion-downloads`** (extract AmigaOS-3.2.3.lha → Update3.2.3/ROMs/A1200.47.115-lo.bin and A1200.47.115-hi.bin).

See **`notes/rom-burning-guide.md`**.

## References

- **Full CD analysis:** `notes/amiga-os-3-2-cd-content.md`
- **Install guide:** `notes/amigaos-3-2-install-guide.md`
- **ROM burning:** `notes/rom-burning-guide.md`
- **Hyperion updates (3.2.3 etc.):** `amiga-os-3-2-hyperion-downloads/README.md`
- **This folder:** `Install/ReadMe.txt`, `Install/PartitionAndFormat.txt`, `S/AmigaOS3.2CD.MD5.hashes`
