#include <stdio.h>

int main()
{
    int a = 200;
    double b = 4.5;
    double c = 3.9;

    printf("%f\n", (float)a);   //int to float
    printf("%d\n", (int)(b + c));  //double to int
    return 0;
}