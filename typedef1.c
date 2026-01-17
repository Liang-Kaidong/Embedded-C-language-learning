#include <stdio.h>

typedef unsigned char uchar;
typedef unsigned char *puchar;

int main(int argc, const char *argv[])
{
    unsigned char ch1 = 'A';
    uchar ch2 = '8';
    puchar p, q;
    puchar *r; /* 二级指针 */

    p = &ch1;
    q = &ch2;
    r = &p;

    printf("%c  %c  %c\n", ch1, *p, **r);
    printf("%c  %c\n", ch2, *q);

    return 0;
}
