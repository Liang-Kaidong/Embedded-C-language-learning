#include<stdio.h>

int main()
{
    int len = 10;
    int a[len];
    int i;

    a[0] = 100;

    for(i = 0;i < len; i++)
    {
        a[i] = i + 1;
        printf("%d",a[i]);
    }
    putchar('\n');
    return 0;
}