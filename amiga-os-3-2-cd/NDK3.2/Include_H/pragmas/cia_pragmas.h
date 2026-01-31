#ifndef PRAGMAS_CIA_PRAGMAS_H
#define PRAGMAS_CIA_PRAGMAS_H

/*
**	$Id: cia_pragmas.h 1.7 1990-07-19 13:14:03 rsbx Exp $
**
**	Lattice 'C', Aztec 'C', SAS/C and DICE format pragma files.
*/

#ifndef CLIB_CIA_PROTOS_H
#include <clib/cia_protos.h>
#endif /* CLIB_CIA_PROTOS_H */

/****************************************************************************/

/*
 * The ciaa.resource/ciab.resource library stub function are part of
 * amiga.lib, but it should not be necessary to use them. The following
 * defines local functions which then in turn call the respective
 * ciaa.resource/ciab.resource functions through the "#pragma libcall"
 * mechanism.
 */

/****************************************************************************/

struct Interrupt *_AddICRVector( LONG iCRBit, struct Interrupt *interrupt );
VOID _RemICRVector( LONG iCRBit, struct Interrupt *interrupt );
WORD _AbleICR( LONG mask );
WORD _SetICR( LONG mask );

/****************************************************************************/

#pragma libcall _CIABase _AddICRVector 6 9002
#pragma libcall _CIABase _RemICRVector c 9002
#pragma libcall _CIABase _AbleICR 12 001
#pragma libcall _CIABase _SetICR 18 001

/****************************************************************************/

STATIC struct Interrupt *
AddICRVector_stub(
	struct Library *	_CIABase,
	LONG			iCRBit,
	struct Interrupt *	interrupt)
{
	return(_AddICRVector(iCRBit, interrupt));
}

#define AddICRVector(resource, iCRBit, interrupt) \
	AddICRVector_stub(resource, iCRBit, interrupt)

/****************************************************************************/

STATIC VOID
RemICRVector_stub(
	struct Library *	_CIABase,
	LONG			iCRBit,
	struct Interrupt *	interrupt)
{
	_RemICRVector(iCRBit, interrupt);
}

#define RemICRVector(resource, iCRBit, interrupt) \
	RemICRVector_stub(resource, iCRBit, interrupt)

/****************************************************************************/

STATIC WORD
AbleICR_stub(
	struct Library *	_CIABase,
	WORD			mask)
{
	return(_AbleICR(mask));
}

#define AbleICR(resource, mask) \
	AbleICR_stub(resource, mask)

/****************************************************************************/

STATIC WORD
SetICR_stub(
	struct Library *	_CIABase,
	WORD			mask)
{
	return(_SetICR(mask));
}

#define SetICR(resource, mask) \
	SetICR_stub(resource, mask)

/****************************************************************************/

#endif /* PRAGMAS_CIA_PRAGMAS_H */
