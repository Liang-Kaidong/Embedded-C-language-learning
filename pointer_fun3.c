#include <stdio.h>

char *itoa(int x);

int main(int argc, const char *argv[])
{
    int n;
    char *s;
    printf("input number: ");
    scanf("%d", &n);

    s = itoa(n);
    puts(s);
    
    return 0;
}

/**
 *  @brief 将整数转换为字符串
 * 
 *  @param x 要转换的整数
 *  @return char* 指向转换后的字符串的指针
 */
char *itoa(int x)
{
    int r = 0; /* 余数 */
    int i = 0;
    static char p[50];  /* 静态数组，用于存储转换后的字符串 */

    /* 一直除10，得到余数即为位数，也为最后一位数往前 */
    while (x) {
        r = x % 10; /* 余数，得到当前位的数字 */
        x /= 10;    /* 商 */
        p[i] = r + '0'; /* 将余数转换为字符 */
        i++;
    }
    p[i] = '\0';     /* 字符串结束符 */

    /* 反转字符串 */
    char *n = &p[i - 1]; /* 指向字符串的最后一个字符， != n = p - 1 */
    char *m = p; /* char *m = p == char *m = &p[0]   */
   
    while (m < n) {
        char temp = *m; /* 保存m当前指向的字符值（不是指针！） */
        *m = *n;
        *n = temp;
        m++;
        n--; 
    }
    //*m = '\0'; /* 不需要手动追加结束符，n指向明确 */

    return p;
}
