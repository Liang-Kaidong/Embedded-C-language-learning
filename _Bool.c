#include <stdio.h>

int main()
{
    _Bool a = -1;
    printf("%d\n", a);
    if (a) {
        printf("true:%d\n", a);
    } 
    else {
        printf("false:%d\n", a);
    }
    printf("%ld\n", sizeof(_Bool));
    return 0;
}