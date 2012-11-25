/*Hack*/
#if ! defined(_SYMLIB_H_INCLUDED)
#define _SYMLIB_H_INCLUDED

#include "errnoLib.h"
#include <string.h>


typedef int SYM_TYPE;
typedef int SYMTAB_ID;

#define MAX_SYS_SYM_LEN     256

SYMTAB_ID statSymTbl = 1;
SYMTAB_ID sysSymTbl = 2;

static STATUS inline symFindByValue(SYMTAB_ID t, UINT value, char * name,
        int *pValue, SYM_TYPE *pType)
{
    if (t == statSymTbl)
        strerror_r(value, name, MAX_SYS_SYM_LEN);
    else
        return ERROR;

    return OK;
}

#endif
