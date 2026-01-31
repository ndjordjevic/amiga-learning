#ifndef DEVICES_TIMER_H
#define DEVICES_TIMER_H 1
/*
**	$VER: timer.h 47.1 (28.6.2019)
**
**	Timer device name and useful definitions.
**
**	Copyright (C) 2019 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

#ifndef EXEC_IO_H
#include <exec/io.h>
#endif

/* unit defintions */
#define UNIT_MICROHZ	0
#define UNIT_VBLANK	1
#define UNIT_ECLOCK	2
#define UNIT_WAITUNTIL	3
#define	UNIT_WAITECLOCK	4

#define TIMERNAME	"timer.device"

/* These are the default definitions for now. If you need a different
   definition of the timeval and timerequest data structures, see below. */

struct TimeVal {
    ULONG tv_secs;
    ULONG tv_micro;
};

struct TimeRequest {
    struct IORequest tr_node;
    struct TimeVal tr_time;
};

/****************************************************************************/

/* The 'struct timeval' definition used by AmigaOS since its introduction in
   the year 1985 was similar to a data structure of the same name as used in
   the Unix domain. Similar, but not identical. This had consequences when
   porting software to the Amiga which came from a Unix/POSIX system, as it
   clashed with the Amiga definition of the 'struct timeval'. Rather than
   use compatibility workarounds, the 'struct timeval' and 'struct timerequest'
   data structures were replaced with 'struct TimeVal' and 'struct TimeRequest',
   respectively.
*/

#ifndef __USE_NEW_TIMEVAL__

struct timeval {
    ULONG tv_secs;
    ULONG tv_micro;
};

struct timerequest {
    struct IORequest tr_node;
    struct timeval tr_time;
};

typedef struct timeval TimeVal_Type;
typedef struct timerequest TimeRequest_Type;

#else

typedef struct TimeVal TimeVal_Type;
typedef struct TimeRequest TimeRequest_Type;

#endif

struct EClockVal {
    ULONG ev_hi;
    ULONG ev_lo;
};


/* IO_COMMAND to use for adding a timer */
#define TR_ADDREQUEST	CMD_NONSTD
#define TR_GETSYSTIME	(CMD_NONSTD+1)
#define TR_SETSYSTIME	(CMD_NONSTD+2)

#endif /* DEVICES_TIMER_H */
