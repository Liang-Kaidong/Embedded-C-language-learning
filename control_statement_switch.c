#include <stdio.h>

int main()
{   
    /* switch语句块可以是整型、字符型表达式或枚举 */
    //int tmp = 1;
    char tmp = 'a';

    switch (tmp) {
    case 1:
        printf("tmp is 1\n");
        break;
    case 2:
        printf("tmp is 2\n");
        break;
    case 3:
        printf("tmp is 3\n");
        break;  
    default:
        printf("tmp is not 1, 2, 3, 4\n");
        break;
    }
    return 0;
}  
