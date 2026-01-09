#include <stdio.h>
#include <string.h>

#define N 30
int main(int argc, char *argv[])
{
    char ch[N] = "People's Republic of ";
    char ch2[] = "China";

    strcat(ch, ch2);
    puts(ch);
    
    return 0;
}