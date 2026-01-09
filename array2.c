#include <stdio.h>

int main()
{
    int a[6] = {1, 4, 5, 4, 6, 7}, i, n;
    int b[] = {3, 4, 7, 8, 1, 0};

    n = sizeof(a) / sizeof(int); //计算数组元素个数
    for (i = 0; i < n; i++) {
        printf("%p %d\n", &a[i], a[i]);  
        printf("%p %d\n", &b[i], b[i]);  
    }
    //a = a + 1; //数组名代表着地址，不可以变动
    printf("%p\n", a);
    printf("%ld\n", sizeof(a));
    return 0;
}  
