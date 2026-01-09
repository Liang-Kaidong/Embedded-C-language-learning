#include <stdio.h>  

int main(int argc, const char * argv[])
{   
    /* i代表行数, j代表列数 */
    int i, j; 
    char ch;
    printf("Please input a letter:");
    scanf("%c", &ch);

    for (i = 0; i <= ch - 'A' ; i++) {
        for (j = 0; j < i; j++) {
            putchar('_');
        }
        for (j = 0; j <= i; j++) {
            putchar(ch - j);
        }
        puts(" ");
    }

    return 0;
}