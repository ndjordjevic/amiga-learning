#ifndef CLIB_MATHIEEESINGTRANS_PROTOS_H
#define CLIB_MATHIEEESINGTRANS_PROTOS_H

/*
**	$Id: mathieeesingtrans_protos.h 40.2 2001-07-08 12:50:35 olsen Exp $
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
FLOAT IEEESPAtan( FLOAT parm );
FLOAT IEEESPSin( FLOAT parm );
FLOAT IEEESPCos( FLOAT parm );
FLOAT IEEESPTan( FLOAT parm );
FLOAT IEEESPSincos( FLOAT *cosptr, FLOAT parm );
FLOAT IEEESPSinh( FLOAT parm );
FLOAT IEEESPCosh( FLOAT parm );
FLOAT IEEESPTanh( FLOAT parm );
FLOAT IEEESPExp( FLOAT parm );
FLOAT IEEESPLog( FLOAT parm );
FLOAT IEEESPPow( FLOAT exp, FLOAT arg );
FLOAT IEEESPSqrt( FLOAT parm );
FLOAT IEEESPTieee( FLOAT parm );
FLOAT IEEESPFieee( FLOAT parm );
FLOAT IEEESPAsin( FLOAT parm );
FLOAT IEEESPAcos( FLOAT parm );
FLOAT IEEESPLog10( FLOAT parm );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_MATHIEEESINGTRANS_PROTOS_H */
