#ifndef CLIB_CIA_PROTOS_H
#define CLIB_CIA_PROTOS_H

/*
**	$Id: cia_protos.h 1.7 1990-07-19 13:14:03 rsbx Exp $
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
#ifndef  EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif
struct Interrupt *AddICRVector( struct Library *resource, LONG iCRBit, struct Interrupt *interrupt );
VOID RemICRVector( struct Library *resource, LONG iCRBit, struct Interrupt *interrupt );
WORD AbleICR( struct Library *resource, LONG mask );
WORD SetICR( struct Library *resource, LONG mask );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_CIA_PROTOS_H */
