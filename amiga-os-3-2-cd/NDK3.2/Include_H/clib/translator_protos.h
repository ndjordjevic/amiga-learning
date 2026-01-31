#ifndef CLIB_TRANSLATOR_PROTOS_H
#define CLIB_TRANSLATOR_PROTOS_H

/*
**	$Id: translator_protos.h 36.1 1990-11-07 15:31:59 eric Exp $
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
LONG Translate( CONST_STRPTR inputString, LONG inputLength, STRPTR outputBuffer, LONG bufferSize );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_TRANSLATOR_PROTOS_H */
