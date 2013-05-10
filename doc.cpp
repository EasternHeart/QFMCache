#include "general.h"

#include <stdlib.h>

EXTGENHEA(doc)
{
    string mainarg = "wvText " + arg1 + " " + arg2;
    return system(mainarg.c_str());
}
