/* File with hacks to make things compile */

#if ! defined(_HACK_H_INCLUDED)
#define _HACK_H_INCLUDED

#include <stdlib.h>
#include <string.h>

//typedef void (*FUNCPTR)(void*);
typedef void * (*FUNCPTR)();

typedef int STATUS;
typedef unsigned int UINT;

typedef unsigned int BOOL;

typedef char * INSTR;
#define TRUE 1
#define FALSE 0

#define ERROR -1
#define OK 0


#if ! defined(NULL)
#define NULL 0
#endif

#define LOG_DEBUG (getenv("WPILOG") && (strstr(getenv("WPILOG"), "debug")             ))
#define LOG_WARN  (getenv("WPILOG") && (strstr(getenv("WPILOG"), "warn")  || LOG_DEBUG))
#define LOG_INFO  (getenv("WPILOG") && (strstr(getenv("WPILOG"), "info")  || LOG_WARN))

#define UN_FPRINTF  fprintf(stderr, "%s(%d): %s UNIMPLEMENTED\n", __FILE__, __LINE__, __PRETTY_FUNCTION__);
#define UN_VOID     UN_FPRINTF
#define UN_NULL     UN_FPRINTF; return NULL;
#define UN_ERROR    UN_FPRINTF; return ERROR;
#define UN_ZERO     UN_FPRINTF; return 0;

#endif
