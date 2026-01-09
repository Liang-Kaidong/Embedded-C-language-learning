#include <stdio.h>

#define N 20
int main(int argc, char *argv[])
{
    //char arr[] = {"Weclome"};
    char arr[N] = {0}; 
    /* 
        写0的目的就是防止
        未超出数组部分出现乱码
     */
    int i, n;

    /* 从键盘输入一个字符串 */
    printf("请输入一个字符串：");
    gets(arr);

    /* 从后往前遍历数组 */
    n = sizeof(arr) / sizeof(char);
    for (i = n - 1; i >= 0; i--) {
        putchar(arr[i]);
    }
    putchar('\n');

    return 0;
}