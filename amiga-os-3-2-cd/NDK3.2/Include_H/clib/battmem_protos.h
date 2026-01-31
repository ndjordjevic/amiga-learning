#ifndef CLIB_BATTMEM_PROTOS_H
#define CLIB_BATTMEM_PROTOS_H

/*
**	$Id: battmem_protos.h 1.5 1991-03-04 14:24:45 rsbx Exp $
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
VOID ObtainBattSemaphore( VOID );
VOID ReleaseBattSemaphore( VOID );
ULONG ReadBattMem( APTR buffer, ULONG offset, ULONG length );
ULONG WriteBattMem( CONST_APTR buffer, ULONG offset, ULONG length );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_BATTMEM_PROTOS_H */
