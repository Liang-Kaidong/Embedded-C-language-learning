#include <stdio.h>

int fib(int x);

int main(int argc, const char *argv[])
{
    int i = 1;
    int n;
    printf("请输入斐波那契数列的项数： ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", fib(i));
        i++;
    }
    printf("\n");

    return 0;
}

/**
 *  @brief 递归计算斐波那契数列
 *  @param x 斐波那契数列的参数
 *  @return int 斐波那契数列的结果
 */
int fib(int x)
{
    if ((x == 1) | (x == 2)) {
        return 1;
    }

    return fib(x - 1) + fib(x - 2);
}