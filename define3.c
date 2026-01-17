#include <stdio.h>
#include "head.h"
#define _DEBUG_

int main(int argc, const char *argv[])
{
    printf("global_a = %d\n", global_a);
#ifdef _DEBUG_
    printf("%s %s %d\n", __FUNCTION__, __FILE__, __LINE__);
#endif

    return 0;
}
