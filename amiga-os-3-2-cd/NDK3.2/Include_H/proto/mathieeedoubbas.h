#ifndef PROTO_MATHIEEEDOUBBAS_H
#define PROTO_MATHIEEEDOUBBAS_H

/*
**	$VER: mathieeedoubbas.h 47.2 (29.8.2020)
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

extern struct Library * MathIeeeDoubBasBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_MATHIEEEDOUBBAS_PRAGMAS_H
#include <pragmas/mathieeedoubbas_pragmas.h>
#endif /* PRAGMAS_MATHIEEEDOUBBAS_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_MATHIEEEDOUBBAS_LIB_H
#include <pragma/mathieeedoubbas_lib.h>
#endif /* PRAGMA_MATHIEEEDOUBBAS_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#include <clib/mathieeedoubbas_protos.h>

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_MATHIEEEDOUBBAS_H */
