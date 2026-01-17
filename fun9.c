#include <stdio.h>

void delete_space(char *str1);
int main(int argc, const char *argv[]) {
    char s[] = "a   b  cd";

    delete_space(s);
    printf("%s\n", s);
    return 0;
}

/*
 *  s1 s1  s1
 *  |   |  |
 *  a      b       cd\0  ......
 *  ||  b
 *  s2  s2
 */
void delete_space(char *str1) 
{
    char *str2 = str1;    /* char *str2;  str2 = str1*/
    while (*str1) {
        if (*str1 == ' ') { /* 遇到空格 */
            str1++; /* str1继续走，str2不动 */
        } else {
            *str2 = *str1; /* 把str1的值赋给str2 */
            str1++; /* str1继续走，str2也走 */
            str2++;
        }
    }
    *str2 = *str1;  /* 把str1的'\0'给str2 */
}