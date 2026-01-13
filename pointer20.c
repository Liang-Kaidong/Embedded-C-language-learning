#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[] = {5, 9, 1, 6 , 9, 10};
    int i, n;
    void *p;

    n = sizeof(a) / sizeof(int);
    p = a;  /* a本身就是地址，不用& */

    for (i = 0; i < n; i++) {
        //printf("%d ", a[i]);
        printf("%d ", *((int *)p + i));
        //printf("%d ", ((int *)p)[i]);
        /* 
         *  切记不可以*((int *)p[i]), 
         *  []优先级比*高，会先p[i]无强制类型转换而报错
         */
    }
    puts("");
    return 0;
}