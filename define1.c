#include <stdio.h>
#define N 10
#define M (3 + 2)
#define Q 3 + 2


int main(int argc, const char *argv[])
{
    int a[N] = {0};
    a[0] = 100;
    printf("%d\n", a[0]);
    printf("%d\n", M * 2);  /* (3 + 2) * 2 */
    printf("%d\n", Q * 2);  /* 3 + 2 * 2*/
    
    return 0;
}

