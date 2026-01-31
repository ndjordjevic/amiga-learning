#ifndef PRAGMAS_RAMDRIVE_PRAGMAS_H
#define PRAGMAS_RAMDRIVE_PRAGMAS_H

/*
**	$Id: ramdrive_pragmas.h 36.3 1990-11-07 15:53:27 darren Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_RAMDRIVE_PROTOS_H
#include <clib/ramdrive_protos.h>
#endif /* CLIB_RAMDRIVE_PROTOS_H */

/* "ramdrive.device" */
/*--- functions in V34 or higher (Release 1.3) ---*/
#pragma libcall RamdriveDevice KillRAD0 2a 00
/*--- functions in V36 or higher (Release 2.0) ---*/
#pragma libcall RamdriveDevice KillRAD 30 001

#endif /* PRAGMAS_RAMDRIVE_PRAGMAS_H */
