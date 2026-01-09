#include <stdio.h>
#define N 5
int main()
{
    char s[5];

    gets(s);
    printf("s:%s", s);
    printf("***\n");
    puts("$$$");
    puts(s);
    return 0;
}