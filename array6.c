#include <stdio.h>

int main(int argc, char *argv[])
{
    char fruit[][11] = {"Banana", "Apple", "Strawberry", "Watermelon"};
    int i, j, n, m;

    /* 计算二维数组行数：整个数组大小除以每一行大小 */
    n = sizeof(fruit) / sizeof(fruit[0]);
    /* 计算二维数组列数：每一行大小除以每一个元素大小 */
    m = sizeof(fruit[0]) / sizeof(char);
 
    /* 遍历二维数组方法一：putchar */
    for (i = 0; i < n ; i++) {
        for (j = 0; j < m; j++){
            putchar(fruit[i][j]);
        }
        /* 输出完一列数组后换行 */
        putchar('\n');
    }

    /* 分隔 */
    putchar('\n');

    /* 遍历二维数组方法一：printf与%s */
    for (i = 0; i < n ; i++) {
        /* 
            当数组元素定为10时，此方法会导致\n无地方归纳
            使用方法一可避免
         */
        printf("%s\n", fruit[i]);
        /* 输出完一列数组后换行 */
    } 

    return 0;
}