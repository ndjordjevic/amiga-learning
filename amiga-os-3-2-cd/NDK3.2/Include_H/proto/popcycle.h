#ifndef PROTO_POPCYCLE_H
#define PROTO_POPCYCLE_H

/*
**	$VER: popcycle.h 47.2 (29.8.2020)
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

extern struct Library * PopCycleBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_POPCYCLE_PRAGMAS_H
#include <pragmas/popcycle_pragmas.h>
#endif /* PRAGMAS_POPCYCLE_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_POPCYCLE_LIB_H
#include <pragma/popcycle_lib.h>
#endif /* PRAGMA_POPCYCLE_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_POPCYCLE_H
#include <inline/popcycle.h>
#endif /* _INLINE_POPCYCLE_H */
#else
#include <clib/popcycle_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_POPCYCLE_H */
