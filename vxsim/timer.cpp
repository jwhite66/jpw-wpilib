#include <sys/time.h>
#include <stdlib.h>
UINT32 GetFPGATime()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);

    return tv.tv_sec * 1000000 + tv.tv_usec;
}
