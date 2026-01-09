#include <stdio.h>
#include <string.h>

#define N 30
int main(int argc, char *argv[])
{
    char src[] = "makeru";
    char dest[N];

    strcpy(dest, src);
    puts(src);
    puts(dest);

    int i, n;
    i = 0;
    n = strlen(src);
    while (i <= n) {
        dest[i] = src[i];
        i++;
    }

    puts(src);
    puts(dest);

    return 0;
}