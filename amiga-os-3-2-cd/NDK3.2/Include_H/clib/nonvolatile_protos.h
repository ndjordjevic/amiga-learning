#ifndef CLIB_NONVOLATILE_PROTOS_H
#define CLIB_NONVOLATILE_PROTOS_H

/*
**	$Id: nonvolatile_protos.h 40.5 1993-07-30 17:13:06 vertex Exp $
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
#ifndef  EXEC_LISTS_H
#include <exec/lists.h>
#endif
#ifndef  LIBRARIES_NONVOLATILE_H
#include <libraries/nonvolatile.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/
APTR GetCopyNV( CONST_STRPTR appName, CONST_STRPTR itemName, LONG killRequesters );
VOID FreeNVData( APTR data );
UWORD StoreNV( CONST_STRPTR appName, CONST_STRPTR itemName, CONST_APTR data, ULONG length, LONG killRequesters );
BOOL DeleteNV( CONST_STRPTR appName, CONST_STRPTR itemName, LONG killRequesters );
struct NVInfo *GetNVInfo( LONG killRequesters );
struct MinList *GetNVList( CONST_STRPTR appName, LONG killRequesters );
BOOL SetNVProtection( CONST_STRPTR appName, CONST_STRPTR itemName, LONG mask, LONG killRequesters );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_NONVOLATILE_PROTOS_H */
