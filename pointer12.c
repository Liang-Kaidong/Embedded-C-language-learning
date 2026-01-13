#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char ch[100] = "welcome";
    char *p = ", hello world!";

    int i = 0;

    /* 先找到ch的结束位置'\0' */
    while (*(ch + i) != '\0') {
        i++;
    }

    /* 再将p的内容复制到ch的结束位置 */
    while (*p != '\0') {
        *(ch + i) = *p;
        i++;
        p++;
    }
    
    /* 最后在ch的结束位置添加'\0',此时*p = '\0' */
    *(ch + i) = *p;
    
    puts(ch);

    return 0;
}