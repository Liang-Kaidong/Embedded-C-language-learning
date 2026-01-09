#include <stdio.h>

int main() 
{
/*
*    float
*    double
*    long double
*/
    printf("float: %lu\n",sizeof(float));
    printf("double: %lu\n",sizeof(double));
    printf("long double: %lu\n",sizeof(long double));
    return 0;    
}