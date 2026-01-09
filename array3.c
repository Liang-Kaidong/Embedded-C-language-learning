#include<stdio.h>

int main(int argc, char *argv[])
{
    /* 验证二维数组的连续性 */
    int a[2][3];
    int i,j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%p ", &a[i][j]);
        }
        putchar('\n');
    }
    return 0;
}