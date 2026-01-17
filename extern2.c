#include <stdio.h>

extern int global_a;    /* 在其他文件的外部变量声明 */
extern void printf_hello();

int main(int argc, const char *argv[])
{ 
    /* 
     *  gcc编译时，需将extern1.c也编译进来 
     *  gcc extern1.c extern2.c -Wall
     *  ./a.out
     */
    printf("global_a = %d\n", global_a);
    printf_hello();

    return 0;
}
