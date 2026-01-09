#include <stdio.h>

int main() 
{
    float f = 9.625;
    printf("%#x\n", *(int *)&f); // %#x以十六进制输出 十六进制格式说明符
    return 0;    
}