#ifndef CLIB_REXXSYSLIB_PROTOS_H
#define CLIB_REXXSYSLIB_PROTOS_H

/*
**	$Id: rexxsyslib_protos.h 36.3 1991-02-19 11:30:00 mks Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*--- functions in V33 or higher (Release 1.2) ---*/
#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef  REXX_RXSLIB_H
#include <rexx/rxslib.h>
#endif
#ifndef  REXX_REXXIO_H
#include <rexx/rexxio.h>
#endif
#ifndef  DOS_DOS_H
#include <dos/dos.h>
#endif

UBYTE *CreateArgstring( CONST_STRPTR string, ULONG length );
VOID DeleteArgstring( UBYTE *argstring );
ULONG LengthArgstring( CONST UBYTE *argstring );
struct RexxMsg *CreateRexxMsg( struct MsgPort *port, CONST_STRPTR extension, CONST_STRPTR host );
VOID DeleteRexxMsg( struct RexxMsg *packet );
VOID ClearRexxMsg( struct RexxMsg *msgptr, ULONG count );
BOOL FillRexxMsg( struct RexxMsg *msgptr, ULONG count, ULONG mask );
BOOL IsRexxMsg( CONST struct RexxMsg *msgptr );


VOID LockRexxBase( ULONG resource );
VOID UnlockRexxBase( ULONG resource );

/*--- function in V45 or higher (Release 3.9) ---*/

struct MsgPort *CreateRexxHostPort( CONST_STRPTR basename );
VOID DeleteRexxHostPort( struct MsgPort *port );
LONG GetRexxVarFromMsg( CONST_STRPTR var, CONST struct RexxMsg *msgptr, STRPTR value );
LONG SetRexxVarFromMsg( CONST_STRPTR var, struct RexxMsg *msgptr, CONST_STRPTR value );
struct RexxMsg *LaunchRexxScript( CONST_STRPTR script, struct MsgPort *replyport, CONST_STRPTR extension, BPTR input, BPTR output );
VOID FreeRexxMsg( struct RexxMsg *msgptr );

/*--- function in V47 or higher (Release 3.2) ---*/

LONG GetRexxBufferFromMsg( CONST_STRPTR var, CONST struct RexxMsg *msgptr, STRPTR buffer, ULONG buffer_size );


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_REXXSYSLIB_PROTOS_H */
