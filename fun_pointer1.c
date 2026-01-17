#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);

int main(int argc, const char *argv[])
{
    int m, n;
    printf("请输入两个整数：(空格分隔) ");
    scanf("%d %d", &m, &n);

    int (*p)(int, int);
    p = add;
    printf("加法的结果为：%d\n", (*p)(m, n));
    p = sub;
    printf("减法的结果为：%d\n", (*p)(m, n));
    p = mul;
    printf("乘法的结果为：%d\n", (*p)(m, n));

    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}