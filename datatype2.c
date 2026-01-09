#include<stdio.h>

int main()
{
    printf("char:%ld\n",sizeof(char));  //sizeof返回值默认为无符号长整
    printf("short:%ld\n",sizeof(short));    //%ld表示长整型 
    printf("int:%ld\n",sizeof(int));       //当然也可以是%lu,表示无符号长整型
    printf("long:%ld\n",sizeof(long));
    printf("long long:%ld\n",sizeof(long long));
    return 0;
}