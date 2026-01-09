#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result1 = strcmp(str1, str2);
    if (result1 == 0) {
        printf("结论：两个字符串相等\n");
    }

    char str3[] = "Apple";
    char str4[] = "Banana";
    int result2 = strcmp(str3, str4);
    if (result2 < 0) {
        printf("结论：字符串1小于字符串2\n");
    }
    
    char str5[] = "Orange";
    char str6[] = "Apple";
    int result3 = strcmp(str5, str6);
    if (result3 > 0) {
        printf("结论：字符串1大于字符串2\n");
    }
    
    return 0;
}