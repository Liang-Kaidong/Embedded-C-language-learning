#include <stdio.h>  

int main(int argc, const char * argv[])
{   
    /* i代表行数, j代表列数 */
    int i, j; 
    
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, i*j);
            /* 先是i = 1, j = 1, 显示1*1
            * 然后i = 2, j = 1, 显示1*2
            * 然后i = 2, j = 2, 显示2*2
            * 这样就显示了1*2=2 2*2=4的排版
            * 因此j与i要调换位置
            */
        }
        puts(" ");
    }

    return 0;
}