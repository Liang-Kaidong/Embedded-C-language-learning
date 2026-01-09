#include <stdio.h>

int main()
{
    unsigned char x = 75, y = 0173, z;
    z = x ^ y;
    /* x代表是16进制, #代表打印这个结果的时候自动加上0x前缀. */
    printf("%#x\n", z); 	
    return 0;   
}


