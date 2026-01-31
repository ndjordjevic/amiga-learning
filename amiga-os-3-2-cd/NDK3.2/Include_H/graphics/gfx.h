#ifndef	GRAPHICS_GFX_H
#define	GRAPHICS_GFX_H
/*
**	$VER: gfx.h 47.2 (31.5.2020)
**
**	general include file for application programs 
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
**
*/

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif


#define BITSET  0x8000
#define BITCLR  0

#define AGNUS
#ifdef AGNUS
#define TOBB(a)      ((long)(a))
#else
#define TOBB(a)      ((long)(a)>>1)  /* convert Chip adr to Bread Board Adr */
#endif

struct Rectangle
{
    WORD   MinX,MinY;
    WORD   MaxX,MaxY;
};

struct Rect32
{
    LONG    MinX,MinY;
    LONG    MaxX,MaxY;
};

typedef struct tPoint
{
    WORD x,y;
} Point;

typedef UBYTE *PLANEPTR;

struct BitMap
{
    UWORD   BytesPerRow;
    UWORD   Rows;
    UBYTE   Flags;
    UBYTE   Depth;
    UWORD   pad;
    PLANEPTR Planes[8];
};

/* This macro is obsolete as of V39. AllocBitMap() should be used for allocating
   bitmap data, since it knows about the machine's particular alignment
   restrictions.
*/
#define RASSIZE(w,h)    ((ULONG)(h)*( ((ULONG)(w)+15)>>3&0xFFFE))

/* flags for AllocBitMap, etc. */
#define BMB_CLEAR 0
#define BMB_DISPLAYABLE 1
#define BMB_INTERLEAVED 2
#define BMB_STANDARD 3
#define BMB_MINPLANES 4
/*
 * New V45 flags follow. If this bit combination is set,
 * the AllocBitMap() friends pointer points to a tag
 * list describing further data
 */
#define BMB_HIJACKED     7 /* must be clear                 */
#define BMB_RTGTAGS      8 /* must be one for tag extension */
#define BMB_RTGCHECK     9 /* must be one for tag extension */
#define BMB_FRIENDISTAG 10 /* must be one as well           */
#define BMB_INVALID     11 /* must be clear                 */

#define BMF_CLEAR (1l<<BMB_CLEAR)
#define BMF_DISPLAYABLE (1l<<BMB_DISPLAYABLE)
#define BMF_INTERLEAVED (1l<<BMB_INTERLEAVED)
#define BMF_STANDARD (1l<<BMB_STANDARD)
#define BMF_MINPLANES (1l<<BMB_MINPLANES)
#define BMF_HIJACKED    (1L<<BMB_HIJACKED)    /* aka BMF_SPECIALFMT */
#define BMF_RTGTAGS     (1L<<BMB_RTGTAGS)
#define BMF_RTGCHECK    (1L<<BMB_RTGCHECK)
#define BMF_FRIENDISTAG (1L<<BMB_FRIENDISTAG)
#define BMF_INVALID     (1L<<BMB_INVALID)

#define BMF_CHECKMASK   (BMF_HIJACKED    | BMF_RTGTAGS | BMF_RTGCHECK | \
                         BMF_FRIENDISTAG | BMF_INVALID)
#define BMF_CHECKVALUE  (BMF_RTGTAGS | BMF_RTGCHECK | BMF_FRIENDISTAG)

#define BITMAPFLAGS_ARE_EXTENDED(a) ((a & BMF_CHECKMASK) == BMF_CHECKVALUE)

/* the following are for GetBitMapAttr() */
#define BMA_HEIGHT 0
#define BMA_DEPTH 4
#define BMA_WIDTH 8
#define BMA_FLAGS 12

/* tags for AllocBitMap */
#define BMATags_Friend                     (TAG_USER+0)
        /*
         * Specify a friend-bitmap by tags
         * Default is no friend bitmap
         */
#define BMATags_Depth                      (TAG_USER+1)
        /*
         * depth of the bitmap. Default is the
         * depth parameter of AllocBitMap
         */
#define BMATags_PixelFormat                (TAG_USER+2)
        /*
         * bitmap data format (see enPixelFormat)
         */
