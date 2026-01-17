#include <stdio.h>

//static int m = 10;  /* 无法给外部文件使用 */
void printf_hello() {
    printf("hello world\n");
    /* gcc extern1.c extern2.c extern3.c -Wall */
}