AmigaOS 3.2 Installation Readme
Revision 47.1 (29.03.2021)


DISCLAIMER
__________

All of the content contained in this “Installation Guide” (including, 
without limitation, all text and graphics) is covered under US and EU 
copyright and trademark laws by Hyperion Entertainment and other 
companies and are property of Hyperion Entertainment or are presented 
with permission and/or under license. This content may not be used, 
reproduced or made available (including, without limitation) through 
the internet for any commercial purpose without the express written 
permission of Hyperion Entertainment and possibly other copyright or 
trademark owners.

PRODUCT INFORMATION IN THIS “INSTALLATION GUIDE” IS PRESENTED "AS IS" 
AND HYPERION ENTERTAINMENT DOES NOT WARRANT OR GUARANTEE IN ANY WAY 
THAT IT IS COMPLETE OR CORRECT. 


TRADEMARKS
__________

All trademarks are the property of their respective owners. 
 
AmigaOS 3.2 is developed under license.

Any references to any third-party products and/or services is for 
informational purposes only and are not endorsements of third-party 
product or service.


A) Prerequisites for AmigaOS 3.2
--------------------------------

Version 3.2 of the Amiga Operating System (AmigaOS) is available in 
two main packaging options:

- A digital download archive holding essentially the same contents as 
  the CD-ROM edition and/or parts thereof;
  
- A physical distribution that has the same contents as the digital 
  download on a CD-ROM.

Distributors may offer alternative services and optional packages that 
may combine these and other options.

Please carefully review which option you purchased. 

In addition, note that the Kickstart ROMs are model-specific, so ROMs 
cannot always be safely exchanged between models. The same applies to 
the Modules disks.

If you bought a package including a ROM chip, it is advisable to first 
upgrade the ROM to the newer version, and then install the Operating 
System from disk. Otherwise, a lot of extra data will be copied that 
is not strictly necessary.

Before you begin, ensure that you have the following:

*) The new 3.2 ROM chip(s), for the specific Amiga model you want to 
upgrade, if you purchased the ROM chip(s) upgrade.
 
*) A wooden or plastic pry tool for ROM upgrades.

*) The AmigaOS 3.2 CD-ROM or the AmigaOS 3.2 installation disks. 

PLEASE NOTE THAT THERE IS NO OFFICIAL VERSION OF AMIGAOS 3.2 FROM 
HYPERION ON FLOPPY DISKS AND THAT HYPERION DOES NOT PROVIDE SUPPORT 
FOR DISTRIBUTION ON DISKS.

The disk set (if and when made available by a Hyperion distributor) 
should consist of the following disks: 

Disk No.  Label           Bootable    Comments

  1      Install3.2         Yes       Install disk and CD-ROM driver
  2.     Workbench3.2       Yes       Floppy usage requires a 3.2 ROM
  3.     Extras3.2          No
  4.     Classes3.2         No
  5.     Fonts              No
  6.     Storage3.2         No
  7.     GlowIcon3.2        No        GlowIcons
  8.     Backdrops3.2       No        Background pictures
  9.     DiskDoctor         Yes       For diagnostics and salvage
 10.     HDSetup3.2         Yes       SuperKickstart & A2090 support 
 11.     Locale             No        Required for a localized install
 12.     Locale-DE          No        German translations
 13.     Locale-DK          No        Danish translations
 14.     Locale-EN          No        English translations
 15.     Locale-ES          No        Spanish translations
 16.     Locale-FR          No        French translations
 17.     Locale-GR          No        Greek translations
 18.     Locale-IT          No        Italian translations
 19.     Locale-NL          No        Dutch translations
 20.     Locale-NO          No        Norsk translations
 21.     Locale-PL          No        Polish translations
 22.     Locale-PT          No        Portuguese translations
 23.     Locale-RU          No        Rusian translations
 24.     Locale-SE          No        Swedish translations
 25.     Locale-TR          No        Turkish translations
 26.     Locale-UK          No        British translations
 27.     MMULibs            No        Optional CPU support libraries

