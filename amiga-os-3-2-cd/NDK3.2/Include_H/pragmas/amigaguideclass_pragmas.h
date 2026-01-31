#ifndef PRAGMAS_AMIGAGUIDECLASS_PRAGMAS_H
#define PRAGMAS_AMIGAGUIDECLASS_PRAGMAS_H

/*
**	$Id: amigaguideclass_pragmas.h 40.2 2001-07-08 12:50:28 olsen Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_AMIGAGUIDECLASS_PROTOS_H
#include <clib/amigaguideclass_protos.h>
#endif /* CLIB_AMIGAGUIDECLASS_PROTOS_H */

/* "amigaguide.class" */
/*--- functions in V40 or higher (Release 3.1) ---*/
#pragma libcall AmigaGuideClassBase ObtainEngine 1e 00
#pragma libcall AmigaGuideClassBase LoadXRef 24 9802
#pragma libcall AmigaGuideClassBase ExpungeXRef 2a 00
#pragma libcall AmigaGuideClassBase AddPathEntries 30 0802
#pragma libcall AmigaGuideClassBase CopyPathList 36 801
#pragma libcall AmigaGuideClassBase FreePathList 3c 801
#pragma libcall AmigaGuideClassBase ParsePathString 42 18003
#pragma libcall AmigaGuideClassBase LockE 48 21803
#pragma libcall AmigaGuideClassBase OpenE 4e 21803
#pragma libcall AmigaGuideClassBase SetCurrentDirE 54 1802
#pragma libcall AmigaGuideClassBase GetAGString 5a 001
#pragma libcall AmigaGuideClassBase AddAGHostA 60 90803
#pragma libcall AmigaGuideClassBase RemoveAGHostA 66 9802
#pragma libcall AmigaGuideClassBase AddXRef 6c 109804
#pragma libcall AmigaGuideClassBase GetXRef 72 801

#endif /* PRAGMAS_AMIGAGUIDECLASS_PRAGMAS_H */
