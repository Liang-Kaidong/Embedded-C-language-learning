#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char str1[] = "Hello";
    char str2[] = "Helloaaa";
    int result1 = strncmp(str1, str2, 6);
    if (result1 == 0) {
        printf("结论：指定的两个字符串相等\n");
    } else {
        printf("结论：指定的两个字符串不相等\n");
    }

    return 0;
}