#define BMATags_Clear                      (TAG_USER+3)
        /*
         * clear bitmap? Default is the BMF_CLEAR
         * flag specified value.
         */
#define BMATags_Displayable                (TAG_USER+4)
        /*
         * bitmap usable for hardware?
         * Default is the BMF_DISPLAYABLE flag.
         */
#define BMATags_Private1                   (TAG_USER+5)
        /* internal use only! */
#define BMATags_NoMemory                   (TAG_USER+6)
        /*
         * do not provide memory for the bitmap,
         * just allocate the structure
         * Default is false.
         */
#define BMATags_NoSprite                   (TAG_USER+7)
        /*
         * disallow generation of a sprite
         * default is sprite enabled.
         */
#define BMATags_Private2                   (TAG_USER+8)
        /* internal use only! */
#define BMATags_Private3                   (TAG_USER+9)
        /* internal use only! */
#define BMATags_ModeWidth                  (TAG_USER+10)
        /*
         * width of the display mode in pixels.
         * Default is the width of the displayID
         * in the monitor database.
         */
#define BMATags_ModeHeight                 (TAG_USER+11)
        /*
         * height of the display mode in pixels.
         * Default is the height of the displayID
         * in the monitor database.
         */
#define BMATags_RenderFunc                 (TAG_USER+12)
        /*
         * Private. Do not use in new code.
         */
#define BMATags_SaveFunc                   (TAG_USER+13)
        /*
         * Private. Do not use in new code.
         */
#define BMATags_UserData                   (TAG_USER+14)
        /*
         * Private. Do not use in new code.
         */
#define BMATags_Alignment                  (TAG_USER+15)
        /*
         * specify additional alignment (power of two)
         * for the bitmap rows. If this tag is set,
         * then bitplane rows are aligned to this
         * boundary. Otherwise, the native alignment
         * restriction is provided.
         */
#define BMATags_ConstantBytesPerRow        (TAG_USER+16)
        /*
         * set with the above to enforce alignment
         * for displayable screens
         */
#define BMATags_UserPrivate                (TAG_USER+17)
        /*
         * user bitmap which will never be in
         * video memory
         */
#define BMATags_Private4                   (TAG_USER+18)
        /* internal use only! */
#define BMATags_Private5                   (TAG_USER+19)
        /* internal use only! */
#define BMATags_Private6                   (TAG_USER+20)
        /* internal use only! */
#define BMATags_Private7                   (TAG_USER+21)
        /* internal use only! */
#define BMATags_DisplayID                  (TAG_USER + 0x32)
        /* a display ID from the monitor data base
         * the system tries then to extract all necessary information
         * to build a suitable bitmap
         * This is intentionally identical to intuition SA_DisplayID
         */
#define BMATags_BitmapInvisible            (TAG_USER + 0x37)
        /* if set to TRUE, the bitmap is not allocated on the graphics
         * board directly, but may remain in an off-hardware location
         * if the screen is invisible. This is intentionally
         * identically to SA_Behind. Default is FALSE
         */
#define BMATags_BitmapColors               (TAG_USER + 0x29)
        /* ti_Data is an array of struct ColorSpec,
         * terminated by ColorIndex = -1.  Specifies
         * initial screen palette colors.
         * This is intentionally identically to SA_Colors
         */
#define BMATags_BitmapColors32             (TAG_USER + 0x43)
        /* Tag to set the bitmaps's initial palette colors
         * at 32 bits-per-gun.  ti_Data is a pointer
         * to a table to be passed to the
         * graphics.library/LoadRGB32() function.
         * This format supports both runs of color
         * registers and sparse registers.  See the
         * autodoc for that function for full details.
         * Any color set here has precedence over
         * the same register set by ABMA_BitmapColors.
         * Intentionally identical to SA_Colors32
         */
#define BMATags_BitmapErrorCode            (TAG_USER + 0x2A)
        /* ti_Data points to a ULONG in which the RTG software
         * will stick an error code if AllocBitMap() fails to
         * allocate a non-native bitmap.
         * This is intentionally identical to SA_ErrorCode.
         */

#endif	/* GRAPHICS_GFX_H */
