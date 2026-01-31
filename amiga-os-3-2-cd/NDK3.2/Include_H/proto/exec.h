#ifndef PROTO_EXEC_H
#define PROTO_EXEC_H

/*
**	$VER: exec.h 47.2 (29.8.2020)
**	Includes Release 47.1
**
**	Lattice 'C' style prototype/pragma header file combo
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifndef CLIB_EXEC_PROTOS_H
#include <clib/exec_protos.h>
#endif /* CLIB_EXEC_PROTOS_H */

/****************************************************************************/

#ifndef _NO_INLINE

/****************************************************************************/

#ifndef __NOLIBBASE__

#ifndef EXEC_EXECBASE_H
#include <exec/execbase.h>
#endif /* EXEC_EXECBASE_H */

extern struct ExecBase * SysBase;

#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#if defined(_USEOLDEXEC_) || !defined(__USE_SYSBASE)

/****************************************************************************/

#ifndef PRAGMAS_EXEC_PRAGMAS_H
#include <pragmas/exec_pragmas.h>
#endif /* PRAGMAS_EXEC_PRAGMAS_H */

#else

/****************************************************************************/

#ifndef PRAGMAS_EXEC_SYSBASE_PRAGMAS_H
#include <pragmas/exec_sysbase_pragmas.h>
#endif /* PRAGMAS_EXEC_SYSBASE_PRAGMAS_H */

/****************************************************************************/

#endif /* defined(_USEOLDEXEC_) || !defined(__USE_SYSBASE) */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_EXEC_LIB_H
#include <pragma/exec_lib.h>
#endif /* PRAGMA_EXEC_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_EXEC_H
#include <inline/exec.h>
#endif /* _INLINE_EXEC_H */
#else
#include <clib/exec_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_EXEC_H */
