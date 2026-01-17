#include <stdio.h>

int array_sum(int *data, int n);

int main(int argc, const char *argv[]) {
    int a[] = {5, 9, 10, 3, 10};
    int sum = 0;

    sum = array_sum(a, sizeof(a) / sizeof(int));
    printf("sum = %d\n", sum);

    return 0;
}

int array_sum(int *data, int n) /* int *data = a */
{
    int ret = 0;
    int i;

    for (i = 0; i < n; i++) {
        ret += data[i];
    }

    return ret;
}