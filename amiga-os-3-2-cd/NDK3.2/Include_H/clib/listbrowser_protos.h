#ifndef CLIB_LISTBROWSER_PROTOS_H
#define CLIB_LISTBROWSER_PROTOS_H

/*
**	$Id: listbrowser_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
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
#ifndef  GADGETS_LISTBROWSER_H
#include <gadgets/listbrowser.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/
Class *LISTBROWSER_GetClass( VOID );
struct Node *AllocListBrowserNodeA( ULONG columns, struct TagItem *tags );
struct Node *AllocListBrowserNode( ULONG columns, Tag firstTag, ... );
VOID FreeListBrowserNode( struct Node *node );
VOID SetListBrowserNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID SetListBrowserNodeAttrs( struct Node *node, Tag firstTag, ... );
VOID GetListBrowserNodeAttrsA( struct Node *node, struct TagItem *tags );
VOID GetListBrowserNodeAttrs( struct Node *node, Tag firstTag, ... );
VOID ListBrowserSelectAll( struct List *list );
VOID ShowListBrowserNodeChildren( struct Node *node, LONG depth );
VOID HideListBrowserNodeChildren( struct Node *node );
VOID ShowAllListBrowserChildren( struct List *list );
VOID HideAllListBrowserChildren( struct List *list );
VOID FreeListBrowserList( struct List *list );
/*--- functions in V45 or higher (Release 3.9) ---*/
struct ColumnInfo *AllocLBColumnInfoA( ULONG columns, struct TagItem *tags );
struct ColumnInfo *AllocLBColumnInfo( ULONG columns, Tag firstTag, ... );
LONG SetLBColumnInfoAttrsA( struct ColumnInfo *columninfo, struct TagItem *tags );
LONG SetLBColumnInfoAttrs( struct ColumnInfo *columninfo, Tag firstTag, ... );
LONG GetLBColumnInfoAttrsA( struct ColumnInfo *columninfo, struct TagItem *tags );
LONG GetLBColumnInfoAttrs( struct ColumnInfo *columninfo, Tag firstTag, ... );
VOID FreeLBColumnInfo( struct ColumnInfo *columninfo );
VOID ListBrowserClearAll( struct List *list );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_LISTBROWSER_PROTOS_H */
