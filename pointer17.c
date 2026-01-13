#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[] = {3, 6, 9};
    int *m;
    int *p[2] = {&a[0], &a[1]};   /* 指针数组里，皆为指针 */
    int **q;

    m = &a[0];  /* m地址 指向a地址 */
    q = &p[0];  /* p[0]的地址，即为p */
    q = p;      /* 等价p[0]的地址 */

    printf("%d %d\n", a[0], *(a + 1));
    printf("%d %d\n", m[0], m[1]);
    printf("%d %d\n", **p, *(*(p + 1)));
    //printf("%d %d\n", *p[0], *p[1]);
    /* 
     *  不能写*(p + 1)或p[1]，p[1]指的是a[1]的地址，而非值,
     *  但可以写*(*(p + 1))，这是指向a[1]中的值
     */
    printf("%d %d\n", *q[0], *q[1]);
    return 0;
}