Native Developer Kit for AmigaOS 3.2 (NDK 3.2 Release 1)
========================================================

At last, here is the long overdue update to the Native Developer Kit. 
More than seventeen years after the last AmigaOS 68k NDK, several 
changes were made to improve the robustness and quality of the new and 
shiny NDK 3.2.

We would like to first point out that out of necessity the NDK will 
have to become a work-in-progress. So updates will have to be made as 
needed and released, because AmigaOS is now a force in motion, not a 
stationary object anymore.

It is also worth noting that tools, examples, and other components 
from previous NDKs are not needlessly duplicated here, so it may be a 
worthwhile endeavor to also seek out on earlier NDKs for complementary 
material.

The current NDK content is laid out as follows:


Autodocs - Autodocs are documentation that reference calling 
--------   conventions for Amiga routines.

Autodocs/AG - Autodocs documentation in AmigaGuide format.
----------- 

Examples - ReAction examples (this includes both their sources and 
--------   binaries).

FD - These are library function description files.
--

Include_H - C language header files that contain declarations for 
---------   functions and values.

Include_I - Assembler language header files that contain declarations 
---------   for functions and values.

lib - A Lib file is a library of functions that are statically linked 
---   to a program.

MuManual - Contains the development documentation for the 
--------   mmu.library, describing its functions and its purposes 
           along with examples.

MuTools - Set of tools that provide debugging facilities. 
-------

ReleaseNotes - Release Notes are a short summary of the changes 
------------   involved at the different stages of a component's 
               development process.
               
SANA+RoadshowTCP-IP - Developer documentation for the SANA-II 
-------------------   networking driver standard and also source code 
                      for the Roadshow TCP-IP stack management, 
                      monitoring and file transfer commands.

SFD - These are library function description files.
---

Tools - Several tools that should make life easier for developers.
-----


Inquiries, bug reports & enhancement requests referring to the NDK 3.2
should be directed to:

https://forum.hyperion-entertainment.com/viewforum.php?f=26

If you have never been bitten by the urge to develop for the Amiga, 
what are you waiting for?

Enjoy the journey, not the destination.
The AmigaOS Team

----------------------------------------------------------------------
Thanks to these kind individuals for their permission to include their 
work:

Olaf Barthel who gave us permission to include his Roadshow related 
development material.

Thomas Richter who gave us permission to include his MMULib 
development material and its associated tools.
----------------------------------------------------------------------