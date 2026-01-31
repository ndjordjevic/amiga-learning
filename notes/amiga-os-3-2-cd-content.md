---
title: AmigaOS 3.2 CD content (amiga-os-3-2-cd folder)
source: Extracted/copied from AmigaOS 3.2 CD-Rom
---

# AmigaOS 3.2 CD content — analysis

The `amiga-os-3-2-cd/` folder is the contents of the AmigaOS 3.2 CD-Rom (or equivalent download), laid out as an Amiga volume. It can be used as the **install source** for AmigaOS 3.2 (e.g. from a CF card or another drive, or as reference for writing ADFs to floppies).

## Top-level structure

| Folder / file | Purpose |
|---------------|---------|
| **ADF/** | Floppy disk images (35 ADFs). Write these to real floppies or use with Gotek for install. |
| **ROM/** | Kickstart ROM images (A1200, A3000, A4000, A4000T, CDTV, etc.). For flashing/burning physical ROMs or emulator use. |
| **Install/** | Installer scripts and helpers: StartHere, HDToolBox launcher, VirtualFloppies (mount ADFs), ReadMe.txt, PartitionAndFormat.txt. |
| **C/**, **S/**, **System/**, **Tools/**, **Utilities/**, **Libs/**, **Devs/**, **Prefs/**, **L/**, **WBStartup/** | Minimal runtime so the CD (or copied volume) can be used as a bootable “Amiga Preinstallation Environment” (AmigaPE). |
| **NDK3.2/** | Native Development Kit (headers, SFDs, docs, tools) for developers. |
| **GlowIconsCollection/** | Optional GlowIcons (2300+ icons). |
| **FAQs/** | FAQ documents. |
| **Labels/** | Printable labels for floppies, CD, CF, etc. (PNG). |
| **S/AmigaOS3.2CD.MD5.hashes** | MD5 checksums for integrity checking. |

## ADF floppies (for Alicia 1200)

- **Install3.2.adf** — Boot disk + installer + CD-ROM driver. **Use this to boot** for a fresh install.
- **Workbench3.2.adf** — Bootable Workbench (requires Kickstart 3.2).
- **Extras3.2.adf**, **Storage3.2.adf**, **Fonts**, **Classes3.2**, **GlowIcons3.2**, **Backdrops3.2**, **Locale***, **DiskDoctor**, **HDSetup3.2**, **MMULibs** — Non-boot disks; installer asks for them when needed.

For **Alicia 1200** (with Kickstart 3.2): write **Install3.2.adf** to a floppy, boot from it, then point the installer at this folder (or at the AmigaOS 3.2 CF card) as the source.

## ROM images (A1200)

- **ROM/kicka1200.rom** — Combined A1200 Kickstart 3.2 (for emulators or splitting).
- **ROM/kicka1200-lo.bin**, **ROM/kicka1200-hi.bin** — Low/high ROM images for **physical 2×ROM** A1200 boards (e.g. Alicia).

Use these to burn physical ROMs or with an emulator; do not redistribute.

## Using this folder as install source

From the official ReadMe (Install/ReadMe.txt):

- If you **copy this folder** to an Amiga-accessible drive (e.g. CF, IDE), **rename the volume to `AmigaOS3.2CD`** (no spaces). Format with FFS and make it bootable if you want to boot from it (AmigaPE).
- Then: boot from **Install3.2** floppy, run **Install → StartHere**, and choose **AmigaOS3.2CD** as the source and your target partition as the destination.
- Alternatively, write the ADFs to floppies and install from floppies (installer will ask for each disk).

## Install flow (summary)

1. **Kickstart 3.2** in the machine.
2. **Boot** from Install3.2 floppy (or from AmigaPE if volume is set up and bootable).
3. Run **Install → StartHere**; select source = this volume (or AmigaOS 3.2 CF) and destination = target partition.
4. Insert or mount disks/volumes when the installer asks.
5. Reboot and boot from the new system.

## References

- `amiga-os-3-2-cd/Install/ReadMe.txt` — Full installation guide (prerequisites, CD vs floppy, ROM install, CPU libs, hardware notes).
- `amiga-os-3-2-cd/Install/PartitionAndFormat.txt` — Partitioning and formatting with HDToolBox.
- `amiga-os-3-2-cd/S/AmigaOS3.2CD.MD5.hashes` — Verify integrity of the tree (paths use volume name `AmigaOS3.2CD:`).
