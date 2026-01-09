#include <stdio.h>

int main(int argc, const char * argv[])
{   
    int i = 1;
    int sum = 0;

    do {
        sum += i;
        i++;
    } while (i <= 100); 

    /* 注意此时 i 的值为 101, 打印时需 i - 1 满足题意 */
    printf("1 + 2 + ... + %d = %d\n", i - 1, sum);
    return 0;
}  
