#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char ch1[] = "Hello, world!";
    char ch2[] = "Hello, C!";

    char *p = ch1;

    /* 第二个元素是字母 */
    if (isalpha(*(p + 1))) {
        /* 先对数组的元素移动，再取* */
        if (isupper(*(p + 1))) {
            *(p + 1) = tolower(*(p + 1));
            printf("%c\n", *(p + 1));   /* 打印转换为小写后的元素 */
            printf("%s\n", p);  /* 打印转换后的字符数组 */
        } else {
            *(p + 1) = toupper(*(p + 1));
            printf("%c\n", *(p + 1));
            printf("%s\n", p);
        }
    }

    return 0;
}