#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[3][2] = {{1, 6}, {9, 12}, {61, 12}};
    int (*p)[2], i, j;    

    p = a;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", p[i][j]); /* 不能写*p[i][j]，因为p[i][j]为值，不是地址 */
        }
        puts("");
    }

    return 0;
}