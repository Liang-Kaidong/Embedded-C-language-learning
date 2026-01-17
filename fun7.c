#include <stdio.h>

int array_sum(int data[], int n);

int main(int argc, const char *argv[]) {
    int a[] = {5, 9, 10, 3, 10};
    int sum = 0;

    /*
     *  这里应该传递数组的元素个数
     */
    sum = array_sum(a, sizeof(a) / sizeof(int));
    printf("sum = %d\n", sum);

    return 0;
}

/*
 *  int data[] = a; error 
 *  int data[] = a; right  地址存地址
 *  在这里data[]实际是一个指针
 */
int array_sum(int data[], int n) 
{
    int ret = 0;
    int i;

    /*
     *  for (i = 0; i < sizeof(data) / sizeof(int); i++)错误
     *  他是data本质是一个指针，除以int的大小，得到的是指针的个数
     *  并非实际要求的数组的元素个数
     *  解决：需要引入参数n，来表示数组的元素个数
     */
    for (i = 0; i < n; i++) {
        ret += data[i];
    }

    return ret;
}