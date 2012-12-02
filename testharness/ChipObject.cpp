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
        tAccumulator* tAccumulator::create (unsigned char sys_index, tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return NULL;
        }

        tAI* tAI::create (unsigned char sys_index, tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return NULL;
        }

        tDIO* tDIO::create (unsigned char sys_index, tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return NULL;
        }

        tInterrupt* tInterrupt::create (unsigned char sys_index, tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return NULL;
        }

        tWatchdog* tWatchdog::create(tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return NULL;
        }
    }

    tSystem::tSystem(tRioStatusCode *status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }
    tSystem::~tSystem()
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }

    tInterruptManager::tInterruptManager(uint32_t interruptMask, bool watcher, tRioStatusCode *status) : tSystem(status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }
    tInterruptManager::~tInterruptManager()
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }
    void tInterruptManager::registerHandler(tInterruptHandler handler, void *param, tRioStatusCode *status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }
    uint32_t tInterruptManager::tInterruptManager::watch(int32_t timeoutInMs, tRioStatusCode *status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
        return 0;
    }
    void tInterruptManager::enable(tRioStatusCode *status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }
    void tInterruptManager::disable(tRioStatusCode *status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
    }
    bool tInterruptManager::isEnabled(tRioStatusCode *status)
    {
        fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
        return 0;
    }
}
