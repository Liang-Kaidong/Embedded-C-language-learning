#include <stdio.h>

int main(int argc, char *argv[])
{
    int *p = NULL;

    printf("%p %d\n", p, p);
    return 0;
}