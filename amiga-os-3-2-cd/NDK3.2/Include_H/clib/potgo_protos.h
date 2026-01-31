#ifndef CLIB_POTGO_PROTOS_H
#define CLIB_POTGO_PROTOS_H

/*
**	$Id: potgo_protos.h 36.3 1990-11-07 15:58:11 darren Exp $
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
UWORD AllocPotBits( ULONG bits );
VOID FreePotBits( ULONG bits );
VOID WritePotgo( ULONG word, ULONG mask );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_POTGO_PROTOS_H */
