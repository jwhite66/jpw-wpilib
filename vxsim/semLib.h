/* Dummy file to simulate wind river */

#if ! defined(_SEMLIB_H_INCLUDED)
#define _SEMLIB_H_INCLUDED

#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <semaphore.h>


typedef void * SEM_ID;

#define WAIT_FOREVER -1
#define NO_WAIT 0

#define SEM_DELETE_SAFE 4
#define SEM_INVERSION_SAFE 8

#define SEM_Q_FIFO  0
#define SEM_Q_PRIORITY 1

#define SEM_FULL 1
#define SEM_EMPTY 0


SEM_ID semBCreate(int param, int initial);
SEM_ID semMCreate(int options);
STATUS semDelete(SEM_ID id);
STATUS semFlush(SEM_ID id);
STATUS semGive(SEM_ID id);
STATUS semTake(SEM_ID id, int timeout);

#endif
