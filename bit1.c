#include <stdio.h>

int main()
{
    unsigned char x = 0x17, y;
    y = ~x;
    /* x代表是16进制, #代表打印这个结果的时候自动加上0x前缀. */
    printf("%#x\n", y);
    return 0;   
}