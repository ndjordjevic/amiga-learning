#ifndef CLIB_VIRTUAL_PROTOS_H
#define CLIB_VIRTUAL_PROTOS_H

/*
**	$Id: virtual_protos.h 40.2 2001-07-08 12:50:28 olsen Exp $
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
#ifndef  GADGETS_LAYOUT_H
#include <gadgets/layout.h>
#endif
/*--- functions in V40 or higher (Release 3.1) ---*/
Class *VIRTUAL_GetClass( VOID );
VOID RefreshVirtualGadget( struct Gadget *gadget, Object *obj, struct Window *window, struct Requester *requester );
BOOL RethinkVirtualSize( Object *virt_obj, Object *rootlayout, struct TextFont *font, struct Screen *screen, struct LayoutLimits *layoutlimits );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_VIRTUAL_PROTOS_H */
