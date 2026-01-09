#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = -1;
    printf("%d\n", a);
    if (a) {
        printf("true:%d\n", a);
    } 
    else {
        printf("false:%d\n", a);
    }
    printf("%ld\n", sizeof(bool));
    return 0;
}