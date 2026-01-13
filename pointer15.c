#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[2][3] = {{1, 4, 6}, {12, 9, 7}}; 
    int *p[2] = {a[0], a[1]};
    int i, j, sum = 0;

    /* 遍历数组 */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(p[i] + j));
            //printf("%d ", p[i][j]);
            //printf("%d ", *(*(a + i) + j)); /* p[i] = *(a + i), p[i]指针对应数组名a[i] */
        }
        puts("");
    }

    /* 二维数组求和 */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            //sum += *(*(p + i) + j);
            sum += p[i][j];
        }
    }
    printf("sum = %d\n", sum);

    return 0;
}