*) For a disk-only based installation, *one* of the following 
 additional disks are required per Amiga model:
 
 28.     ModulesA500_3.2    Yes       For Amiga 500/1000/CDTV models
 29.     ModulesA600_3.2    Yes       For Amiga 600 models
 30.     ModulesA1200_3.2   Yes       For Amiga 1200 models
 31.     ModulesA2000_3.2   Yes       For Amiga 2000 models
 32.     ModulesA3000_3.2   Yes       For Amiga 3000(T) models
 33.     ModulesA4000D_3.2  Yes       For Amiga 4000D models
 34.     ModulesA4000T_3.2  Yes       For Amiga 4000T models
 35.     ModulesCD32_3.2    Yes       For Amiga CD32 models
 
 Note that the Modules disks contain model-specific data that replaces
 modules in the legacy ROM. The modules disk needs to match the
 specific Amiga model you want to upgrade.
 
*) If your system is equipped with a 68030, 68040, or 68060 CPU, 
additional support software is likely required. This support software 
is typically bundled with your accelerator board on a disk. This disk 
is required for completing the installation and should contain an 
important system component-i.e. a CPU library. Unfortunately, most 
(if not all), 68030 accelerator boards do not provide such a support 
library. A third-party library then becomes necessary.

Some boards include the 68040.library and/or 68060.library in their 
firmware ROM. For such boards, no additional installation step is 
necessary. Consult the manual of your accelerator board for further 
details.

In case you lost the original installation disk, or you own a 
68030-based board, a generic third-party library is necessary and will 
be offered as an option during the AmigaOS 3.2 installation procedure. 


B) CD-ROM Overview
------------------

The AmigaOS3.2 CD-ROM contains all the necessary software to 
successfully deploy AmigaOS 3.2.

If you do not have a CD-ROM unit on your Amiga, you can still grab the
".adf" disk images located in the "ADF" directory of the CD-ROM and 
write them back to physical double density floppies and install 
AmigaOS 3.2 from there, or even use a Gotek-like device.

You may also transfer the contents of this CD-ROM to any other storage 
media (including flash or hard drives), and thus replace the CD-ROM. 
But please remember that you must relabel this new medium volume to 
match the name of the CD-ROM, which in this case is "AmigaOS3.2CD" 
(without quotes), and to be on the safe side, format such medium using 
the AmigaOS FastFileSystem (FFS), making sure that the volume is 
bootable.


C) Hardware Requirements
------------------------ 

1) An Amiga model 1000, 500, CDTV, 2000, 600, 1200, CD32, 3000, 3000T, 
   4000D or 4000T, and minor variants of those.

2) Kickstart ROM 3.1, 3.1.4 or 3.2.

3) At least 2MB of total RAM available. 
   Soft-loading updated OS modules combined with larger hard disk 
   media and additional software customizations may require additional 
   memory above the 2 MB mentioned. The physical 3.2 ROM will help 
   reduce the memory footprint of hard disk loaded modules over an 
   older ROM in addition to yielding other benefits.

4) A hard drive with a minimum of 10 MB of free space.

5) If you don't have AmigaOS 3.1 or higher already installed, you 
   will require a physical copy of the "Install3.2" floppy disk. If in 
   addition to that, you are still using the old 3.1 Kickstart ROM 
   you will also require a physical copy of the "Modules" disk that 
   matches your hardware. 
   
   Amiga CDTV and CD32 users will not require any floppy disks at all 
   as they will be directly using the AmigaOS 3.2 CD-ROM.
   
   Note: Be aware that both CD32 and CDTV-based machines under 
   AmigaOS 3.2 are considered experimentally supported and may 
   require additional effort. Use them at your own risk. Please refer 
   to the AmigaOS 3.2 FAQ (section 14) for further details.
   
6) A CD-ROM drive unit accessible to your Amiga, or the contents of 
   the AmigaOS 3.2 CD-ROM copied on to an Amiga compatible storage 
   medium as outlined in section B.


D) ROM chip(s) installation:
----------------------------

REPLACING A ROM SHOULD ONLY BE ATTEMPTED BY PERSONS WITH SUFFICIENT 
EXPERIENCE AND EXPERTISE AS IT MAY LEAD TO DAMAGE OF THE MOTHERBOARD 
OR THE ROM CHIPS. YOU WILL ALSO REQUIRE AN ANTI-STATIC MAT OR 
EQUIVALENT PROTECTION.

PROCEED AT YOUR OWN RISK!

