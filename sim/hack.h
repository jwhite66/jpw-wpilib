/* File with hacks to make things compile */
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>


typedef void (*FUNCPTR)(void*);

typedef int STATUS;
typedef unsigned int UINT;

#define TRUE 1

typedef void * SEM_ID;

#define ERROR -1
#define OK 0

#define WAIT_FOREVER -1
#define NO_WAIT 0

#define SEM_DELETE_SAFE 4
#define SEM_INVERSION_SAFE 8

#define SEM_Q_FIFO  0
#define SEM_Q_PRIORITY 1

#define SEM_FULL 1
#define SEM_EMPTY 0

#if ! defined(NULL)
#define NULL 0
#endif

static SEM_ID inline semBCreate(int param, int initial)
{
    sem_t *id;
    int shmid;

    shmid = shmget(IPC_PRIVATE, sizeof(*id), IPC_CREAT | S_IRWXU);
    if (shmid == -1)
        return NULL;

    id = (sem_t *) shmat(shmid, 0, 0);
    if (id == (sem_t *) -1)
        return NULL;

    if (sem_init(id, 1 /* shared */, initial))
        return NULL;

    return (SEM_ID) id;
}

static SEM_ID inline semMCreate(int options)
{
    return semBCreate(options, SEM_FULL);
}

static STATUS inline semDelete(SEM_ID id)
{
    STATUS ret = OK;
    if (sem_destroy((sem_t *) id))
        ret = ERROR;

    if (shmdt((sem_t *) id))
        ret = ERROR;

    return ret;
}

static STATUS inline semFlush(SEM_ID id)
{
    int val;
    if (sem_getvalue((sem_t*) id, &val) != 0)
        return ERROR;
    
    while (val <= 0)
    {
        if (sem_post((sem_t*) id) != 0)
            return ERROR;

        if (sem_getvalue((sem_t*) id, &val) != 0)
            return ERROR;
    }

    return OK;
}

static STATUS inline semGive(SEM_ID id)
{
    int ret;
    ret = sem_post((sem_t *) id);
    if (ret == 0)
        return OK;
    return ERROR;
}

static STATUS inline semTake(SEM_ID id, int timeout)
{
    int ret;
    if (timeout == NO_WAIT)
        ret = sem_trywait((sem_t *) id);
    else if (timeout == WAIT_FOREVER)
        ret = sem_wait((sem_t *) id);
    else
    {
        struct timespec tv;

        tv.tv_sec = timeout / 1000;
        tv.tv_nsec = (timeout % 1000) * 1000000L;
        ret = sem_timedwait((sem_t *) id, &tv);
    }
    
    if (ret == 0)
        return OK;

    return ERROR;
}
