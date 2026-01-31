#ifndef CLIB_AMIGAGUIDECLASS_PROTOS_H
#define CLIB_AMIGAGUIDECLASS_PROTOS_H

/*
**	$Id: amigaguideclass_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
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
#ifndef  EXEC_PORTS_H
#include <exec/ports.h>
#endif
#ifndef  DOS_DOS_H
#include <dos/dos.h>
#endif
#ifndef  LIBRARIES_AMIGAGUIDE_H
#include <libraries/amigaguide.h>
#endif
#ifndef  INTUITION_CLASSES_H
#include <intuition/classes.h>
#endif
#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
#ifndef  UTILITY_HOOKS_H
#include <utility/hooks.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/
Class *ObtainEngine( VOID );
LONG LoadXRef( BPTR lock, CONST_STRPTR name );
VOID ExpungeXRef( VOID );
BPTR AddPathEntries( BPTR path, STRPTR *argptr );
BPTR CopyPathList( BPTR p );
VOID FreePathList( BPTR p );
ULONG ParsePathString( STRPTR line, STRPTR *argv, ULONG max );
BPTR LockE( BPTR p, CONST_STRPTR name, LONG mode );
BPTR OpenE( BPTR p, CONST_STRPTR name, LONG mode );
BPTR SetCurrentDirE( BPTR p, CONST_STRPTR name );
STRPTR GetAGString( LONG id );
ULONG AddAGHostA( struct Hook *h, CONST_STRPTR name, struct TagItem *attrs );
LONG RemoveAGHostA( APTR handle, struct TagItem *attrs );
LONG AddXRef( CONST_STRPTR name, CONST_STRPTR file, LONG line, LONG type );
struct XRef *GetXRef( CONST_STRPTR name );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_AMIGAGUIDECLASS_PROTOS_H */
