#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i;

    printf("input n(>3):");
    scanf("%d", &n);

    i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0) {
            break;
        }
        i++;
    }
    if (i <= sqrt(n)){
        printf("%d is not a prime number.\n", n);
    } else {
        printf("%d is a prime number.\n", n);
    }
    return 0;
}  
