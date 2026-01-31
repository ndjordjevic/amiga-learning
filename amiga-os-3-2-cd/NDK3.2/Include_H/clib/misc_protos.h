#ifndef CLIB_MISC_PROTOS_H
#define CLIB_MISC_PROTOS_H

/*
**	$Id: misc_protos.h 36.2 1990-11-07 14:46:52 bryce Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif
UBYTE *AllocMiscResource( ULONG unitNum, CONST_STRPTR name );
VOID FreeMiscResource( ULONG unitNum );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_MISC_PROTOS_H */
