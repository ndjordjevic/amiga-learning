#ifndef CLIB_DTCLASS_PROTOS_H
#define CLIB_DTCLASS_PROTOS_H

/*
**	$Id: dtclass_protos.h 39.2 2001-07-05 20:39:53 olsen Exp $
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
#ifndef  INTUITION_CLASSES_H
#include <intuition/classes.h>
#endif
#ifndef  INTUITION_CLASSUSR_H
#include <intuition/classusr.h>
#endif
/*--- functions in V39 or higher (Release 3.0) ---*/
Class *ObtainEngine( VOID );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_DTCLASS_PROTOS_H */
