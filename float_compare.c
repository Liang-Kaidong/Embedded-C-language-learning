#include <stdio.h>

int main() 
{
    float f1 = 2.2;
    if (f1 == 2.2){
        printf("f1 == 2.2\n");
    }else{
        printf("f1 != 2.2\n");
    }

    float f2 = 2.2;    
    if (f2 == 2.2f){//代表f2是个浮点型的常数
        printf("f2 == 2.2f\n");
    }else{
        printf("f2 != 2.2f\n");
    }
    float f3 = 2.25;    
    if (f3 == 2.25){
        printf("f3 == 2.25\n");
    }else{
        printf("f3 != 2.25\n");
    }
    return 0;
}