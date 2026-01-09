#include<stdio.h>
#include<limits.h>  //linux中的范围定义头文件

int main()
{
    printf("char:%d~%d\n",SCHAR_MIN,SCHAR_MAX);
    printf("short:%d~%d\n",SHRT_MIN,SHRT_MAX);
    printf("int:%d~%d\n",INT_MIN,INT_MAX);
    printf("long:%ld~%ld\n",LONG_MIN,LONG_MAX);     //%ld表示long型变量输出
    printf("long long:%lld~%lld\n",LLONG_MIN,LLONG_MAX);    //%lld表示long long型变量输出
    return 0;
}