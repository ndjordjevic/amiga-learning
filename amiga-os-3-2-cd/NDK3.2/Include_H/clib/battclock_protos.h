#ifndef CLIB_BATTCLOCK_PROTOS_H
#define CLIB_BATTCLOCK_PROTOS_H

/*
**	$Id: battclock_protos.h 1.3 1990-05-03 11:57:44 rsbx Exp $
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
VOID ResetBattClock( VOID );
ULONG ReadBattClock( VOID );
VOID WriteBattClock( ULONG time );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_BATTCLOCK_PROTOS_H */
