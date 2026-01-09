#include <stdio.h>

int main()
{   
    int a = 8, b = 7;

//    if (!(a - b) == 7){   //对(a - b)取反,依旧不满足,false
    if (!((a - b) == 7)){   //对(a - b) == 7 取反,满足,true
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}