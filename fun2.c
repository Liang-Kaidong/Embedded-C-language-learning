#include <stdio.h>

/*
 *  x是底数（double），n是指数（int）
 *  函数返回是double类型的结果
 *  故函数类型为double
 */
double power(double x, int n)   /* 先进行函数的说明 */
{
    double r = 1;   /* 底数初始值为1 */
    int i;
    for (i = 1; i <= n; i++) {
        /*
         *  i = 1 1*3 r=3
         *  i = 2 3*3 r=9
         *  i = 3 9*3 r=27
         *  i = 4 27*3 r=81
         */
        r *= x;
    }
    return r;   /* 返回r的值 */
}

int main() {
    double x, ret;
    int n;

    printf("请输入底数: ");
    scanf("%lf", &x);
    printf("请输入指数: ");
    scanf("%d", &n);

    /* 再实现函数的调用 */
    ret = power(x, n);    /* 需提供实际的参数x, n */
    printf("结果是: %lf\n", ret);
    return 0;
}