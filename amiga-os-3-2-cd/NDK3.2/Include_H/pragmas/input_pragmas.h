#ifndef PRAGMAS_INPUT_PRAGMAS_H
#define PRAGMAS_INPUT_PRAGMAS_H

/*
**	$Id: input_pragmas.h 36.2 1990-11-07 16:00:26 darren Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_INPUT_PROTOS_H
#include <clib/input_protos.h>
#endif /* CLIB_INPUT_PROTOS_H */

/* "input.device" */
/*--- functions in V36 or higher (Release 2.0) ---*/
#pragma libcall InputBase PeekQualifier 2a 00

#endif /* PRAGMAS_INPUT_PRAGMAS_H */
