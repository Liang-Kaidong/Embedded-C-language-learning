#include <stdio.h>

char *my_strcat(char *dest, const char *src);

int main(int argc, const char *argv[])
{
    /* 
     *  初始化的数组长度仅为 1（只有终止符 '\0'），
     *  如果后续取消注释输入字符串，会直接导致数组溢出。 
     */
    char input_dest[100] = {0};
    char input_src[100] = {0};

    printf("input dest:");
    gets(input_dest);
    printf("input src:");
    gets(input_src);

    printf("strcat: %s\n", my_strcat(input_dest, input_src));
    
    return 0;
}

char *my_strcat(char *dest, const char *src)
{
    char *start = dest;
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = *src;

    return start;
}
