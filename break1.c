#include <stdio.h>
#define pi 3.14

int main()
{
    int r, area;
    for (r = 1; r <=10; r++) {
        area = pi * r * r;
        if (area > 100) {
            break;
        }
        printf("%d %d\n", r, area); 
    }
    return 0;
}  
