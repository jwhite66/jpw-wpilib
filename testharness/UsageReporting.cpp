#include "UsageReporting.h"
#include <stdio.h>

UINT32 nUsageReporting::report(nUsageReporting::tResourceType resource, UINT8 instanceNumber, UINT8 context, const char *feature)
{
    printf("Usage report: [res %d|instance %d|context %d|feature %s]\n", resource, instanceNumber, context,
                feature ? feature : "(null)");
    return OK;
}
