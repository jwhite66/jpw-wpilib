#include "AICalibration.h"
#include "FRCComm.h"
#include "LoadOut.h"
#include <stdio.h>
#include "symModuleLink.h"

SEM_ID g_data_sem = 0;

UINT32 FRC_NetworkCommunication_nAICalibration_getLSBWeight(const UINT32 aiSystemIndex, const UINT32 channel, INT32 *status) { UN_ZERO }
INT32 FRC_NetworkCommunication_nAICalibration_getOffset(const UINT32 aiSystemIndex, const UINT32 channel, INT32 *status) { UN_ZERO }
int getCommonControlData(FRCCommonControlData *data, int wait_ms) { UN_ERROR }
int getDynamicControlData(UINT8 type, char *dynamicData, INT32 maxLength, int wait_ms) { UN_ERROR }
int setStatusData(float battery, UINT8 dsDigitalOut, UINT8 updateNumber,
			const char *userDataHigh, int userDataHighLength,
			const char *userDataLow, int userDataLowLength, int wait_ms) { UN_ERROR }
int setStatusDataFloatAsInt(int battery, UINT8 dsDigitalOut, UINT8 updateNumber,
			const char *userDataHigh, int userDataHighLength,
			const char *userDataLow, int userDataLowLength, int wait_ms) { UN_ERROR }
int setErrorData(const char *errors, int errorsLength, int wait_ms) { UN_ERROR }
int overrideIOConfig(const char *ioConfig, int wait_ms) { UN_ERROR }
void setNewDataSem(SEM_ID s)
{
fprintf(stderr, "%s(%d): %s setNewDataSem to %p, JPW\n", __FILE__, __LINE__, __FUNCTION__, s);
    g_data_sem = s;
}

void PacketReady(void)
{
#if ! defined(STANDALONE)
    if (g_data_sem != 0)
    {
        fprintf(stderr, "PacketReady() sem rc %d\n", semGive(g_data_sem));
    }
    else
        fprintf(stderr, "JPW Um... global semaphore ain't right...\n");
#endif
}

void FRC_NetworkCommunication_observeUserProgramStarting(void) { UN_VOID }
void FRC_NetworkCommunication_observeUserProgramDisabled(void) { UN_VOID }
void FRC_NetworkCommunication_observeUserProgramAutonomous(void) { UN_VOID }
void FRC_NetworkCommunication_observeUserProgramTeleop(void) { UN_VOID }
STATUS moduleNameFindBySymbolName(const char * symbol,char *module) { UN_ERROR }

bool nLoadOut::getModulePresence(tModuleType moduleType, UINT8 moduleNumber)
{
    fprintf(stderr, "%s Mostly UNIMPLEMENTED\n", __FUNCTION__);
    return TRUE;
}

