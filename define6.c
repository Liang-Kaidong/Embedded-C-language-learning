#include <stdio.h>

#define MAX(a, b) (a) > (b) ? (a) : (b) /* if (a > b) a else b */

int main(int argc, const char *argv[])
{ 
    int m = 100, n = 200;
    printf("MAX = %d\n", MAX(m + 300, n));
    return 0;
}
