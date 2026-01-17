#include <stdio.h>
typedef int (*PTR_TO_ARREY)[3];

int main(int argc, const char *argv[])
{
    int a[3] = {6, 8, 10}; 
    //int (*p)[3];
    PTR_TO_ARREY M;
    int i;

    M = &a;
    for (i = 0; i < 3; i++) {
        printf("%d  %d\n", a[i], (*M)[i]);
    }

    return 0;
}
