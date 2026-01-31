#ifndef CLIB_SPEEDBAR_PROTOS_H
#define CLIB_SPEEDBAR_PROTOS_H

/*
**	$Id: speedbar_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  INTUITION_INTUITION_H
#include <intuition/intuition.h>
#endif
#ifndef  INTUITION_CLASSES_H
#include <intuition/classes.h>
#endif
#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/
Class *SPEEDBAR_GetClass( VOID );
struct Node *AllocSpeedButtonNodeA( ULONG number, struct TagItem *tags );
struct Node *AllocSpeedButtonNode( ULONG number, Tag firstTag, ... );
VOID FreeSpeedButtonNode( struct Node *node );
VOID SetSpeedButtonNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID SetSpeedButtonNodeAttrs( struct Node *node, Tag firstTag, ... );
VOID GetSpeedButtonNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID GetSpeedButtonNodeAttrs( struct Node *node, Tag firstTag, ... );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_SPEEDBAR_PROTOS_H */
