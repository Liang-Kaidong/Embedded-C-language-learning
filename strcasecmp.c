#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char str1[] = "HELLO";
    char str2[] = "hello";

    printf("%d\n", strncmp(str1, str2, 5));
    printf("%d\n", strncasecmp(str1, str2, 5));

    return 0;
}