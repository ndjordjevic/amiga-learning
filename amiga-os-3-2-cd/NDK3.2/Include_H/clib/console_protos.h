#ifndef CLIB_CONSOLE_PROTOS_H
#define CLIB_CONSOLE_PROTOS_H

/*
**	$Id: console_protos.h 36.6 1990-11-07 15:33:36 darren Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif
#ifndef  DEVICES_INPUTEVENT_H
#include <devices/inputevent.h>
#endif
#ifndef  DEVICES_KEYMAP_H
#include <devices/keymap.h>
#endif
struct InputEvent *CDInputHandler( CONST struct InputEvent *events, struct Library *consoleDevice );
LONG RawKeyConvert( CONST struct InputEvent *events, STRPTR buffer, LONG length, CONST struct KeyMap *keyMap );
/*--- functions in V36 or higher (Release 2.0) ---*/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_CONSOLE_PROTOS_H */
