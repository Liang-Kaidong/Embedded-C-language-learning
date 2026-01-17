#include <stdio.h>

typedef int (*FUN_P)(int);
int sum(int n) {
    int i, sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(int argc, const char *argv[])
{
    
    //int (*fun_p)(int);
    FUN_P fun_p;
    fun_p = sum;    /* 指向sum函数 */

    printf("sum = %d\n", (*fun_p)(100));
    return 0;
}
