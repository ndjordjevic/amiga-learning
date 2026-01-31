#ifndef CLIB_TIMER_PROTOS_H
#define CLIB_TIMER_PROTOS_H

/*
**	$Id: timer_protos.h 1.6 1991-01-25 15:46:51 rsbx Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  DEVICES_TIMER_H
#include <devices/timer.h>
#endif
VOID AddTime( TimeVal_Type *dest, CONST TimeVal_Type *src );
VOID SubTime( TimeVal_Type *dest, CONST TimeVal_Type *src );
LONG CmpTime( CONST TimeVal_Type *dest, CONST TimeVal_Type *src );
ULONG ReadEClock( struct EClockVal *dest );
VOID GetSysTime( TimeVal_Type *dest );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_TIMER_PROTOS_H */
