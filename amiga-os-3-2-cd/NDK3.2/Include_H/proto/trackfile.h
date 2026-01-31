#ifndef PROTO_TRACKFILE_H
#define PROTO_TRACKFILE_H

/*
**	$Id: trackfile.h 2.2 2020-06-11 12:27:55 obarthel Exp $
**
**	Lattice 'C' style prototype/pragma header file combo
**
**	Copyright (C) 2020 by Olaf Barthel
*/

/****************************************************************************/

#ifndef _NO_INLINE

/****************************************************************************/

#ifndef __NOLIBBASE__

#ifndef EXEC_DEVICES_H
#include <exec/devices.h>
#endif /* EXEC_DEVICES_H */

extern struct Device * TrackFileBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)

/****************************************************************************/

#ifndef PRAGMAS_TRACKFILE_PRAGMAS_H
#include <pragmas/trackfile_pragmas.h>
#endif /* PRAGMAS_TRACKFILE_PRAGMAS_H */

/****************************************************************************/

#elif defined(AZTEC_C) || defined(__MAXON__) || defined(__STORM__)

#ifndef PRAGMA_TRACKFILE_LIB_H
#include <pragma/trackfile_lib.h>
#endif /* PRAGMA_TRACKFILE_LIB_H */

/****************************************************************************/

#elif defined(__GNUC__)

#if defined(mc68000)
#ifndef _INLINE_TRACKFILE_H
#include <inline/trackfile.h>
#endif /* _INLINE_TRACKFILE_H */
#else
#include <clib/trackfile_protos.h>
#endif /* mc68000 */

/****************************************************************************/

#endif /* __GNUC__ */

/****************************************************************************/

#endif /* _NO_INLINE */

/****************************************************************************/

#endif /* PROTO_TRACKFILE_H */
