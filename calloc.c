#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int *pin;
    pin = (int *)calloc(10, sizeof(int));

    pin[0] = 100;
    pin[1] = 200;

    printf("pin[0] = %d, pin[1] = %d\n", pin[0], pin[1]);

	free(pin);

	return 0;
}