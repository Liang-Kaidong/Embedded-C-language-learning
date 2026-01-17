#include <stdio.h>

void swap(int *x, int *y) /* int *x = &a, int *y = &b */
{
    int temp;
    temp = *x;  /* x是存地址，*x是存值 */
    *x = *y;
    *y = temp;
    return;
}

int main() {
    int a = 10;
    int b = 20;
    
    printf("before: %d %d\n", a, b);
    swap(&a, &b);   /* 改变a, b的值（地址传递） */
    printf("after: %d %d\n", a, b);

    return 0;
}