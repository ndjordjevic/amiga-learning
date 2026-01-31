#ifndef PROTO_DISKFONT_H
#define PROTO_DISKFONT_H

/*
**	$VER: diskfont.h 47.2 (29.8.2020)
**	Includes Release 47.1
**
**	Lattice 'C' style prototype/pragma header file combo
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

/****************************************************************************/

#ifndef _NO_INLINE

/****************************************************************************/

#ifndef __NOLIBBASE__

#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif /* EXEC_LIBRARIES_H */

extern struct Library * DiskfontBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_DISKFONT_PRAGMAS_H
#include <pragmas/diskfont_pragmas.h>
#endif /* PRAGMAS_DISKFONT_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_DISKFONT_LIB_H
#include <pragma/diskfont_lib.h>
#endif /* PRAGMA_DISKFONT_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_DISKFONT_H
#include <inline/diskfont.h>
#endif /* _INLINE_DISKFONT_H */
#else
#include <clib/diskfont_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_DISKFONT_H */
