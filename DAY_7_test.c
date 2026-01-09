#include<stdio.h>

int main()
{
//    *(int *)0X20000400 = 58;  // This line will cause a segmentation fault
    int a = 58;
    a = a + 1;
    int b, c;
    b = 10;
    c = 20;
    return 0;
}
