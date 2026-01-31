---
title: AmigaOS 3.2 Hyperion downloads (registered licence holders)
---

# AmigaOS 3.2 Hyperion downloads

This folder contains update archives downloaded from [Hyperion Entertainment](https://www.hyperion-entertainment.com/) (requires AmigaOS 3.2 licence registration).

## Contents overview

| File | Description | ROM images? |
|------|--------------|--------------|
| **AmigaOS-3.2-full.lha** | Full 3.2 (base): CD ISO + key ADFs | No |
| **AmigaOS-3.2.1.lha** | Update 3.2.1 (ADFs, ROMs, ReleaseNotes) | Yes — 47.102 |
| **AmigaOS-3.2.2.lha** | Update 3.2.2 (ADFs, ROMs, ReleaseNotes) | Yes — 47.111 |
| **AmigaOS-3.2.2.1-Hotfix.lha** | Hotfix 3.2.2.1 (packages Update3.2.2/ with ROMs 47.111) | Yes — 47.111 |
| **AmigaOS-3.2.3.lha** | Update 3.2.3 (ADFs, ROMs, ReleaseNotes) | Yes — 47.115 |

## Per-archive context

### AmigaOS-3.2-full.lha (12 files)

- **AmigaOS3.2CD.iso** — Full AmigaOS 3.2 CD image (~78 MB).
- **Install3.2.adf** — Install floppy image.
- **ModulesA1200_3.2.adf**, **ModulesA2000_3.2.adf**, … (A3000, A4000D, A4000T, A500, A600, CD32) — Model-specific module ADFs.
- **Overview3.2.txt**, **ReadMe1st.txt** — Text docs.
- **No ROM binaries** — Base 3.2 ROM images are on the CD (or in `amiga-os-3-2-cd/ROM/`); this archive is ISO + ADFs only.

### AmigaOS-3.2.1.lha (Update3.2.1/)

- **Update3.2.1/ADFs/** — Floppy images: Classes3.2.1, DiskDoctor, Locale (DE, DK, EN, …), ModulesA1200_3.2.1, …, Update3.2.1.adf.
- **Update3.2.1/ROMs/** — **Kickstart ROM images for burning (version 47.102):**
  - **A1200:** `A1200.47.102-lo.bin`, `A1200.47.102-hi.bin` (512 KB each) → U6B, U6A.
  - A3000, A4000, A4000T, CDTVA500A600A2000 (lo/hi or single .bin/.rom).
- **Update3.2.1/ReleaseNotes/**, **ChangeSummary**, **HowToInstall**.

### AmigaOS-3.2.2.lha (Update3.2.2/)

- **Update3.2.2/ADFs/** — Classes3.2.2, DiskDoctor, Locale (incl. CZ, RS), ModulesA1200_3.2.2, …, Update3.2.2.adf.
- **Update3.2.2/ROMs/** — **Kickstart ROM images for burning (version 47.111):**
  - **A1200:** `A1200.47.111-lo.bin`, `A1200.47.111-hi.bin` → U6B, U6A.
  - A3000, A4000, A4000T, CDTVA500A600A2000.
- **Update3.2.2/ReleaseNotes/**, **ChangeSummary**, **HowToInstall**.

### AmigaOS-3.2.2.1-Hotfix.lha

- Contains **Update3.2.2/** (same folder name as 3.2.2), including **ROMs/** with **47.111** (A1200.47.111-lo/hi.bin, etc.). Same ROM version as 3.2.2; hotfix is mainly disk/install fixes. Use these ROMs if you stay on 3.2.2.1; for latest use 3.2.3 ROMs.

### AmigaOS-3.2.3.lha (Update3.2.3/)

- **Update3.2.3/ADFs/** — Classes3.2.3, DiskDoctor3.2.3, Locale (incl. CZ, RS, RU), ModulesA1200_3.2.3, …, Update3.2.3.adf.
- **Update3.2.3/ROMs/** — **Kickstart ROM images for burning (version 47.115) — latest:**
  - **A1200:** `A1200.47.115-lo.bin`, `A1200.47.115-hi.bin` → U6B, U6A.
  - A3000, A4000, A4000T, CDTVA500A600A2000.
- **Update3.2.3/ReleaseNotes/**, **InstallCheck/**, **ChangeSummary**, **HowToInstall**.

## Kickstart ROM versions (A1200)

| Source archive | ROM version | A1200 files (LO → U6B, HI → U6A) |
|----------------|-------------|-----------------------------------|
| AmigaOS-3.2.1.lha | 47.102 | Update3.2.1/ROMs/A1200.47.102-lo.bin, A1200.47.102-hi.bin |
| AmigaOS-3.2.2.lha | 47.111 | Update3.2.2/ROMs/A1200.47.111-lo.bin, A1200.47.111-hi.bin |
| AmigaOS-3.2.2.1-Hotfix.lha | 47.111 | Update3.2.2/ROMs/A1200.47.111-lo.bin, A1200.47.111-hi.bin |
| AmigaOS-3.2.3.lha | 47.115 | Update3.2.3/ROMs/A1200.47.115-lo.bin, A1200.47.115-hi.bin |

For **3.2.3 in ROM** (recommended): extract **AmigaOS-3.2.3.lha** and burn **Update3.2.3/ROMs/A1200.47.115-lo.bin** and **A1200.47.115-hi.bin**. See `notes/rom-burning-guide.md`.

## Install order (on Amiga)

Apply updates in order: **3.2** → **3.2.1** → **3.2.2** → **3.2.2.1 hotfix** → **3.2.3**. See `notes/amigaos-3-2-install-guide.md`.
