#include <stdio.h>

extern "C" int imaqGetLastError(void)
{
    UN_ZERO
}

extern "C" char *imaqGetErrorText(int errorCode)
{
    UN_FPRINTF
    return (char *) "imaqGetErrorText UNIMPLEMENTED";
}
