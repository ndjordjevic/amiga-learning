#ifndef CLIB_RAMDRIVE_PROTOS_H
#define CLIB_RAMDRIVE_PROTOS_H

/*
**	$Id: ramdrive_protos.h 36.3 1990-11-07 15:53:27 darren Exp $
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
/*--- functions in V34 or higher (Release 1.3) ---*/
STRPTR KillRAD0( VOID );
/*--- functions in V36 or higher (Release 2.0) ---*/
STRPTR KillRAD( ULONG unit );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_RAMDRIVE_PROTOS_H */
