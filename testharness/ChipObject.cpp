#include <stdio.h>
#include "NiFpga.h"
#include "Error.h"
#include "tAccumulator.h"
#include "tAI.h"
#include "tDIO.h"
#include "tInterrupt.h"
#include "tWatchdog.h"
#include "tSystem.h"
#include "tInterruptManager.h"

namespace nFPGA
{
    namespace nFRC_2012_1_6_4
    {
        tAccumulator* tAccumulator::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }
        tAI* tAI::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }
        tDIO* tDIO::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }
        tInterrupt* tInterrupt::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }

        class WatchDogImpl : public tWatchdog
        {
            public:
               tSystemInterface* getSystemInterface() { UN_NULL }
               tStatus readStatus(tRioStatusCode *status) { UN_FPRINTF; return m_status; }
               bool readStatus_SystemActive(tRioStatusCode *status) { UN_ZERO }
               bool readStatus_Alive(tRioStatusCode *status){ UN_ZERO }
               unsigned short readStatus_SysDisableCount(tRioStatusCode *status){ UN_ZERO }
               unsigned short readStatus_DisableCount(tRioStatusCode *status){ UN_ZERO }
               void writeImmortal(bool value, tRioStatusCode *status){UN_VOID}
               bool readImmortal(tRioStatusCode *status){ UN_ZERO }
               void strobeKill(tRioStatusCode *status){UN_VOID}
               void strobeFeed(tRioStatusCode *status){UN_VOID}
               void writeExpiration(unsigned int value, tRioStatusCode *status){UN_VOID}
               unsigned int readExpiration(tRioStatusCode *status){ UN_ZERO }
               unsigned int readTimer(tRioStatusCode *status){ UN_ZERO }

            protected:
              tStatus m_status;
        };

        tWatchdog* tWatchdog::create(tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s Mostly UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return new WatchDogImpl;
        }
    }

    tSystem::tSystem(tRioStatusCode *status) { UN_VOID }
    tSystem::~tSystem() { UN_VOID }

    tInterruptManager::tInterruptManager(uint32_t interruptMask, bool watcher, tRioStatusCode *status) : tSystem(status) { UN_VOID }
    tInterruptManager::~tInterruptManager() { UN_VOID }
    void tInterruptManager::registerHandler(tInterruptHandler handler, void *param, tRioStatusCode *status) { UN_VOID }
    uint32_t tInterruptManager::tInterruptManager::watch(int32_t timeoutInMs, tRioStatusCode *status) { UN_ZERO }
    void tInterruptManager::enable(tRioStatusCode *status) { UN_VOID }
    void tInterruptManager::disable(tRioStatusCode *status) { UN_VOID }
    bool tInterruptManager::isEnabled(tRioStatusCode *status){ UN_ZERO }
}
