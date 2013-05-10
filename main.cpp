#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

#include "general.h"

#define EXTDEAL(extn) if(ext == #extn){return conv_##extn(arg1,arg2);}

int main(int argc, char *argv[])
{
    if(argc == 3)
    {
        printf("converting %s to %s\n", argv[1],argv[2]);
        string arg1(argv[1]),arg2(argv[2]);
        string ext = arg1.substr(arg1.find_last_of('.')+1);
        EXTDEAL(doc);
        return -1;
    }
    return -1;
}
