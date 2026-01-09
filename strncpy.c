#include <stdio.h>
#include <string.h>

#define N 30
int main(int argc, char *argv[])
{
    char src[] = "makeru";
char dest[N] = ".com.cn";

    strncpy(dest, src, 4);
    puts(dest);
    
    return 0;
}