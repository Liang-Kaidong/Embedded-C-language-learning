#include <stdio.h>

int main(int argc, char *argv[])
{
    int m = 10;
    int *p, **q;

    p = &m;
    q = &p;

    printf("%p %p %d\n", &m, p, *p);
    printf("%p %p %d\n", p, q, **q);

    printf("%p %p\n", q, q + 1);
    return 0;
}