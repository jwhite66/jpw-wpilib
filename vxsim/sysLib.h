/* Hack to simulate */
#if ! defined(_SYSLIB_H_INCLUDED)
#define _SYSLIB_H_INCLUDED

#include <unistd.h>

static inline int sysClkRateGet (void)
{
    return sysconf(_SC_CLK_TCK);
}

#endif
