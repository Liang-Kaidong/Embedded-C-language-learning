#include<stdio.h>

int main(int argc, char *argv[])
{   
    /* 元素全部初始化 */
    //int a[2][3] = {{1, 6, 9}, {2, 8, 5}};

    /* 元素部分初始化 */
    //int a[2][3] = {{1, 6}, {2, 8, 5}};

    /* 元素部分初始化 */
    int a[2][3] = {{1, 6}};
    int i,j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        putchar('\n');
    }
    return 0;
}