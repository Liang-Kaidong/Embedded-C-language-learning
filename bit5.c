#include <stdio.h>

int main()
{
    unsigned char a = 0xe4, b;
    b = a << 3;
    /* x代表是16进制, #代表打印这个结果的时候自动加上0x前缀. */
    printf("%#x\n", b); 	
    return 0;   
}


