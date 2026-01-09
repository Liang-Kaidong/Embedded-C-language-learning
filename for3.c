#include <stdio.h>  

int main(int argc, const char * argv[])
{
    int i, sum;
    sum = 0;
    i = 1; 

    for (; i <= 100;) {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
    return 0;
}