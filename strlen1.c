#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char s1[10] = {'A', '\0', 'B', 'C', '\0', 'D' };
    char s2[] = {'A', '\0', 'B', 'C', '\0', 'D' };
    char s3[] = "\tab\nc\vd\\e";
    char s4[] = "\x69\141\n";
    int n;

    n = strlen(s1);
    printf("%d\n", n);
    printf("%d\n", strlen(s1));
    printf("%d\n", sizeof(s2) / sizeof(char)); /* 字符串所占长度，含'\0' */
    printf("%d\n", strlen(s3));
    printf("%d\n", strlen(s4)); 
    puts(s4);   /* x69 十六进制对应字母i, 141 八进制对应字母a */

    return 0;

}