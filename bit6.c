#include <stdio.h>

int main()
{
    unsigned char x = 0x4, y = 2;
    /* 要使得第2位快速置1,或|运算置1 */
    x = x | (1 << (y - 1));
    /* x代表是16进制, #代表打印这个结果的时候自动加上0x前缀. */
    printf("%#x %#x\n", x, y);
    return 0;   
}


