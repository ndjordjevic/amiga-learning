#ifndef CLIB_RADIOBUTTON_PROTOS_H
#define CLIB_RADIOBUTTON_PROTOS_H

/*
**	$Id: radiobutton_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
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
Class *RADIOBUTTON_GetClass( VOID );
struct Node *AllocRadioButtonNodeA( ULONG columns, struct TagItem *tags );
struct Node *AllocRadioButtonNode( ULONG columns, Tag firstTag, ... );
VOID FreeRadioButtonNode( struct Node *node );
VOID SetRadioButtonNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID SetRadioButtonNodeAttrs( struct Node *node, Tag firstTag, ... );
VOID GetRadioButtonNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID GetRadioButtonNodeAttrs( struct Node *node, Tag firstTag, ... );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_RADIOBUTTON_PROTOS_H */
