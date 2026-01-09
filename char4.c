#include <stdio.h>

int main()
{
    int a = 3;
    char c1 = a + 48;
    char c2 = '2';
    int b = c2 - 48;
    printf("%d-%c\n", c1, c1);
    printf("%d\n", b);
    return 0;
}