/* Hack to simulate */
#if ! defined(_ERRNOLIB_H_INCLUDED)
#define ERRNOLIB_H_INCLUDED
#include <errno.h>

#define errnoGet() errno

#define S_objLib_OBJ_ID_ERROR   -5
#define S_objLib_OBJ_DELETED    -6
#define S_taskLib_ILLEGAL_OPTIONS   -10
#define S_taskLib_ILLEGAL_PRIORITY  -11
#define S_memLib_NOT_ENOUGH_MEMORY  -20


#endif
