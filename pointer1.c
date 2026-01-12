#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 10;
    int *p;
    p = &a;
    printf("%p %d\n",&p, sizeof(p));    /* p所占的空间和和地址 */
    printf("%p %p\n", p, &a);   /* p指向的地址和a的地址 */
    printf("%d %d\n", a, *p);   /* p指向的地址中的数据和a中的数据 */
    return 0;
}