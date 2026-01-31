#ifndef PROTO_INTUITION_H
#define PROTO_INTUITION_H

/*
**	$VER: intuition.h 47.2 (29.8.2020)
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

#ifndef INTUITION_INTUITIONBASE_H
#include <intuition/intuitionbase.h>
#endif /* INTUITION_INTUITIONBASE_H */

extern struct IntuitionBase * IntuitionBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_INTUITION_PRAGMAS_H
#include <pragmas/intuition_pragmas.h>
#endif /* PRAGMAS_INTUITION_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_INTUITION_LIB_H
#include <pragma/intuition_lib.h>
#endif /* PRAGMA_INTUITION_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_INTUITION_H
#include <inline/intuition.h>
#endif /* _INLINE_INTUITION_H */
#else
#include <clib/intuition_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_INTUITION_H */
