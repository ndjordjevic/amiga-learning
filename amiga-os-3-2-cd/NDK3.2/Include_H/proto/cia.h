#ifndef PROTO_CIA_H
#define PROTO_CIA_H

/*
**	$VER: cia.h 47.2 (29.8.2020)
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

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_CIA_PRAGMAS_H
#include <pragmas/cia_pragmas.h>
#endif /* PRAGMAS_CIA_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_CIA_LIB_H
#include <pragma/cia_lib.h>
#endif /* PRAGMA_CIA_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_CIA_H
#include <inline/cia.h>
#endif /* _INLINE_CIA_H */
#else
#include <clib/cia_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_CIA_H */
