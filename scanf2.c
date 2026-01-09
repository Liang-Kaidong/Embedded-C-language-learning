#include <stdio.h>

int main()
{
    int ch, n;
    long m;

    printf(">");
    n = scanf("%x%ld", &ch, &m);
    printf("%d %d %ld\n", n, ch, m);
    return 0;   
}