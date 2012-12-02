#include <stdio.h>

extern "C" int imaqGetLastError(void)
{
    fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    return 0;
}

extern "C" char *imaqGetErrorText(int errorCode)
{
    fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    return (char *) "imaqGetErrorText UNIMPLEMENTED";
}
