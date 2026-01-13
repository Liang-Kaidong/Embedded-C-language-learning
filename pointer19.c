#include <stdio.h>

int main(int argc, char *argv[])
{
    int m = 10;
    double n = 3.14;

    void *p, *q;
    //p = (void *)&m; /* 强制类型转换，将int型指针转换为void型指针 */
    p = &m; /* 隐式类型转换，将int型指针转换为void型指针 */
    printf("%d %d\n", m, *(int *)p);    /* 强制类型转换，将void型指针转换为int型指针 */
    q = (void *)&n;
    printf("%0.2lf %.2lf\n", n, *(double *)q); /* 强制类型转换，将void型指针转换为double型指针 */
    /* 0.2lf 表示保留两位小数 */
    return 0;
}