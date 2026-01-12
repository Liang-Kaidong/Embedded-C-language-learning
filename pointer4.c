#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[5] = {4, 8, 1, 2, 7};
    int *p, *q, *m;
    p = a;
    q = &a[3];

    printf("%p %p\n", p, q);
    printf("%d %d\n", *p, *q);
    printf("%d\n", q - p);

    m = p++;
    printf("%p %d\n", p, *p);
    printf("%p %d\n", m, *m);
    return 0;
}