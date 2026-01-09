#include <stdio.h>

int main()
{
    unsigned char x = 0126, y = 0xac, z;
    z = x & y;
    /* x代表是16进制, #代表打印这个结果的时候自动加上0x前缀. */
    printf("%#x\n", z);
    return 0;   
}


