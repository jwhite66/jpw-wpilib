/* Hack to simulate */

#if ! defined(_USRLIB_H_INCLUDED)
#define _USRLIB_H_INCLUDED
#include <taskLib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void inline printErrno(int errNo)
{
    fprintf(stderr, "%s\n", strerror(errNo));
}

#endif
