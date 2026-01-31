#ifndef PROTO_DATEBROWSER_H
#define PROTO_DATEBROWSER_H

/*
**	$VER: datebrowser.h 47.2 (29.8.2020)
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

extern struct Library * DateBrowserBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_DATEBROWSER_PRAGMAS_H
#include <pragmas/datebrowser_pragmas.h>
#endif /* PRAGMAS_DATEBROWSER_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_DATEBROWSER_LIB_H
#include <pragma/datebrowser_lib.h>
#endif /* PRAGMA_DATEBROWSER_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_DATEBROWSER_H
#include <inline/datebrowser.h>
#endif /* _INLINE_DATEBROWSER_H */
#else
#include <clib/datebrowser_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_DATEBROWSER_H */
