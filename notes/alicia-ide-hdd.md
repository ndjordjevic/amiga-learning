---
title: IDE hard drive (HDD) on Alicia 1200 / A1200
source: Web research, Amiga forum, EAB, Alicia manual
---

# IDE hard drive (HDD) on Alicia 1200 / A1200

Deep-dive on using a **2.5" IDE (PATA) hard drive** on the Alicia 1200 or Amiga 1200. CF/SD and adapters are covered separately; this note is **HDD only**.

## Interface

- **Alicia 1200:** **44-pin 2.5" IDE** header (**H8**) — same as original A1200 ([Alicia BOM](notes/alicia-bom-r1_6.md), [manual](notes/alicia1200-manual.md)).
- **Connector:** 44-pin IDC (2.5" laptop IDE). Pins 41–44 carry **+5 V** and GND so a 2.5" drive can be powered from the cable if the cable and header carry power.
- **Controller:** Built-in IDE is **Gayle** (A1200) / **AA-GAYLE** (Alicia); device name in software is **`scsi.device`**. Single channel; one cable, typically two devices (master/slave) via cable select or jumpers.

## What you need (HDD only)

| Item | Notes |
|------|--------|
| **2.5" PATA/IDE hard drive** | 44-pin (2.5" laptop IDE). **Not** 40-pin 3.5" PC IDE unless you use a 40→44 adapter + separate 5 V. |
| **44-way IDE ribbon cable** | 2.5" IDE, short (e.g. 5 cm, 15 cm, or 30 cm). One end to board **H8**, other to drive. Must be **44-way** so power reaches the drive (pins 41–44). e.g. [AmigaKit 2.5" IDE 44-way 30 cm](https://www.amigakit.com/hard-drive-cable-30cm-p-590.html), [Amiga Shop 2.5" IDE ribbon 5 cm / 15 cm](https://www.amiga-shop.net/). |
| **Power** | If the 44-way cable does **not** carry 5 V to the drive, supply 5 V (e.g. from ATX or a molex→2.5" adapter). Alicia/ATX: take 5 V from the same PSU that feeds the board. |

**Buffered IDE (optional):** For a **single** 2.5" HDD you can connect the cable directly from H8 to the drive. For **multiple** IDE devices or longer cables, a **buffered** adapter (e.g. A1200/A600 4xIDE Buffered Interface, or a buffered CF-IDE that also exposes a 44-pin for a second device) improves signal quality. See [A1200/A600 4xIDE Buffered IDE Interface](https://wiki.amiga.org/index.php/A1200/A600_4xIDE_Buffered_IDE_Interface), [AmigaKit 4xIDE](https://www.amigakit.com/a1200a600-4xide-buffered-interface-p-465.html).

## Drive capacity and filesystem

- **Hardware:** Gayle IDE does **not** impose a strict size limit. Users report **10 GB–320 GB+** (even 1 TB with the right setup). The limit is **filesystem and driver**, not the interface.
- **Old FFS (e.g. Workbench 3.0/3.1):** Partition size effectively **up to 4 GB** without patches.
- **FFS from AmigaOS 3.9+ / 3.2:** Larger partitions supported.
- **SFS, PFS, etc.:** No practical partition limit for normal use.
- **AmigaOS 3.2:** Use HDToolBox to partition; set **MaxTransfer** (see below). For large drives, use a modern filesystem or FFS as per OS 3.2 docs.

## MaxTransfer (important)

Gayle IDE uses **8-bit sector count** in ATA commands. If **MaxTransfer** is too large, the driver can send invalid commands and cause corruption or failures.

- **Recommended:** **MaxTransfer = 0x1FE00** (255 × 512 bytes). Set in HDToolBox for each partition (or in the drive’s tool types / mount list).
- **If a drive is flaky:** Try **0xFE00** (127 × 512 bytes).
- **AmigaOS 3.2:** HDToolBox and Install guide often mention 0x1FE00 for A1200/Alicia IDE. See `notes/amigaos-3-2-install-guide.md` (Partition and format).
- **IDEFix / patched scsi.device:** Can relax MaxTransfer for some setups; not required for a single 2.5" HDD if you set 0x1FE00.

References: [IDE & Max Transfer (EAB)](https://eab.abime.net/showthread.php?t=45491), [A1200 PATA EIDE hard drive (Amiga.org)](https://forum.amiga.org/index.php?topic=56775.30).

## Which 2.5" PATA HDDs work

- **Type:** 2.5" **PATA / IDE** (44-pin). Laptop-style.
- **Reported working (examples):** Various 10–320 GB 2.5" PATA drives (IBM, Toshiba, WD, Hitachi, etc.). e.g. WD3200BEVE (298 GB) and many 80–160 GB units.
- **Jumper:** Set as **master** (or cable select if the cable supports it). Second device on the same cable = slave.
- **40-pin 3.5" PC IDE:** Not directly compatible with the 44-pin header. You’d need a 40→44 pin adapter and separate 5 V/12 V for the drive; 2.5" PATA is simpler.

## Availability of 2.5" PATA HDDs

- **New:** 2.5" PATA IDE drives are **no longer made**. New retail stock is essentially gone.
- **Used / refurbished:** Still available on eBay, Amiga dealers, and second-hand channels (e.g. 80–250 GB 2.5" PATA, often listed as “laptop IDE”). Expect used or refurbished units; test before relying on them.
- **Why CF/SD later:** Many people use **CF** or **SD** via a 44-pin CF-IDE (or SD-IDE) adapter instead of a mechanical HDD: same IDE interface, same cable from H8, but solid-state and easier to source. That’s documented separately; this note is HDD-only.

## Installation outline (HDD only)

1. **Hardware:** 2.5" PATA HDD + 44-way IDE ribbon. Connect ribbon from Alicia **H8** to the drive. Ensure 5 V to the drive (via cable or separate lead).
2. **Boot:** From floppy or other boot media (e.g. Install3.2) so you can run HDToolBox.
3. **HDToolBox:** Add the drive (device **scsi.device**), read config, partition. Set **MaxTransfer = 0x1FE00** per partition; **Direct SCSI** on. Save changes, reboot if asked.
4. **Format:** Format partitions (e.g. FFS) and install the OS. See `notes/amigaos-3-2-install-guide.md`.

## Alicia 1200 specifics

- **H8:** 44-pin 2.5" IDE header; same pinout as A1200. Same cable and drive requirements.
- **Power:** Board is ATX; 5 V for a 2.5" HDD comes from the same PSU (via the 44-way cable or a separate 5 V line).
- **Cable length:** Short ribbon (5–15 cm) is enough for internal mounting; 30 cm if the drive is further away.

## References

- [A1200 PATA EIDE hard drive?](https://forum.amiga.org/index.php?topic=56775.30) (Amiga.org)
- [IDE & Max Transfer](https://eab.abime.net/showthread.php?t=45491) (EAB)
- [Max. size HDD on A1200?](https://eab.abime.net/showthread.php?t=5320) (EAB)
- [A1200/A600 4xIDE Buffered IDE Interface](https://wiki.amiga.org/index.php/A1200/A600_4xIDE_Buffered_IDE_Interface) (AmigaWiki)
- [AmigaKit 2.5" IDE 44-way cable](https://www.amigakit.com/hard-drive-cable-30cm-p-590.html)
- `notes/amigaos-3-2-install-guide.md` — Partition and format, MaxTransfer
- `notes/hardware-learning-plan.md` — Storage section (CF later)
