#ifndef PRAGMAS_BULLET_PRAGMAS_H
#define PRAGMAS_BULLET_PRAGMAS_H

/*
**	$Id: bullet_pragmas.h 44.1 2002-02-11 19:04:33 o.barthel Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_BULLET_PROTOS_H
#include <clib/bullet_protos.h>
#endif /* CLIB_BULLET_PROTOS_H */

/* "bullet.library" */
#pragma libcall BulletBase OpenEngine 1e 00
#pragma libcall BulletBase CloseEngine 24 801
#pragma libcall BulletBase SetInfoA 2a 9802
#if defined(__SASC_60)
#pragma tagcall BulletBase SetInfo 2a 9802
#endif /* __SASC_60 */
#pragma libcall BulletBase ObtainInfoA 30 9802
#if defined(__SASC_60)
#pragma tagcall BulletBase ObtainInfo 30 9802
#endif /* __SASC_60 */
#pragma libcall BulletBase ReleaseInfoA 36 9802
#if defined(__SASC_60)
#pragma tagcall BulletBase ReleaseInfo 36 9802
#endif /* __SASC_60 */

#endif /* PRAGMAS_BULLET_PRAGMAS_H */
