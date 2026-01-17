#include <stdio.h>
#define M 3.0E-23
#define K 950
#define _DEBUG_

int main(int argc, const char *argv[])
{
    int n;
    printf("请输入夸克数： ");
    scanf("%d", &n);
    printf("夸克数为： %e\n", n * K / M);

#ifdef _DEBUG_
    printf("%s %s %d\n", __FUNCTION__, __FILE__, __LINE__);
#endif

    return 0;
}
