#ifndef CLIB_KEYMAP_PROTOS_H
#define CLIB_KEYMAP_PROTOS_H

/*
**	$Id: keymap_protos.h 36.4 1990-07-19 16:05:16 darren Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  DEVICES_INPUTEVENT_H
#include <devices/inputevent.h>
#endif
#ifndef  DEVICES_KEYMAP_H
#include <devices/keymap.h>
#endif
/*--- functions in V36 or higher (Release 2.0) ---*/
VOID SetKeyMapDefault( struct KeyMap *keyMap );
struct KeyMap *AskKeyMapDefault( VOID );
WORD MapRawKey( CONST struct InputEvent *event, STRPTR buffer, LONG length, CONST struct KeyMap *keyMap );
LONG MapANSI( CONST_STRPTR string, LONG count, STRPTR buffer, LONG length, CONST struct KeyMap *keyMap );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_KEYMAP_PROTOS_H */
