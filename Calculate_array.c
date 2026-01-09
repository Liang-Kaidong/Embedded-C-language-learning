#include <stdio.h>
#include <string.h>
#define N 20
int main(int argc, char *argv[])
{
    //char arr[] = {"Weclome"};
    char arr[N];
    /* 
        使用strlen函数可以避免
        未超数组长度乱码问题
     */
    int i, n;

    /* 从键盘输入一个字符串 */
    printf("请输入一个字符串：");
    gets(arr);

    /* 从后往前遍历数组 */
    n = strlen(arr);
    for (i = n - 1; i >= 0; i--) {
        putchar(arr[i]);
    }
    putchar('\n');

    return 0;
}