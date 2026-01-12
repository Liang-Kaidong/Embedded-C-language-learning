#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{   
    char s[] = "how are you";
    char subs[] = "are";

    printf("%p\n", strstr(s, subs));
    printf("%ld\n", strstr(s, subs) - s);
    return 0;
}

