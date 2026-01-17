#include <stdio.h>

double power(double a, int b)   /* 传递形参a, b double a = x, int b = n */
{
    double r = 1;  
    int i;
    for (i = 1; i <= b; i++) {
        r *= a; // r = r * a;
    }
    printf("&a = %p &b = %p\n", &a, &b);
    return r;
}

int main() {
    double ret;
    double x = 2;   /* 实参x, n */
    int n = 3;

    printf("&x = %p &n = %p\n", &x, &n);

    ret = power(x, n);    /* 传递实参 */
    printf("结果是: %.2lf\n", ret);
    return 0;
}