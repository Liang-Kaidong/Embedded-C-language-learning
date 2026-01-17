#include <stdio.h>
#include <string.h>

char *delete_space(char *str1);

int main(int argc, const char *argv[])
{
    char str[] = "a   b  cd";
    char copy[20];

    /* strcpy返回值是目标的地址 */
    strcpy(copy, strcpy(str, delete_space(str)));

    printf("%s\n", delete_space(str));
    printf("%s\n", copy);

    return 0;
}

char *delete_space(char *str1)
{
    char *str2 = str1;
    char *start = str2; /* 记录str2的初始地址 */
    while (*str1) {
        if (*str1 == ' ') {
            str1++;
        } else {
            *str2 = *str1;
            str1++;
            str2++;
        }
    }
    *str2 = *str1;

    /*
     *  return str2; 等价于 return &str2[0];
     *  并非回到初始地址，str2地址时刻在变
     */
    return start;
}
