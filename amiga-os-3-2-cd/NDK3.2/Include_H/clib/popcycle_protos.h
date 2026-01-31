#ifndef CLIB_POPCYCLE_PROTOS_H
#define CLIB_POPCYCLE_PROTOS_H

/*
**	$Id: popcycle_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
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
Class *POPCYCLE_GetClass( VOID );
struct Node *AllocPopCycleNodeA( struct TagItem *tags );
struct Node *AllocPopCycleNode( Tag firstTag, ... );
VOID FreePopCycleNode( struct Node *node );
VOID SetPopCycleNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID SetPopCycleNodeAttrs( struct Node *node, Tag firstTag, ... );
VOID GetPopCycleNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID GetPopCycleNodeAttrs( struct Node *node, Tag firstTag, ... );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_POPCYCLE_PROTOS_H */
