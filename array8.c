#include <stdio.h>
#include <string.h>
#define N 20
int main(int argc, char *argv[])
{
    char arr[N];
    char ch;
    /* 
        使用strlen函数可以避免
        未超数组长度乱码问题
     */
    int i, j, n;

    printf("请输入一个字符串：");
    gets(arr);
    n = strlen(arr);

    /* i记录第一个元素，j记录最后一个元素 */
    i = 0;
    j = n - 1;  /* gets默认在字符串末尾添加'\0'，n = 6 */

    /* i与j未相遇 */
    while (i < j) {
        /* i与j进行交换 */
        ch = arr[i];
        arr[i] = arr[j];
        arr[j] = ch;
        /* i与j都往中间走，i增加，j减少 */
        i++;
        j--;
    }
    printf("%s\n", arr);

    return 0;
}