;/*
sc LED.c LINK NOSTACKCHECK
quit
*/

#include <dos/dos.h>
#include <exec/types.h>
#include <exec/libraries.h>
#include <intuition/intuition.h>
#include <intuition/imageclass.h>
#include <intuition/intuitionbase.h>
#include <stdlib.h>
#include <stdio.h>

#include <images/led.h>

#include <clib/macros.h>
#include <clib/dos_protos.h>
#include <clib/exec_protos.h>
#include <clib/intuition_protos.h>

#include <pragmas/dos_pragmas.h>
#include <pragmas/exec_pragmas.h>
#include <pragmas/intuition_pragmas.h>

/*****************************************************************************/

#define	IDCMP_FLAGS	IDCMP_CLOSEWINDOW | IDCMP_VANILLAKEY | IDCMP_GADGETUP | IDCMP_GADGETDOWN \
			| IDCMP_MOUSEMOVE | IDCMP_INTUITICKS | IDCMP_MOUSEBUTTONS

/*****************************************************************************/

extern struct Library *SysBase, *DOSBase;
struct Library *IntuitionBase;

/*****************************************************************************/

struct ClassLibrary *openclass (STRPTR name, ULONG version);

/*****************************************************************************/

void main (int argc, char **argv)
{
    struct ClassLibrary *imageLib;
    struct IntuiMessage *imsg;
    struct Screen *scr;
    struct Window *win;
    struct Image *im;
    BOOL going = TRUE;
    ULONG sigr;
    WORD ledvalues[2] = { 26, 50 };

    if (IntuitionBase = OpenLibrary ("intuition.library", 37))
    {
	scr = ((struct IntuitionBase *)IntuitionBase)->FirstScreen;

	if (imageLib = openclass ("images/led.image", 37))
	{
	    if (win = OpenWindowTags (NULL,
				      WA_Title,		"led.image Test",
				      WA_InnerWidth,	240,
				      WA_InnerHeight,	140,
				      WA_IDCMP,		IDCMP_FLAGS,
				      WA_DragBar,	TRUE,
				      WA_DepthGadget,	TRUE,
				      WA_CloseGadget,	TRUE,
				      WA_SimpleRefresh,	TRUE,
				      WA_NoCareRefresh,	TRUE,
				      WA_Activate,	TRUE,
				      WA_CustomScreen,	scr,
				      TAG_DONE))
	    {
		/* Create the led image */
		if (im = NewObject (NULL, "led.image",

					IA_FGPen,	1,
					IA_BGPen,	0,
					IA_Width,	200,
					IA_Height,	100,
					LED_Values,     &ledvalues,
					TAG_DONE))
		{
		    /* Draw the image */
		    DrawImage (win->RPort, im, win->BorderLeft + 20, win->BorderTop + 20);

		    while (going)
		    {
			sigr = Wait ((1L << win->UserPort->mp_SigBit | SIGBREAKF_CTRL_C));

			if (sigr & SIGBREAKF_CTRL_C)
			    going = FALSE;

			while (imsg = (struct IntuiMessage *) GetMsg (win->UserPort))
			{
			    switch (imsg->Class)
			    {
				case IDCMP_CLOSEWINDOW:
				    going = FALSE;
				    break;

				case IDCMP_VANILLAKEY:
				    switch (imsg->Code)
				    {
					case  27:
					case 'q':
					case 'Q':
					    going = FALSE;
					    break;
				    }
				    break;

			    }

			    ReplyMsg ((struct Message *) imsg);
			}
		    }
		    DisposeObject (im);
		}

		CloseWindow (win);
	    }
	    else
		Printf ("couldn't open the window\n");

	    CloseLibrary ((struct Library *) imageLib);
	}
	else
	    Printf ("couldn't open classes:images/led.image\n");

	CloseLibrary (IntuitionBase);
    }
}


/*****************************************************************************/

/* Try opening the class library from a number of common places */
struct ClassLibrary *openclass (STRPTR name, ULONG version)
{
 // struct ExecBase *SysBase = (*((struct ExecBase **) 4));
    struct Library *retval;
    UBYTE buffer[256];

    if ((retval = OpenLibrary (name, version)) == NULL)
    {
	sprintf (buffer, ":classes/%s", name);
	if ((retval = OpenLibrary (buffer, version)) == NULL)
	{
	    sprintf (buffer, "classes/%s", name);
	    retval = OpenLibrary (buffer, version);
	}
    }
    return (struct ClassLibrary *) retval;
}
