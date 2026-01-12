#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{   
    int ch;

    while ((ch = getchar()) != EOF) {   /* 从标准输入读取字符，直到遇到文件结束符EOF */
        if (isspace(ch)) {
            continue; /* 跳过空白字符，直接进入下一次循环 */
        }
        /* 
         *  思考：
         *  如果输入A,经转化后会提示不是字母.
         *  原因在于getchar()函数会读取包括空格在内的所有字符，包括按下键盘后的换行符。
         *  因此，当输入A后，换行符会被读取，导致判断为不是字母。
         *  解决方法：
         *  可以在判断是否是字母之前，先判断是否是空白字符，如果是，直接跳过。
         */

        /* 是否是字母 */
        if (isalpha(ch)) {
            if (isupper(ch)) {  /* 是否是大小写字母 */
                printf("是大写字母：%c\n", ch);
                ch = tolower(ch);   /* 转换为小写字母 */
                printf("转换为小写字母：%c\n", ch);
            } else if (islower(ch)) {
                printf("是小写字母：%c\n", ch);
                ch = toupper(ch);   /* 转换为大写字母 */
                printf("转换为大写字母：%c\n", ch);
            }
        } else {    
            printf("不是字母.\n");
            return 0;
        }
    }

    return 0;
}

