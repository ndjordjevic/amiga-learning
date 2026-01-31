#ifndef CLIB_LOWLEVEL_PROTOS_H
#define CLIB_LOWLEVEL_PROTOS_H

/*
**	$Id: lowlevel_protos.h 40.6 1993-07-30 16:11:56 vertex Exp $
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
#ifndef  EXEC_INTERRUPTS_H
#include <exec/interrupts.h>
#endif
#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
#ifndef  DEVICES_TIMER_H
#include <devices/timer.h>
#endif
#ifndef  LIBRARIES_LOWLEVEL_H
#include <libraries/lowlevel.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/

/* CONTROLLER HANDLING */

ULONG ReadJoyPort( ULONG port );

/* LANGUAGE HANDLING */

UBYTE GetLanguageSelection( VOID );

/* KEYBOARD HANDLING */

ULONG GetKey( VOID );
VOID QueryKeys( struct KeyQuery *queryArray, LONG arraySize );
APTR AddKBInt( APTR intRoutine, APTR intData );
VOID RemKBInt( APTR intHandle );

/* SYSTEM HANDLING */

ULONG SystemControlA( CONST struct TagItem *tagList );
ULONG SystemControl( Tag firstTag, ... );

/* TIMER HANDLING */

APTR AddTimerInt( APTR intRoutine, APTR intData );
VOID RemTimerInt( APTR intHandle );
VOID StopTimerInt( APTR intHandle );
VOID StartTimerInt( APTR intHandle, ULONG timeInterval, LONG continuous );
ULONG ElapsedTime( struct EClockVal *context );

/* VBLANK HANDLING */

APTR AddVBlankInt( APTR intRoutine, APTR intData );
VOID RemVBlankInt( APTR intHandle );

/* MORE CONTROLLER HANDLING */

BOOL SetJoyPortAttrsA( ULONG portNumber, CONST struct TagItem *tagList );
BOOL SetJoyPortAttrs( ULONG portNumber, Tag firstTag, ... );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_LOWLEVEL_PROTOS_H */
