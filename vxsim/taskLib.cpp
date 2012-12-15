#include "taskLib.h"
#include "sysLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <string>
#include <vector>

struct task_info
{
    std::string name;
    pthread_t tid;
    unsigned int id;
};

std::vector <struct task_info> g_tasks;
int g_highest_id = 0;

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
    UN_ERROR
}

int taskNameToId (char * name)
{
    std::vector <struct task_info>::const_iterator ti;
    for (ti = g_tasks.begin(); ti != g_tasks.end(); ti++)
        if (ti->name == name)
        {
            return ti->id;
        }

    return ERROR;
}

typedef void * (*vx_entry)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
void *pthread_to_vx_entry_gateway(void *p)
{
    void **args = (void **) p;
    void *ret;
    vx_entry f = (vx_entry) args[0];
    ret = (*f)(args[1], args[2], args[3], args[4], args[5], args[6], args[7], args[8], args[9], args[10]);
    free(p);
    return ret;
}

int taskSpawn(char *name, int priority, int options,
              int stackSize, FUNCPTR entryPt,
              void * arg1, void * arg2, void * arg3, void * arg4, void * arg5,
              void * arg6, void * arg7, void * arg8, void * arg9, void * arg10)
{
    int rc;
    pthread_t tid;
    struct task_info task;
    void **args;

    args = (void **) malloc(11 * sizeof(*args));
    args[0] = (void *) entryPt;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    args[4] = arg4;
    args[5] = arg5;
    args[6] = arg6;
    args[7] = arg7;
    args[8] = arg8;
    args[9] = arg9;
    args[10] = arg10;

    if (LOG_DEBUG)
        fprintf(stderr, "%s partially implemented; not doing priority, options, or stacksize\n", __PRETTY_FUNCTION__);
    rc = pthread_create(&tid, NULL, &pthread_to_vx_entry_gateway, (void *) args);
    if (rc == 0)
    {
        task.name = name;
        task.tid = tid;
        task.id = ++g_highest_id;
        g_tasks.push_back(task);

        if (LOG_INFO)
            fprintf(stderr, "spawned task %s, pthread tid %lu as id %d\n", name, tid, task.id);
        return OK;
    }
    else
        return ERROR;
}

STATUS taskDelete(int tid)
{
    UN_ERROR
}

STATUS taskResume(int tid)
{
    UN_ERROR
}

STATUS taskRestart(int tid)
{
    UN_ERROR
}

STATUS taskPrioritySet(int tid, int newPriority)
{
    UN_ERROR
}

STATUS taskPriorityGet(int tid, int *pPriority)
{
    UN_ERROR
}

BOOL taskIsReady(int tid)
{
    UN_ZERO
}

BOOL taskIsSuspended(int tid)
{
    UN_ZERO
}

STATUS taskIdVerify(int tid)
{
    UN_ERROR
}




