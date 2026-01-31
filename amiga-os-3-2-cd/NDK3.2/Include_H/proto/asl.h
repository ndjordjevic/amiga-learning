#ifndef PROTO_ASL_H
#define PROTO_ASL_H

/*
**	$VER: asl.h 47.2 (29.8.2020)
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

extern struct Library * AslBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_ASL_PRAGMAS_H
#include <pragmas/asl_pragmas.h>
#endif /* PRAGMAS_ASL_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_ASL_LIB_H
#include <pragma/asl_lib.h>
#endif /* PRAGMA_ASL_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_ASL_H
#include <inline/asl.h>
#endif /* _INLINE_ASL_H */
#else
#include <clib/asl_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_ASL_H */
