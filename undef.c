#include <stdio.h>
#define N 100
#define _DEBUG_

int main(int argc, const char *argv[])
{
    printf("N = %d\n", N);
#ifdef _DEBUG_
    printf("%s %s %d\n", __FUNCTION__, __FILE__, __LINE__);
#endif
#undef N    /* 取消定义N */ 
#define N 200   /* 重新定义N */
    printf("N = %d\n", N);

    return 0;
}
