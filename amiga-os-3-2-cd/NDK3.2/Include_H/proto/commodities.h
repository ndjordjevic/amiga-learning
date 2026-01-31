#ifndef PROTO_COMMODITIES_H
#define PROTO_COMMODITIES_H

/*
**	$VER: commodities.h 47.2 (29.8.2020)
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

extern struct Library * CxBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_COMMODITIES_PRAGMAS_H
#include <pragmas/commodities_pragmas.h>
#endif /* PRAGMAS_COMMODITIES_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_COMMODITIES_LIB_H
#include <pragma/commodities_lib.h>
#endif /* PRAGMA_COMMODITIES_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_COMMODITIES_H
#include <inline/commodities.h>
#endif /* _INLINE_COMMODITIES_H */
#else
#include <clib/commodities_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_COMMODITIES_H */
