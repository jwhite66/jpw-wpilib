#include "taskLib.h"
#include "sysLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

STATUS taskDelay(int ticks)
{
    struct timespec tv;
    if (ticks == 0)
    {
        sched_yield();
        return OK;
    }
    tv.tv_sec = 0;
    tv.tv_nsec = 1000000000L / sysClkRateGet();
    if (nanosleep(&tv, NULL) == 0)
        return OK;

    return ERROR;
}

STATUS taskSuspend(int tid)
{
    abort();
    return ERROR;
}

int taskNameToId (char * name)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}

int taskSpawn(char *name, int priority, int options,
              int stackSize, FUNCPTR entryPt,
              void * arg1, void * arg2, void * arg3, void * arg4, void * arg5,
              void * arg6, void * arg7, void * arg8, void * arg9, void * arg10)
{
    int rc;
    pthread_t tid;
    fprintf(stderr, "%s partially implemented; not doing priority, options, or stacksize\n", __FUNCTION__);
    rc = pthread_create(&tid, NULL, (void* (*)(void*)) entryPt, (void *) arg1);
    if (rc == 0)
        return OK;
    else
        return ERROR;
}

STATUS taskDelete(int tid)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}

STATUS taskResume(int tid)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}

STATUS taskRestart(int tid)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}

STATUS taskPrioritySet(int tid, int newPriority)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}

STATUS taskPriorityGet(int tid, int *pPriority)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}

BOOL taskIsReady(int tid)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return FALSE;
}

BOOL taskIsSuspended(int tid)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return FALSE;
}

STATUS taskIdVerify(int tid)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
    return ERROR;
}




