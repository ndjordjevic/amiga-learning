#ifndef PROTO_REXXSYSLIB_H
#define PROTO_REXXSYSLIB_H

/*
**	$VER: rexxsyslib.h 47.2 (29.8.2020)
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

#ifndef REXX_RXSLIB_H
#include <rexx/rxslib.h>
#endif /* REXX_RXSLIB_H */

extern struct RxsLib * RexxSysBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_REXXSYSLIB_PRAGMAS_H
#include <pragmas/rexxsyslib_pragmas.h>
#endif /* PRAGMAS_REXXSYSLIB_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_REXXSYSLIB_LIB_H
#include <pragma/rexxsyslib_lib.h>
#endif /* PRAGMA_REXXSYSLIB_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_REXXSYSLIB_H
#include <inline/rexxsyslib.h>
#endif /* _INLINE_REXXSYSLIB_H */
#else
#include <clib/rexxsyslib_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_REXXSYSLIB_H */
