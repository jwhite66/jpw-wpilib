#include "taskLib.h"
#include <stdio.h>
#include <stdlib.h>

STATUS taskDelay(int ticks)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
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
    return 0;
}

int taskSpawn(char *name, int priority, int options,
              int stackSize, FUNCPTR entryPt,
              int arg1, int arg2, int arg3, int arg4, int arg5,
              int arg6, int arg7, int arg8, int arg9, int arg10)
{
    fprintf(stderr, "%s not implemented\n", __FUNCTION__);
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




