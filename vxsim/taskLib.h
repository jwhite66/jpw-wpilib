/* Dummy file to simulate wind river */
#if ! defined(_TASKLIST_H_INCLUDED)
#define _TASKLIST_H_INCLUDED

#include <strings.h>

#define VX_FP_TASK 0x8

STATUS taskDelay(int ticks);
STATUS taskSuspend(int tid);
int taskNameToId (char * name);
int taskSpawn(char *name, int priority, int options,
              int stackSize, FUNCPTR entryPt,
              void * arg1, void * arg2, void * arg3, void * arg4, void * arg5,
              void * arg6, void * arg7, void * arg8, void * arg9, void * arg10);
STATUS taskDelete(int tid);
STATUS taskResume(int tid);
STATUS taskRestart(int tid);
STATUS taskPrioritySet(int tid, int newPriority);
STATUS taskPriorityGet(int tid, int *pPriority);
BOOL taskIsReady(int tid);
BOOL taskIsSuspended(int tid);
STATUS taskIdVerify(int tid);

#endif
