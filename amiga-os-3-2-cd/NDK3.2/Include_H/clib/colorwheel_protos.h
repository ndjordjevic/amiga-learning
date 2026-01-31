#ifndef CLIB_COLORWHEEL_PROTOS_H
#define CLIB_COLORWHEEL_PROTOS_H

/*
**	$Id: colorwheel_protos.h 39.1 92/07/21 15:42:37 vertex Exp $
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
#ifndef  GADGETS_COLORWHEEL_H
#include <gadgets/colorwheel.h>
#endif
/*--- functions in V39 or higher (Release 3.0) ---*/

/* Public entries */

VOID ConvertHSBToRGB( CONST struct ColorWheelHSB *hsb, struct ColorWheelRGB *rgb );
VOID ConvertRGBToHSB( CONST struct ColorWheelRGB *rgb, struct ColorWheelHSB *hsb );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_COLORWHEEL_PROTOS_H */
