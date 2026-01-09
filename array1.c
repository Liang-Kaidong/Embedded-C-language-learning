#include <stdio.h>

int main()
{
    int a[6], i;

    for (i = 0; i < 6; i++) {
        printf("%p\n", &a[i]);  
        /* 
        * 对于指针来说，地址是连续的
        * %p主要用于printf等格式化输出函数中,
        * 用来以十六进制的形式输出指针变量所指向的内存地址
        */
    }
    //a = a + 1; //数组名代表着地址，不可以变动
    printf("%p\n", a);
    printf("%d\n", sizeof(a));
    return 0;
}  
