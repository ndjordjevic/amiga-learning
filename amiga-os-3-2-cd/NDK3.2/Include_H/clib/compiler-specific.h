#ifndef	COMPILER_SPECIFIC_H
#define	COMPILER_SPECIFIC_H
/*
**	$VER: compiler-specific.h 47.3 (20.10.2020)
**
**	Compiler-specific data and function attributes. Must
**	be included with operating system library and device
**	header files.
**
**	Copyright (C) 2020 Hyperion Entertainment CVBA.
**	    Developed under license.
*/

/* Some structure definitions include prototypes for function pointers.
 * This may not work with 'C' compilers that do not comply to the ANSI
 * standard, which we will have to work around.
 */
#if __STDC__
#define __CLIB_PROTOTYPE(a) a
#else
#define __CLIB_PROTOTYPE(a) ()
#endif /* __STDC__ */

/*
** Some functions have special calling conventions that may be communicated
** to the compiler by compiler specific tricks. For the Lattice and SAS/C
** compilers the #defines are given here. Otherwise, they should be defined
** before including the OS functions.
*/

/*
** Assembler call with arguments placed in registers. __ASM__ defines such a
** function, with __REG__(r, p) defining the order of the arguments.
*/
#ifndef __ASM__
#ifdef __SASC
#define __ASM__ __asm
#else
#define __ASM__
#endif
#endif /* __ASM__ */

/*
** The __REG__(r, p) macro uses two parameters, which cover the register
** name and the parameter declaration itself. This is necessary because
** the respective compiler syntax may require that the order in which the
** register and the parameter are used is changed. This is the case for
** the GNU 'C' compiler.
*/
#ifndef __REG__
#ifdef __SASC
#define __REG__(r, p) register __ ## r p
#else
#define __REG__(r, p) p
#endif
#endif /* __REG__ */

/*
** Stack based calling conventions
*/
#ifndef __STDARGS__
#ifdef __SASC
#define __STDARGS__ __stdargs
#else
#define __STDARGS__
#endif
#endif /* __STDARGS__ */

/*
** Small data model using A4-relative addressing needs to establish the
** initial A4 register value.
*/
#ifndef __SAVE_DS__
#ifdef __SASC
#define __SAVE_DS__ __saveds
#else
#define __SAVE_DS__
#endif
#endif /* __SAVE_DS__ */

/*
** Data or functions marked for absolute addressing rather than PC or
** register-relative addressing.
*/
#ifndef __FAR__
#ifdef __SASC
#define __FAR__ __far
#else
#define __FAR__
#endif
#endif /* __FAR__ */

/*
** Request that upon exit from a function the CPU condition codes should be
** updated based upon whether or not the value of register D0 is non-zero.
*/
#ifndef __INTERRUPT__
#ifdef __SASC
#define __INTERRUPT__ __interrupt
#else
#define __INTERRUPT__
#endif
#endif /* __INTERRUPT__ */

#endif /* COMPILER_SPECIFIC_H */
