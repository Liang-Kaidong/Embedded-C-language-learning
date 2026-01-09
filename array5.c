#include<stdio.h>

int main(int argc, char *argv[])
{   
    int a[2][3] = {{2, 5, 8}, {21, 56, 9}};
    int i, j, row, column;

    row = column = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (a[row][column] < a[i][j]) {
                row = i;
                column = j;
            }
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", a[i][j]);
        }
        putchar('\n');
    }

    printf("max = %d %d %d\n", a[row][column], row, column); 

    return 0;
}