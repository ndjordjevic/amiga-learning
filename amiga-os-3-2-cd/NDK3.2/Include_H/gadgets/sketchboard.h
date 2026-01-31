#ifndef GADGETS_SKETCHBOARD_H
#define GADGETS_SKETCHBOARD_H
/*
**    $VER: sketchboard.h 53.29 (10.8.2015)
**
**    Definitions for the Sketchboard BOOPSI class
**
**    Copyright (C) 1985-2005 Hyperion Entertainment VOF and Amiga, Inc.
**        All Rights Reserved
**
**    Copyright (c) 2010 Hyperion Entertainment CVBA.
**        All Rights Reserved.
*/

/*****************************************************************************/

#ifndef   REACTION_REACTION_H
#include <reaction/reaction.h>
#endif

#ifndef   INTUITION_GADGETCLASS_H
#include <intuition/gadgetclass.h>
#endif

#ifndef   INTUITION_CGHOOKS_H
#include <intuition/cghooks.h>
#endif

/*****************************************************************************/

#ifdef __cplusplus
#ifdef __USE_AMIGAOS_NAMESPACE__
namespace AmigaOS {
#endif
extern "C" {
#endif

#ifdef __GNUC__
   #ifdef __PPC__
    #pragma pack(2)
   #endif
#elif defined(__VBCC__)
   #pragma amiga-align
#endif

/****************************************************************************/

#define SKETCHBOARD_Dummy   (REACTION_Dummy + 0x24600)

/* Additional attributes defined by the Sketchboard class
 */
 
#define SGA_BitMap          (SKETCHBOARD_Dummy + 0L)
    /* (struct BitMap *) The bitmap to display/edit, after
     * setting this attribute you can release the bitmap
     * as the gadget copies it to its own one. For OM_GET
     * this will return a pointer to gadgets bitmap,
     * don't cache this pointer (setting SGA_Width and
     * SGA_Height changes it)! It's recommend to set
     * GA_ReadOnly to TRUE when accessing the bitmap
     * while the gadget is attached to a window. Be 
     * prepared to handle NULL pointers (out of memory or
     * gadget hasn't been layouted). (ISG) 
     */

#define SGA_MouseX          (SKETCHBOARD_Dummy + 1L)
    /* (WORD) Current mouse coordinate. See autodoc! (GN) */

#define SGA_MouseY          (SKETCHBOARD_Dummy + 2L)
    /* (WORD) Current mouse coordinate. See autodoc! (GN) */

#define SGA_Width           (SKETCHBOARD_Dummy + 3L)
    /* (UWORD) Width of the sketchboard Defaults to 32. (ISG) */

#define SGA_Height          (SKETCHBOARD_Dummy + 4L)
    /* (UWORD) Height of the sketchboard. Defaults to 32. (ISG) */

#define SGA_APen            (SKETCHBOARD_Dummy + 5L)
    /* (UBYTE) Current drawing pen. Defaults to 1. (ISGN) */

#define SGA_Tool            (SKETCHBOARD_Dummy + 6L)
    /* (UBYTE) Current drawing tool. See below for defs. (ISG) */

#define SGA_UndoAvailable   (SKETCHBOARD_Dummy + 7L)
    /* (BOOL) Is Undo possible? (GN) */

#define SGA_RedoAvailable   (SKETCHBOARD_Dummy + 8L)
    /* (BOOL) Is Redo possible? (GN) */

#define SGA_ShowGrid        (SKETCHBOARD_Dummy + 9L)
    /* (BOOL) Disable/Enable grid. Defaults to TRUE. (IS) */

#define SGA_Scale           (SKETCHBOARD_Dummy + 10L)
    /* (UWORD) Set/get scaling factor. Defaults to 3. (ISG) */

#define SGA_AfPt            (SKETCHBOARD_Dummy + 11L)
    /* (UWORD *) Set area fillpattern. Use NULL for the default one. (IS) */

#define SGA_AfPtSize        (SKETCHBOARD_Dummy + 12L)
    /* (WORD) Size of fillpattern in words. (IS) */

#define SGA_HPropTotal      (SKETCHBOARD_Dummy + 13L)
    /* (UWORD) For interconnection with a propgadget. (GN) */

#define SGA_HPropTop        (SKETCHBOARD_Dummy + 14L)
    /* (UWORD) For interconnection with a propgadget. (ISGN) */

#define SGA_HPropVisible    (SKETCHBOARD_Dummy + 15L)
    /* (UWORD) For interconnection with a propgadget. (GN) */

#define SGA_VPropTotal      (SKETCHBOARD_Dummy + 16L)
    /* (UWORD) For interconnection with a propgadget. (GN) */

#define SGA_VPropTop        (SKETCHBOARD_Dummy + 17L)
    /* (UWORD) For interconnection with a propgadget. (ISGN) */

#define SGA_VPropVisible    (SKETCHBOARD_Dummy + 18L)
    /* (UWORD) For interconnection with a propgadget. (GN) */

#define SGA_HotSpot         (SKETCHBOARD_Dummy + 19L)
    /* (struct {UWORD x, UWORD y;}) For use by Pointer preferences. (ISG) */

#define SGA_Changed         (SKETCHBOARD_Dummy + 20L)
    /* (BOOL) TRUE when the bitmap has been changed. (SGN) */

#define SGA_RastPort        (SKETCHBOARD_Dummy + 21L)
    /* (struct RastPort *) For subclass implementors:
     * the layered rastport used for rendering. Don't
     * cache this pointer, it changes whenever you
     * set SGA_SketchWidth or SGA_SketchHeight. Be 
     * prepared to handle a NULL pointer (out of memory
     * or object hasn't been layouted)! (G) 
     */

#define SGA_SketchBoardRect (SKETCHBOARD_Dummy + 22L)
    /* (struct Rectangle *) For subclass implementors:
     * this defines the area where the actual rendering
     * happens (relative to the top/left corner of the window).
     * Change the contents and you'll burn! (G) 
     */

#define SGA_SubWidth        (SKETCHBOARD_Dummy + 23L)
    /* (UWORD) For subclass implementors: subtract
     * the given value from the gadget width. Can be
     * used to make room in the gadgetbox. (IS) 
     */

#define SGA_SubHeight       (SKETCHBOARD_Dummy + 24L)
    /* (UWORD) For subclass implementors: substract
     * the given value from the gadget height. (IS) 
     */

#define SGA_DoubleScaleX       (SKETCHBOARD_Dummy + 25L)
    /* (BOOL) internally double X scale. Useful if showing a lores img on
     * a hires screen. (IS) (V47)
     */
#define SGA_DoubleScaleY       (SKETCHBOARD_Dummy + 26L)
/* (BOOL) internally double Y scale. Useful if showing a non interlaced img on
 * an interlaced screen. (IS) (V47)
 */
#define SGA_TopLayerBitmap       (SKETCHBOARD_Dummy + 27L)
	/* Note: when setting or getting this you also need to
	 * do SGA_TopLayerWidth
	 *
	 * (struct BitMap *) A bitmap that acts as top layer on
	 * top of the image itself. The use can move this bitmap
	 * around with the Move tool. Many actions like change of
	 * tool or selecting another area may dispose the internal
	 * SGA_TopLayerBitmap
	 *
	 * After OM_SET this attribute you can release the bitmap
	 * as the gadget copies it to its own one.
	 *
	 * For OM_GET this will return a pointer to gadgets bitmap,
	 * don't cache this pointer!
	 *
	 * Be prepared to handle NULL pointers (out of memory, no
         * selection, or gadget hasn't been layouted). (ISG)  (V47)
	 */
#define SGA_TopLayerWidth       (SKETCHBOARD_Dummy + 28L)
	/* the real width of the SGA_TopLayerBitmap
         * It can be 0 if there is no selection  (V47)
	 */
#define SGA_WithBevel       (SKETCHBOARD_Dummy + 29L)
        /* (BOOL) defaults to TRUE (I) (V47)
	 */
#define SGA_ScrollWheelResponse (SKETCHBOARD_Dummy + 30L)
        /* (ULONG) See values below. Defaults to SGSCROLLWHEEL_SCROLLANDZOOM (IS) (V47)
         */
#define SGA_MaxUndoSteps (SKETCHBOARD_Dummy + 31L)
        /* (ULONG) Defaults to 16 (IS) (V47)
         */
#define SGA_UpdatedBitMap (SKETCHBOARD_Dummy + 32L)
        /* (struct BitMap *) Exactly the same as SGA_BitMap
         *
         * EXCEPT it doesn't reset the change stack, but instead
         * record this update as a step in the change stack
         */
/*****************************************************************************/

/* Possible values for SGA_Tool */
#define SGTOOL_FREEHAND_DOTS  0 /* default */
#define SGTOOL_FREEHAND       1
#define SGTOOL_ELLIPSE        2
#define SGTOOL_ELLIPSE_FILLED 3
#define SGTOOL_RECT           4
#define SGTOOL_RECT_FILLED    5
#define SGTOOL_LINE           6
#define SGTOOL_FILL           7
#define SGTOOL_GETPEN         8 /* also sets and notifies SGA_APen */
#define SGTOOL_HOTSPOT        9
#define SGTOOL_SELECT        10
#define SGTOOL_MOVE          11

/* Possible for SGA_ScrollWheelResponse*/
#define SGSCROLLWHEEL_NOTHING       0   /* Do nothing */
#define SGSCROLLWHEEL_SCROLLANDZOOM 1   /* Scrolls and zooms if ctrl is held (default) */
#define SGSCROLLWHEEL_ZOOMANDPAN    2   /* Zooms */
/*****************************************************************************/

/* Additional methods defined by the Sketchboard class */
 
#define SGM_Clear  (0x580100L) 
    /* (struct spGeneral *) set the entire bitmap to current pen color */

#define SGM_Undo   (0x580101L)
    /* (struct spGeneral *) undo last change */

#define SGM_Redo   (0x580102L)
    /* (struct spGeneral *) redo last change */

#define SGM_Scroll (0x580103L)
    /* (struct spScrollRaster *) scroll contents of bitmap by dx/dy pixels */

struct spGeneral
{
    ULONG             MethodID; /* SGM_Undo, SGM_Clear, SGM_Redo */
    struct GadgetInfo GInfo;
};

struct spScrollRaster
{
    ULONG               MethodID; /* SGM_Scroll */
    struct GadgetInfo * GInfo;
    LONG                DeltaX;
    LONG                DeltaY;
};

/*****************************************************************************/

#ifdef __GNUC__
   #ifdef __PPC__
    #pragma pack()
   #endif
#elif defined(__VBCC__)
   #pragma default-align
#endif


#ifdef __cplusplus
}
#ifdef __USE_AMIGAOS_NAMESPACE__
}
#endif
#endif

/****************************************************************************/

#endif /* GADGETS_SKETCHBOARD_H */
