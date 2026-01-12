#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{   
    int ch;

    while ((ch = getchar()) != EOF) {   /* 从标准输入读取字符，直到遇到文件结束符EOF */
        /* 是否是字母 */
        if (isalpha(ch)) {
            if (isupper(ch)) {  /* 是否是大小写字母 */
                printf("是大写字母：%c\n", ch);
            } else if (islower(ch)) {
                printf("是小写字母：%c\n", ch);
            }
        } else if (isdigit(ch)) {   /* 是否是数字 */
            printf("是数字：%d\n", ch - '0');
            /*
             *  请注意，getchar()函数读取的是字符，而不是数字。
             *  当使用%d格式符打印时，会将字符的ASCII码值打印出来。
             *  若想打印数字本身，需要将字符转换为整数。
             *  可以使用ch - '0'将字符转换为对应的整数，或可以
             *  使用ch - 48将字符转换为整数。
             */
        }
    }

    return 0;
}

