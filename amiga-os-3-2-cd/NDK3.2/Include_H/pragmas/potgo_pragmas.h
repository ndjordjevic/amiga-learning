#ifndef PRAGMAS_POTGO_PRAGMAS_H
#define PRAGMAS_POTGO_PRAGMAS_H

/*
**	$Id: potgo_pragmas.h 36.3 1990-11-07 15:58:11 darren Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_POTGO_PROTOS_H
#include <clib/potgo_protos.h>
#endif /* CLIB_POTGO_PROTOS_H */

/* "potgo.resource" */
#pragma libcall PotgoBase AllocPotBits 6 001
#pragma libcall PotgoBase FreePotBits c 001
#pragma libcall PotgoBase WritePotgo 12 1002

#endif /* PRAGMAS_POTGO_PRAGMAS_H */
