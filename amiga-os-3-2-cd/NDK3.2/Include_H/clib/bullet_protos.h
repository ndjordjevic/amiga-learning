#ifndef CLIB_BULLET_PROTOS_H
#define CLIB_BULLET_PROTOS_H

/*
**	$Id: bullet_protos.h 44.1 2002-02-11 19:04:33 o.barthel Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  UTILITY_TAGITEM_H
#include <utility/tagitem.h>
#endif
#ifndef  DISKFONT_GLYPH_H
#include <diskfont/glyph.h>
#endif
struct GlyphEngine *OpenEngine( VOID );
VOID CloseEngine( struct GlyphEngine *glyphEngine );
ULONG SetInfoA( struct GlyphEngine *glyphEngine, CONST struct TagItem *tagList );
ULONG SetInfo( struct GlyphEngine *glyphEngine, Tag tag1, ... );
ULONG ObtainInfoA( struct GlyphEngine *glyphEngine, CONST struct TagItem *tagList );
ULONG ObtainInfo( struct GlyphEngine *glyphEngine, Tag tag1, ... );
ULONG ReleaseInfoA( struct GlyphEngine *glyphEngine, CONST struct TagItem *tagList );
ULONG ReleaseInfo( struct GlyphEngine *glyphEngine, Tag tag1, ... );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_BULLET_PROTOS_H */
