#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);

int main(int argc, const char *argv[])
{
    int m, n;
    printf("请输入两个整数：(空格分隔) ");
    scanf("%d %d", &m, &n);

    int (*p[3])(int, int); /* 函数指针数组：存放函数地址 */
    p[0] = add;
    printf("加法的结果为：%d\n", (*p[0])(m, n));
    p[1] = sub;
    printf("减法的结果为：%d\n", (*p[1])(m, n));
    p[2] = mul;
    printf("乘法的结果为：%d\n", (*p[2])(m, n));

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