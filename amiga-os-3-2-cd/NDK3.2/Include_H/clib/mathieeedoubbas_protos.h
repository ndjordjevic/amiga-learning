#ifndef CLIB_MATHIEEEDOUBBAS_PROTOS_H
#define CLIB_MATHIEEEDOUBBAS_PROTOS_H

/*
**	$Id: mathieeedoubbas_protos.h 1.4 2003-06-21 13:30:28 obarthel Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif
LONG IEEEDPFix( DOUBLE parm );
DOUBLE IEEEDPFlt( LONG integer );
LONG IEEEDPCmp( DOUBLE leftParm, DOUBLE rightParm );
LONG IEEEDPTst( DOUBLE parm );
DOUBLE IEEEDPAbs( DOUBLE parm );
DOUBLE IEEEDPNeg( DOUBLE parm );
DOUBLE IEEEDPAdd( DOUBLE leftParm, DOUBLE rightParm );
DOUBLE IEEEDPSub( DOUBLE leftParm, DOUBLE rightParm );
DOUBLE IEEEDPMul( DOUBLE factor1, DOUBLE factor2 );
DOUBLE IEEEDPDiv( DOUBLE dividend, DOUBLE divisor );
/*--- functions in V33 or higher (Release 1.2) ---*/
DOUBLE IEEEDPFloor( DOUBLE parm );
DOUBLE IEEEDPCeil( DOUBLE parm );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_MATHIEEEDOUBBAS_PROTOS_H */
