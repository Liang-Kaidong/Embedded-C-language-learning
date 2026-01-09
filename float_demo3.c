#include <stdio.h>

int main() 
{
    float a = 1.12345678901234567890;
    double b = 1.12345678901234567890;
    long double c = 1.12345678901234567890;
    printf("float = [%.30f]\n", a);
    printf("double = [%.30lf]\n", b);
    printf("long double = [%.30Lf]\n", c);
    return 0;    
}