#include<stdio.h>

int main()
{
    int a = 0XEEAABAAA;
    printf("a = %#x %d\n", a, a);
    //%#x表示以十六进制的形式输出一个数，%d表示以十进制的形式输出一个数
    unsigned int b = 0XEEAABAAA;
    //unsigned代表无符号整数,所存储的数值不允许为负数,int默认的数可以是正数,也可以是负数
    printf("b = %#x %u\n", b, b);
    //%u表示以十进制的形式输出一个无符号整数 u对于unsigned 
    return 0;
}