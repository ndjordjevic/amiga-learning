#ifndef CLIB_DISK_PROTOS_H
#define CLIB_DISK_PROTOS_H

/*
**	$Id: disk_protos.h 36.1 1991-02-19 03:51:46 jesup Exp $
**
**	'C' prototypes. For use with 32 bit integers only.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef  RESOURCES_DISK_H
#include <resources/disk.h>
#endif
BOOL AllocUnit( LONG unitNum );
VOID FreeUnit( LONG unitNum );
struct DiskResourceUnit *GetUnit( struct DiskResourceUnit *unitPointer );
VOID GiveUnit( VOID );
LONG GetUnitID( LONG unitNum );
/*------ new for V37 ------*/
LONG ReadUnitID( LONG unitNum );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CLIB_DISK_PROTOS_H */
