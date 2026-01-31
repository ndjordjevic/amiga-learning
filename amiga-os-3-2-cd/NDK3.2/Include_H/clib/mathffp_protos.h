#ifndef CLIB_MATHFFP_PROTOS_H
#define CLIB_MATHFFP_PROTOS_H

/*
**	$Id: mathffp_protos.h 1.4 1990-05-03 11:51:45 rsbx Exp $
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
LONG SPFix( FLOAT parm );
FLOAT SPFlt( LONG integer );
LONG SPCmp( FLOAT leftParm, FLOAT rightParm );
LONG SPTst( FLOAT parm );
FLOAT SPAbs( FLOAT parm );
FLOAT SPNeg( FLOAT parm );
FLOAT SPAdd( FLOAT leftParm, FLOAT rightParm );
FLOAT SPSub( FLOAT leftParm, FLOAT rightParm );
FLOAT SPMul( FLOAT leftParm, FLOAT rightParm );
FLOAT SPDiv( FLOAT leftParm, FLOAT rightParm );
/*--- functions in V33 or higher (Release 1.2) ---*/
FLOAT SPFloor( FLOAT parm );
FLOAT SPCeil( FLOAT parm );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_MATHFFP_PROTOS_H */