HYPERION SPECIFICALLY DISCLAIMS ANY LIABILITY FOR ANY DIRECT, 
INDIRECT OR CONSEQUENTIAL DAMAGES SUCH AS, WITHOUT LIMITATION, LOSS OF 
DATA, DAMAGED HARDWARE OR DAMAGED ROM CHIPS.

Please consult with the reseller from whom you acquired your new ROM 
chip(s) for an available ROM chip(s) installation guide.


E) Workbench installation (separate CD-ROM and floppy disk procedures)  
----------------------------------------------------------------------

E.1) CD-ROM based installation:

1. If you have AmigaOS 3.1 or higher already installed and running, 
   jump to step number 6. Also do the same if you will be installing 
   on to a CD32 or CDTV-based Amiga.

2. If you have a physical Kickstart 3.1.4 or 3.2 ROM jump to step 
   number 5.

3. It seems you are using Kickstart 3.1. Cold boot your machine using 
   a physical copy of the "Modules" disk that matches your hardware. 
   
4. Double-click on the "Modules" disk icon to open it. Double-click on
   the "SYStoInstallDisk" icon. You will be requested to swap back and 
   forth the "Modules" disk with the "Install3.2" disk. The procedure 
   will end with the "Install3.2" disk inserted in your drive. Jump to
   step 6.
   
5. Cold boot your machine using a physical copy of the "Install3.2" 
   disk. Double-click on the "Install3.2" icon to open it. Make sure 
   that the CD-ROM mount file in the "Storage" drawer has the proper 
   Tool Types (default is scsi.device UNIT 2) that match your CD-ROM 
   drive. Double-click the "ActivateCDROM" icon.
   
6. Insert the AmigaOS 3.2 CD-ROM on the corresponding amiga drive, and 
   make sure you have the corresponding mount file correctly 
   configured and activated so that the AmigaOS 3.2 CD-ROM disc is 
   accessible.

7. If all previously mentioned steps went fine, you will be now able 
   to double-click on the "AmigaOS3.2CD" icon, and afterwards 
   double-click on "Install" and finally on "StartHere". A window 
   message will appear. Follow its instructions.


E.2) Floppy disk-based installation:

To install the new Workbench software, if you have a new ROM turn 
the machine off first. Then locate the disk labelled "Install_3.2". 
Put this disk into a disk-drive, then turn the machine on. It should 
now boot to a Workbench screen.

Only if you are using an older 3.1 ROM and wish to have large drive 
support (bigger than 4 GB in size), turn the machine off first. Then 
locate the disk labelled "Modules" that matches your hardware. Put 
this disk into a disk-drive, then turn the machine on. It should now 
boot to a Workbench screen. After this happens, click on to the 
"SYStoInstallDisk" icon. This will, after some disk swaps, properly 
transfer the SYS: assign to your Install3.2 disk.

Double-click on the "Install_3.2" icon, and in the newly opened 
window, click on the "Install" drawer, then double-click on "English" 
for an English installation, or any other language for the 
corresponding installation.

The Installer will guide you through the installation process. It will 
also copy the binaries from the current installation to a directory 
named "Old" (or "Alt" for German) on the hard disk. Please follow the 
installation process and insert each of the disks when requested by 
the installation process.


F) Installation of CPU support libraries
----------------------------------------

The AmigaOS 3.2 installation procedure will offer you at some point an
optional set of generic CPU support libraries to take advantage of the 
features provided by your CPU board. However, it is always best to use 
the ones that were originally supplied by the manufacturer of your 
board.

Do not attempt to install 680x0 libraries to support your CPU on your 
own at the same time you are performing the OS installation. Do it 
either before or after.

If you received installation disks with your accelerator card, insert 
them and follow the manual's instructions to copy the support library 
to the right place. If there are no instructions, the following steps 
*may* typically be sufficient:

*) If the support disks of your board include an installation script, 
double-click on the installation icon on this disk and follow the 
instructions on the screen. In particular, the generic package 
described in step "D" comes with such an installation script that 
should be used instead of manual installation.
 
*) If no installation script is available, try the following steps:
- Insert the support disk that came with your board into the first
 disk drive.
- From the Workbench menu, select "Execute command".
- Enter the following:

 copy df0:libs/680?0.library to DH0:Libs

