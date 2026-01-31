---
title: CF/SD on internal IDE (Alicia 1200 / A1200)
source: Web research, Amiga forums, alicia-ide-hdd.md
---

# CF/SD on internal IDE (Alicia 1200 / A1200)

Using a **CF card** (or **SD card** via adapter) on the **internal IDE** (H8) as the main or boot drive. Same interface and software as a 2.5" PATA HDD; solid-state and easier to source.

## Interface (same as IDE HDD)

- **Header:** Alicia/A1200 **H8** — 44-pin 2.5" IDE. **Gayle / AA-GAYLE**; device name **`scsi.device`**.
- **Cable:** Same **44-way 2.5" IDE ribbon** (H8 → adapter). Cable carries 5 V on pins 41–44 if the adapter needs it.
- **MaxTransfer:** Same as HDD — set **MaxTransfer = 0x1FE00** in HDToolBox for each partition. See `notes/alicia-ide-hdd.md` (MaxTransfer section).

## What you need

| Item | Notes |
|------|--------|
| **CF-IDE adapter (buffered)** | 44-pin for A600/A1200; plugs into H8. Buffered type recommended (e.g. [Amiga Shop CF-IDE buffered](https://www.amiga-shop.net/en/Amiga-Hardware/Amiga-classic-hardware/CF-IDE-adapter-buffered-for-Amiga-600-1200::1230.html)). Often has a pass-through for a second IDE device (e.g. real HDD or second CF). |
| **2.5" IDE ribbon cable** | 5–15 cm (or 30 cm); H8 → CF-IDE adapter. Same as for IDE HDD (e.g. Amiga Shop 5 cm / 15 cm). |
| **CF card** | Standard CompactFlash. Many brands work; avoid very cheap/no-name. Often 2–32 GB for AmigaOS. |
| **Or: SD card + SD–IDE adapter** | Some adapters take SD instead of CF (or dual CF/SD). Same IDE side; plug into H8 like CF-IDE. |

## Why CF/SD instead of HDD

- **Availability:** New CF/SD cards and adapters are easy to find; 2.5" PATA HDDs are obsolete (used/refurb only).
- **Same software:** Partition and install with HDToolBox and Install3.2 exactly like a 2.5" HDD. Same MaxTransfer (0x1FE00), same filesystems (FFS, etc.).
- **Removability:** CF (and some SD adapters) can be pulled and written on a PC (e.g. for install source or backup), then put back in the Amiga.

## Installation outline

1. **Hardware:** CF-IDE adapter + ribbon from **H8** to adapter; insert CF (or SD) into adapter. Power from cable or board.
2. **Boot:** From floppy (e.g. Install3.2) or other boot media so HDToolBox can see the card.
3. **HDToolBox:** Add drive (device **scsi.device**), read config, partition. Set **MaxTransfer = 0x1FE00** per partition; **Direct SCSI** on. Save, reboot if asked.
4. **Format & install:** Format partitions (e.g. FFS), run AmigaOS 3.2 installer. See `notes/amigaos-3-2-install-guide.md`.

## Relation to other storage

- **PCMCIA CF:** A **CF2PCMCIA** adapter in the **PCMCIA slot** is a *second* storage path — removable, good for Amiga ↔ PC transfer (needs compactflash.device + FAT95). The **internal** CF-IDE is for the main/boot IDE drive.
- **IDE HDD:** Same H8, same cable type, same MaxTransfer and install steps. See `notes/alicia-ide-hdd.md` for capacity, filesystem, and HDD-specific details.

## References

- `notes/alicia-ide-hdd.md` — IDE interface, MaxTransfer, partition/format
- `notes/amigaos-3-2-install-guide.md` — Partition and install from CF or other source
- `notes/hardware-learning-plan.md` — CF-IDE adapter and cable in order list
