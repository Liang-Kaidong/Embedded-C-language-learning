#include <stdio.h>
#define M 3.0E-23
#define K 950


int main(int argc, const char *argv[])
{
    int n;
    printf("请输入夸克数： ");
    scanf("%d", &n);
    printf("夸克数为： %e\n", n * K / M);

    return 0;
}

