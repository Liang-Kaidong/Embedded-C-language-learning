#include <stdio.h>

/* 作为全局变量 */
double x = 2, n = 3;

double power()   
{
    double r = 1;  
    int i;
    for (i = 1; i <= n; i++) {
        r *= x; // r = r * x;
    }
    return r;
}

int main() {
    double ret;

    ret = power();    /* 调用了全局变量，不用传参 */
    printf("结果是: %.2lf\n", ret);
    return 0;
}