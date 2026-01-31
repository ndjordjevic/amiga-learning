#ifndef CLIB_AMIGAGUIDE_PROTOS_H
#define CLIB_AMIGAGUIDE_PROTOS_H

/*
**	$Id: amigaguide_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
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
#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
#ifndef  UTILITY_HOOKS_H
#include <utility/hooks.h>
#endif
#ifndef  REXX_STORAGE_H
#include <rexx/storage.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/

/* Public entries */

LONG LockAmigaGuideBase( APTR handle );
VOID UnlockAmigaGuideBase( LONG key );
APTR OpenAmigaGuideA( struct NewAmigaGuide *nag, CONST struct TagItem * );
APTR OpenAmigaGuide( struct NewAmigaGuide *nag, Tag tag1, ... );
APTR OpenAmigaGuideAsyncA( struct NewAmigaGuide *nag, CONST struct TagItem *attrs );
APTR OpenAmigaGuideAsync( struct NewAmigaGuide *nag, Tag tag1, ... );
VOID CloseAmigaGuide( APTR cl );
ULONG AmigaGuideSignal( APTR cl );
struct AmigaGuideMsg *GetAmigaGuideMsg( APTR cl );
VOID ReplyAmigaGuideMsg( struct AmigaGuideMsg *amsg );
LONG SetAmigaGuideContextA( APTR cl, ULONG id, CONST struct TagItem *attrs );
LONG SetAmigaGuideContext( APTR cl, ULONG id, Tag tag1, ... );
LONG SendAmigaGuideContextA( APTR cl, CONST struct TagItem *attrs );
LONG SendAmigaGuideContext( APTR cl, Tag tag1, ... );
LONG SendAmigaGuideCmdA( APTR cl, STRPTR cmd, CONST struct TagItem *attrs );
LONG SendAmigaGuideCmd( APTR cl, CONST_STRPTR cmd, Tag tag1, ... );
LONG SetAmigaGuideAttrsA( APTR cl, CONST struct TagItem *attrs );
LONG SetAmigaGuideAttrs( APTR cl, Tag tag1, ... );
LONG GetAmigaGuideAttr( Tag tag, APTR cl, ULONG *storage );
LONG LoadXRef( BPTR lock, STRPTR name );
VOID ExpungeXRef( VOID );
APTR AddAmigaGuideHostA( struct Hook *h, CONST_STRPTR name, CONST struct TagItem *attrs );
APTR AddAmigaGuideHost( struct Hook *h, CONST_STRPTR name, Tag tag1, ... );
LONG RemoveAmigaGuideHostA( APTR hh, CONST struct TagItem *attrs );
LONG RemoveAmigaGuideHost( APTR hh, Tag tag1, ... );
STRPTR GetAmigaGuideString( LONG id );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_AMIGAGUIDE_PROTOS_H */
