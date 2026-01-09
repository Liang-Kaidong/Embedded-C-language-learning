#include <stdio.h>

int main()
{
    int c;
    printf("Enter a character: ");  
    c = getchar();
    printf("%c--%d->hex%x\n", c, c, c);
    return 0;   
}