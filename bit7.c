#include <stdio.h>

int main()
{
    unsigned char x = 0x14, y = 3;
    /* 要使得第3位快速清零,&运算清0 */
    x = x & (~(1 << (y - 1)));
    /* x代表是16进制, #代表打印这个结果的时候自动加上0x前缀. */
    printf("%#x %#x\n", x, y);	
    return 0;   
}