- Click "Execute".

Note that this assumes that your installation target is named "DH0:". 
This may require substitution if your target hard disk's name is 
different. In addition, only the 68040 or the 68060 library is 
required, depending on the type of the CPU on your board. Installing 
both does not harm the installation, though.

NOTE: Previous versions of AmigaOS may have required the 
installation of a "68040 dummy library". This is no longer the case 
for this release of the Operating System.


G) Rebooting
------------

Once all data is installed, reboot the machine. It should now come up
with the new Workbench. You may have to re-arrange icons to your 
liking and may have to adjust the Preferences.

You will also find answers to frequently asked questions in the FAQ 
and the AmigaOS built-in Help subsystem that can be accessed by either
pressing the HELP keyboard key or by typing HELP in a Shell/CLI.


H) Hardware Considerations
--------------------------

a) To use AmigaOS 3.2 with the Vampire V2 accelerator, despite the 
fact that you are using an Amiga 500 or Amiga 600 machine, you should 
utilize the Amiga 1200 AmigaOS 3.2 options. Installation information 
and support if any, should be available at: 
http://www.apollo-accelerators.com

b) To use AmigaOS 3.2 together with an Elbox Mediator PCI busboard, 
make sure you change the Mediator jumper settings to make your 
system functional. Further support should be obtained through the 
hardware manufacturer, which is available at http://www.elbox.com

c) When using a WarpEngine accelerator, please remember (from within 
HDToolBox) to edit the partitions, select the "Direct SCSI" check box, 
save the partitions, reboot, and all will be fine.

d) If you have the ACA500plus accelerator from Individual Computers, 
it is recommended that you flash the 3.2 Kickstart ROM using the 
manufacturer's included utilities.

e) When using a Commodore A2630 accelerator, you will find its RAM 
expansions are sometimes not recognized. This is because the RAM was 
set by Commodore in a non-standard way. The workaround is to use the 
AddMem command available from Aminet.

f) If you are using a Fúria accelerator, please contact its vendor or 
manufacturer to make sure you are using the latest firmware. Old 
firmware seems to be the cause of multiple faults and issues. Also, 
this accelerator seems to be extremely picky on what flash storage 
media brands it will work with.

g) On the Wicher 500i series of accelerators, for the WicherBootMenu 
to work, you must use:

C:LoadModule >NIL: DEVS:WicherBootMenu

placed at the beginning of Startup-sequence. More support should be 
available from its manufacturer at https://www.7-bit.pl/

h) The Vampire 1200 V2 has technical issues that prevents both 
the Indivision MK2 scandoubler and some PCMCIA expansions from 
actually working. This is not an AmigaOS-related issue. A solution, if 
any, should be available from http://www.apollo-accelerators.com

i) Some hardware expansions emulate the Gayle Amiga custom chip to be 
able to provide storage features. The machines containing such 
expansions will most of the time be detected as another machine type 
during installation because of this. So please follow the Install 
process suggestion on Module installation even if it seems wrong at 
first sight, because if not, you may end up with a non-working storage 
media controller. This is particularly the case with expansions such 
as Apollo-Computers Vampire 500, IrixLabs Classic 520, most of the 
Terrible Fire product line, among many others. 

j) Please note that if you will be using a CDTV-based Amiga, you will 
require an additional CDTV Extended ROM set which must be from the 
year 1992 or later (earlier, or 1.0 and 2.9 beta versions won't work, 
while 2.7 and 2.30 versions will do just fine). Please refer to the 
AmigaOS 3.2 FAQ (section 14) for further details.
   
k) Please be aware that test reports have shown that the TF536 
accelerator requires the MMULib package to be installed for the IDE 
interface to work at correct speed (The MMULib package is available as
an AmigaOS 3.2 installation option).


You carefully read this far? 
Great! Then you are on the road for success.


Hyperion Entertainment and the Classic AmigaOS development team want 
to thank you for purchasing AmigaOS 3.2.

Your support is vital to allow us to continue development labor. 

We also extend our thanks to the AmigaOS 3.2 beta testers. 

You can further back our efforts by buying some AmigaOS related 
merchandise which you can find here:

https://shop.spreadshirt.net/amigaos/

