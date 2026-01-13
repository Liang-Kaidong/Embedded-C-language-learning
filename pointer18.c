#include <stdio.h>

int main(int argc, char *argv[])
{
    char *s[] = {"apple", "pear", "potato"};
    char **p;
    int i, n;

    p = &s[0];  //p = s;
    i = 0;
    /* 数组有三个字符串常量，每个字符串对应一个指针，除以指针所占空间数即为字符串个数 */
    n = sizeof(s) / sizeof(char *);

    while (i < n) {
        printf("%s\n", s[i]);
        printf("%s\n", p[i]);
        /* p[i]指向s[i], s[i]又为字符指针，指向字符串常量 */
        printf("%s\n", *p);
        /* p为地址，与%s不匹配，*p取值，匹配 */
        i++;
    }
    return 0;
}