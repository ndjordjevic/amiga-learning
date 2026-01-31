---
title: AmigaOS 3.2 installation guide (Alicia 1200 / A1200)
source: AmigaOS 3.2 CD ReadMe, PartitionAndFormat, amiga-os-3-2-cd content
---

# AmigaOS 3.2 installation guide

Step-by-step for installing AmigaOS 3.2 on an Alicia 1200 (or stock A1200) when you have the **AmigaOS 3.2 CD-Rom** (or the `amiga-os-3-2-cd` folder / AmigaOS 3.2 CF card as install source).

## Prerequisites

- **Kickstart ROM 3.2** for A1200 (both ROMs) installed.
- **At least 2 MB** total RAM.
- **Target drive:** IDE/CF with at least **10 MB** free (e.g. a CF in a CF-IDE adapter, or a second partition). For a **fresh** drive you must partition and format it first (see below).
- **Install source** (one of):
  - AmigaOS 3.2 **CD-Rom** in a CD drive the Amiga can see, **or**
  - **AmigaOS 3.2 CF card** (the one with install files) in the CF-IDE adapter, **or**
  - A **volume** (e.g. CF or IDE drive) that contains the full CD contents and is named **`AmigaOS3.2CD`** (see `notes/amiga-os-3-2-cd-content.md`).
- **Boot medium** for the first run: a physical **Install3.2** floppy (or Gotek with Install3.2.adf). You create this from the CD: write **Install3.2.adf** from `amiga-os-3-2-cd/ADF/` to a floppy (e.g. with WinUAE or a PC floppy writer).

## Making an install CF from the CD

You can use a CF card as the install source by copying the full AmigaOS 3.2 CD onto it.

1. **Copy the CD contents**  
   On a PC or Mac, copy the **entire** contents of the AmigaOS 3.2 CD to the CF card (e.g. via a USB CF reader). Keep the same folder structure (ADF/, ROM/, Install/, C/, S/, etc.).

2. **Volume name on the Amiga**  
   When the CF is used in the Amiga, the **partition/volume** that holds those files must be named exactly **`AmigaOS3.2CD`** (no spaces). Set this when creating the partition in HDToolBox or when formatting.

3. **Format**  
   The partition must be FFS so the Amiga can read it. If you prepare the CF on a PC (e.g. FAT32) and only copy files, the Amiga will not see it as a valid install source. Either:
   - **On the Amiga (or WinUAE):** Create an FFS partition named `AmigaOS3.2CD` (HDToolBox + format), then copy the CD contents onto that partition (e.g. from the real CD in a CD drive, or from a shared folder in WinUAE), or  
   - Use a pre-made **AmigaOS 3.2 CF card** from Amiga Shop (or similar), which is already set up as an install source.

Once the CF has the full CD contents and the volume is named **`AmigaOS3.2CD`**, use it as the install source when you run Install → StartHere (see Option A below).

## Option A — Boot from Install3.2 floppy, install from CF card (recommended)

1. **Create the boot floppy**  
   Write **Install3.2.adf** (from the CD or from `amiga-os-3-2-cd/ADF/`) to a DD floppy.

2. **Prepare the target drive (if new)**  
   If the CF/drive has no partitions yet, you must partition and format it first. Boot from Install3.2, then use **HDToolBox** (see “Partition and format” below). At least one partition must be **bootable** and formatted (FFS).

3. **Boot the Amiga**  
   Insert the **Install3.2** floppy and power on. It should boot to Workbench.

4. **Connect the install source**  
   - **If using the AmigaOS 3.2 CF card (install files):** It should already be in the CF-IDE adapter on the internal IDE. The installer will see it as an IDE volume; choose the partition that contains the install files as the **source**.  
   - **If using a copied CD volume:** Ensure a drive (e.g. second CF) is formatted and has the full CD contents, and that its **volume name is exactly `AmigaOS3.2CD`**.

5. **Start the installer**  
   Open the **Install3.2** disk (or the AmigaOS3.2CD volume if you’re already there), then **Install** → **StartHere**. Follow the on-screen instructions: choose **language**, then **source** (the AmigaOS3.2CD volume or the partition with install files), then **destination** (your target partition, e.g. DH0:).

