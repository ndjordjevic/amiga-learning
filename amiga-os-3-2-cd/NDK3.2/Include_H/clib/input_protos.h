#ifndef CLIB_INPUT_PROTOS_H
#define CLIB_INPUT_PROTOS_H

/*
**	$Id: input_protos.h 36.2 1990-11-07 16:00:26 darren Exp $
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
/*--- functions in V36 or higher (Release 2.0) ---*/
UWORD PeekQualifier( VOID );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_INPUT_PROTOS_H */
