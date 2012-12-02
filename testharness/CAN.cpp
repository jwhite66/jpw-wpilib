#include "JaguarCANDriver.h"
#include <stdio.h>

void FRC_NetworkCommunication_JaguarCANDriver_sendMessage(UINT32 messageID, const UINT8 *data, UINT8 dataSize, INT32 *status)
{
    fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
}
void FRC_NetworkCommunication_JaguarCANDriver_receiveMessage(UINT32 *messageID, UINT8 *data, UINT8 *dataSize, UINT32 timeoutMs, INT32 *status)
{
    fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
}

