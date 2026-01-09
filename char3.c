#include <stdio.h>

int main()
{
    char c1 = 'A';
    char c2 = 'a';

    printf("%d-%c\n", c1 + 32, c1 + 32); //大写转小写
    printf("%d-%c\n", c2 - 32, c2 - 32); //小写转大写
    return 0;
}