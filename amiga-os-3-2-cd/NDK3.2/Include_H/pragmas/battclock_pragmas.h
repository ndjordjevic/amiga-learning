#ifndef PRAGMAS_BATTCLOCK_PRAGMAS_H
#define PRAGMAS_BATTCLOCK_PRAGMAS_H

/*
**	$Id: battclock_pragmas.h 1.3 1990-05-03 11:57:44 rsbx Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_BATTCLOCK_PROTOS_H
#include <clib/battclock_protos.h>
#endif /* CLIB_BATTCLOCK_PROTOS_H */

/* "battclock.resource" */
#pragma libcall BattClockBase ResetBattClock 6 00
#pragma libcall BattClockBase ReadBattClock c 00
#pragma libcall BattClockBase WriteBattClock 12 001

#endif /* PRAGMAS_BATTCLOCK_PRAGMAS_H */
