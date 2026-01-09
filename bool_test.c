#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool f = false; //#define false 0
    printf("f = %d\n", f);
    f--;    //a = a - 1 此时f = -1, 输出为1   
    printf("f = %d\n", f);
    f--;    //a = a - 1 此时f = 0, 输出为0
    printf("f = %d\n", f);
    f--;    //a = a - 1 此时f = -1, 输出为1
    printf("f = %d\n", f);
    return 0;
}