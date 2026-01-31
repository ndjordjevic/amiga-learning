#ifndef PRAGMAS_BATTMEM_PRAGMAS_H
#define PRAGMAS_BATTMEM_PRAGMAS_H

/*
**	$Id: battmem_pragmas.h 1.5 1991-03-04 14:24:45 rsbx Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_BATTMEM_PROTOS_H
#include <clib/battmem_protos.h>
#endif /* CLIB_BATTMEM_PROTOS_H */

/* "battmem.resource" */
#pragma libcall BattMemBase ObtainBattSemaphore 6 00
#pragma libcall BattMemBase ReleaseBattSemaphore c 00
#pragma libcall BattMemBase ReadBattMem 12 10803
#pragma libcall BattMemBase WriteBattMem 18 10803

#endif /* PRAGMAS_BATTMEM_PRAGMAS_H */
