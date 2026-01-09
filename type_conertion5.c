#include <stdio.h>

int main()
{
    int a = 100;
    int b = 3;
    double c;
    double d;
    c = a / b; //这里由于a,b为int,因此相除结果取整数为33,转换为double后输出结果为33.00,false
    d = (double)a / b;    //强制类型转换a/b的结果
    printf("%.2lf\n", c);
    printf("%.2lf\n", d);    //输出结果为33.33
    printf("%.2lf\n", (double)a / b);  //输出结果为33.33
    printf("%.2lf\n", (double)a / (double)b); //输出结果为33.33
    printf("%.2lf\n", (double)(a / b)); //输出结果为33.00,只double了a
    return 0;
}