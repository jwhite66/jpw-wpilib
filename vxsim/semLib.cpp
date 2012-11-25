#include <semLib.h>

SEM_ID semBCreate(int param, int initial)
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

SEM_ID semMCreate(int options)
{
    return semBCreate(options, SEM_FULL);
}

STATUS semDelete(SEM_ID id)
{
    STATUS ret = OK;
    if (sem_destroy((sem_t *) id))
        ret = ERROR;

    if (shmdt((sem_t *) id))
        ret = ERROR;

    return ret;
}

STATUS semFlush(SEM_ID id)
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

STATUS semGive(SEM_ID id)
{
    int ret;
    ret = sem_post((sem_t *) id);
    if (ret == 0)
        return OK;
    return ERROR;
}

STATUS semTake(SEM_ID id, int timeout)
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
