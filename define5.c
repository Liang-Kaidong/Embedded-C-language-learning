#include <stdio.h>
#define DEBUG_1 printf("DEBUG_1 line = %d\n", __LINE__)
#define DEBUG_2(s) printf("%s", s)

int main(int argc, const char *argv[])
{ 
    printf("start debug>>>>>\n");
    DEBUG_1;
    DEBUG_2("debug end.\n");

    return 0;
}
