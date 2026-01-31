#ifndef PRAGMAS_KEYMAP_PRAGMAS_H
#define PRAGMAS_KEYMAP_PRAGMAS_H

/*
**	$Id: keymap_pragmas.h 36.4 1990-07-19 16:05:16 darren Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_KEYMAP_PROTOS_H
#include <clib/keymap_protos.h>
#endif /* CLIB_KEYMAP_PROTOS_H */

/* "keymap.library" */
/*--- functions in V36 or higher (Release 2.0) ---*/
#pragma libcall KeymapBase SetKeyMapDefault 1e 801
#pragma libcall KeymapBase AskKeyMapDefault 24 00
#pragma libcall KeymapBase MapRawKey 2a A19804
#pragma libcall KeymapBase MapANSI 30 A190805

#endif /* PRAGMAS_KEYMAP_PRAGMAS_H */
