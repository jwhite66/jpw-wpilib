#include "AICalibration.h"
#include "FRCComm.h"
#include <stdio.h>
#include "symModuleLink.h"

UINT32 FRC_NetworkCommunication_nAICalibration_getLSBWeight(const UINT32 aiSystemIndex, const UINT32 channel, INT32 *status)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return 0;
}
INT32 FRC_NetworkCommunication_nAICalibration_getOffset(const UINT32 aiSystemIndex, const UINT32 channel, INT32 *status)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return 0;
}
int getCommonControlData(FRCCommonControlData *data, int wait_ms)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
int getDynamicControlData(UINT8 type, char *dynamicData, INT32 maxLength, int wait_ms)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
int setStatusData(float battery, UINT8 dsDigitalOut, UINT8 updateNumber,
			const char *userDataHigh, int userDataHighLength,
			const char *userDataLow, int userDataLowLength, int wait_ms)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
int setStatusDataFloatAsInt(int battery, UINT8 dsDigitalOut, UINT8 updateNumber,
			const char *userDataHigh, int userDataHighLength,
			const char *userDataLow, int userDataLowLength, int wait_ms)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
int setErrorData(const char *errors, int errorsLength, int wait_ms)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
int overrideIOConfig(const char *ioConfig, int wait_ms)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
void setNewDataSem(SEM_ID)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
}
void FRC_NetworkCommunication_observeUserProgramStarting(void)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
}
void FRC_NetworkCommunication_observeUserProgramDisabled(void)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
}
void FRC_NetworkCommunication_observeUserProgramAutonomous(void)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
}
void FRC_NetworkCommunication_observeUserProgramTeleop(void)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
}
STATUS moduleNameFindBySymbolName(const char * symbol,char *module)
{
    fprintf(stderr, "%s UNIMPLEMENTED\n", __FUNCTION__);
    return ERROR;
}
