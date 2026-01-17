#include <stdio.h>

int fac(int x);

int main(int argc, const char *argv[])
{
    int n;
    printf("input number: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, fac(n));

    return 0;
}

/**
 *  @brief 递归计算阶乘
 *  @param x 阶乘的参数
 *  @return int 阶乘的结果
 */
int fac(int x)
{
    if ((x == 0) | (x == 1)) {
        return 1;
    }

    return x * fac(x - 1);
}