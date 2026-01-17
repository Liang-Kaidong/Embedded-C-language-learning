#include <stdio.h>
#define DEBUG_1 printf("line = %d\n", __LINE__)

int main(int argc, const char *argv[])
{ 
    printf("start debug>>>>>\n");
    DEBUG_1;

    return 0;
}
