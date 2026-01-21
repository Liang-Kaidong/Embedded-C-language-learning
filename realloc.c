#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int *pin;
    pin = (int *)calloc(2, sizeof(int));

    pin[0] = 100;
    pin[1] = 200;

    /** void *realloc(void *ptr, size_t size); */
    pin = (int *)realloc(pin, 3 * sizeof(int));

    printf("pin[0] = %d, pin[1] = %d\n", pin[0], pin[1]);
    pin[2] = 300;
    //pin[3] = 400; /* 非法，内存分配不足 */
    printf("pin[2] = %d\n", pin[2]);

	free(pin);

	return 0;
}