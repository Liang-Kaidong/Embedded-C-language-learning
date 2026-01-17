#include <stdio.h>

int main(int argc, const char *argv[])
{ 
    register int i = 0;

    for (i = 0; i <= 2E25; i++) {
        /* 
         *  模拟i频繁操作 
         *  GCC编译时，为防止编译器优化代码，在命令后输入-O0 
         *  执行命令前加上time 查看执行时间 
         *  gcc register.c -Wall -O0
         *  time ./a.out
         */
    }

    printf("end main\n");

    return 0;
}
