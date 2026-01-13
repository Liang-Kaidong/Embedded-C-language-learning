#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[2][3] = {{1, 4, 6}, {12, 9, 7}};  /* 数组名a[0] a[1] */
    int *p[2];

    p[0] = a[0];   /*&a[0][0] */
    p[1] = a[1];   /* &a[1][0] */ 

    printf("%d\n", *(p[0] + 1));
    printf("%d\n", p[0][1]);

    return 0;
}