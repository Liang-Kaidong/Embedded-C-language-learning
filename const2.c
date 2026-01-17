#include <stdio.h>

int main(int argc, char *argv[])
{
    int m = 10;
    const int *p;   /* const修饰*p, *p不能改 */
    int *const q = &m;   /* const修饰q, q不能改 */
    const int *const r = &m;

    p = &m; /* p可以改 */
    //(*p)++; /* 错误，const int *p 限制了通过p改变m的值 */

    //q = &m; /* 错误， int *const q 限制了q指向m，不能改变q指向其他变量 */
    (*q) = 20; /* *q可以改 */

    r++;    /* const修饰r, r不能改 */
    (*r)++; /* const修饰*r, *r不能改 */
    
    return 0;
}
