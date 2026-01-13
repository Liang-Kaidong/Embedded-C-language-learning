#include <stdio.h>

int main(int argc, char *argv[])
{
    int *p[3];  /* p[0] p[1] p[2] */
    int a[] = {3, 6, 1, 9, 10};

    p[0] = a;
    p[1] = a + 1;
    p[2] = a + 3;

    printf("%d %d %d\n", *p[0], *p[1], *p[2]);
    /* 不能写*(p + 1)这个是针对数组中元素，但p[1]对应的是数组的指针（编号）*/
    printf("%d %d %d\n", *a, *(a + 1), *(a + 3));

    return 0;
}