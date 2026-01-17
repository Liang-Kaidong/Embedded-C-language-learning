#include <stdio.h>
#include <stdlib.h>   /* qsort需要*/

int cmp(const void *p, const void *q);

int main(int argc, const char *argv[])
{
    int s[] = {89, 23, 10, 8, 7, 61}, n, i;
    n = sizeof(s) / sizeof(int);

    /**
     *  @brief 对数组s进行排序
     * 
     *  @param s 数组名
     *  @param n 数组元素个数
     *  @param sizeof(int) 每个元素的字节数
     *  @param cmp 比较函数指针（函数指针，存函数名，返回值int）
     *  void qsort(void base[.size * .nmemb], size_t nmemb, size_t size,
     *  int (*compar)(const void [.size], const void [.size]));
     */
    qsort(s, n, sizeof(int), cmp);

    for (i = 0; i < n; i++) {
        printf("%d ", s[i]);
    }
    puts(" ");

    return 0;
}

/**
 *  @brief 比较函数，用于qsort排序
 * 
 *  @param p 指向第一个元素的指针
 *  @param q 指向第二个元素的指针
 *  @return int 比较结果（-1：p小于q；0：p等于q；1：p大于q）
 */
int cmp(const void *p, const void *q)
{
    /* void *p需要强制类型转换 */
    return (*(int *)p - *(int *)q);
}