#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    union un {
        int i;
        char c;
        double d;
    };

    union un t1;
    t1.d = 19.897;
    t1.c = 'a';
    t1.i = 100;

    /* 只会保留最后赋值的成员 */
    printf("t1.d = %f, t1.c = %c, t1.i = %d\n", t1.d, t1.c, t1.i);
    return 0;
}