6. **Complete the install**  
   The installer will copy files and may ask for other disks (Extras, Storage, Fonts, Locale, etc.). If the source is the CF/volume with full CD contents, it will read from there; otherwise insert the corresponding floppies when asked.

7. **Reboot**  
   Remove the floppy and boot from the partition you installed to (e.g. DH0:). You should get the new Workbench.

## Option B — Install from floppies only

1. Write all needed ADFs from `amiga-os-3-2-cd/ADF/` to floppies (at least **Install3.2**, **Workbench3.2**, **Extras3.2**, **Storage3.2**, **Fonts**, **Classes3.2**, **GlowIcons3.2**, **Locale**, etc.).

2. Boot from **Install3.2**.

3. Run **Install** → **StartHere**. When asked for **source**, choose **Floppy** (or the Install disk). For **destination**, choose your pre-partitioned and formatted IDE/CF partition.

4. Insert each floppy when the installer asks for it (Workbench, Extras, Storage, Fonts, etc.).

## Partition and format (fresh drive)

If the target CF/drive has no Amiga partitions yet:

1. Boot from **Install3.2** (or from a volume that has the Install files and HDToolBox).

2. Run **HDToolBox** (from Install drawer or via **CopyToRAMandRun_HDToolBox** if using the CD/volume). Set the correct **device name** (e.g. `scsi.device` for built-in A1200/Alicia IDE) in the icon’s Tool Types if needed.

3. In HDToolBox: **Change drive type** → **Define new** → **Read configuration** → OK. Then **Partition drive**: create at least one partition, enable **Bootable** for the one you will install to. In **Advanced options**, enable **Direct SCSI** for each partition (unless you have an A2090 or similar). Set **MaxTransfer** to `0x1FE00` if required by your controller. **Add/Update** the file system (FFS, version 47). **Save changes to drive**.

4. **Reboot** if prompted. The new partition(s) appear as unformatted. **Format** the boot partition (Icons → Format disk…) with **Quick Format**. After that, the partition is ready as the install **destination**.

Detailed steps: see `amiga-os-3-2-cd/Install/PartitionAndFormat.txt`.

## After the first install — updates (3.2.1, 3.2.2, hotfix)

If you have a **license code** (e.g. from your CD-Rom purchase):

1. **Register** the code at [Hyperion Entertainment](https://www.hyperion-entertainment.com/) to access update archives.
2. **Install in order:** AmigaOS 3.2 → then **3.2.1** → then **3.2.2** → then the **hotfix** (e.g. 3.2.2.1). Apply each update before the next.
3. Update archives (e.g. `Update3.2.1.lha`, `Update3.2.2.lha`, `Hotfix3.2.2.1.lha`) may also be available from your vendor or from trusted mirrors (e.g. retrobuddys.com) as referred to in your purchase email.

## Alicia 1200–specific notes

- **IDE:** Alicia 1200 has a **44-pin 2.5" IDE** header (H8). Use a **CF-IDE adapter** for A600/A1200 (e.g. buffered from Amiga Shop, or simple adapter + 5 cm cable from Retro Buddys). Connect the adapter with a **2.5" IDE ribbon** (5 cm or 15 cm) between board and adapter.
- **Two CFs:** You can use one CF as **install source** (AmigaOS 3.2 CF card or a volume named AmigaOS3.2CD) and another as **destination**, or one CF with two partitions (one source, one destination).
- **Kickstart:** Alicia uses **two ROMs** (low/high). Use **kicka1200-lo.bin** and **kicka1200-hi.bin** from `amiga-os-3-2-cd/ROM/` for burning physical ROMs (or the combined **kicka1200.rom** for emulators).

## References

- **Full official guide:** `amiga-os-3-2-cd/Install/ReadMe.txt` (prerequisites, ROM install, CD vs floppy, CPU libs, hardware notes).
- **Partition/format:** `amiga-os-3-2-cd/Install/PartitionAndFormat.txt`.
- **CD content layout:** `notes/amiga-os-3-2-cd-content.md`.
- **Alicia storage/CF:** `notes/hardware-learning-plan.md` (Storage section), Amiga Shop / Retro Buddys CF-IDE adapter pages.
