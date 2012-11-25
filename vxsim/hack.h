/* File with hacks to make things compile */

#if ! defined(_HACK_H_INCLUDED)
#define _HACK_H_INCLUDED

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


#endif
