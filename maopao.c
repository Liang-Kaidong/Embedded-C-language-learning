#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {49, 38, 97, 76, 13, 27, 30}, n, i, j, t;
    n = sizeof(a) / sizeof(int);

    for (i = 0; i < n-1; i++ ) {  //控制比对轮数，最多比对n-1轮
        for (j = 0; j < n-1-i; j++) { //寻找j与i的关系，存在j+1<= n-1(-i)
            if (a[j] > a[j+1]) { //升序交换
                t = a[j]; //保留a[j]
                a[j] = a[j+1]; //a[j]与a[j+1]交换
                a[j+1] = t; //a[j+1]赋值为保留的a[j]
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    puts("");
    return 0;
}  
