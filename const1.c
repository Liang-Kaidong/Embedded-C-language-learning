#include <stdio.h>

int main(int argc, char *argv[])
{
    int m = 10;
    const int *p;

    p = &m;
    (*p)++; /* 错误，const int *p 限制了通过p改变m的值 */
    
    return 0;
}