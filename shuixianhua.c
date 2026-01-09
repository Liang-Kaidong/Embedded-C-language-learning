#include <stdio.h>
/* 
* 记得gcc编译时链接math库
* gcc shuixianhua.c -Wall -lm 
*/
#include <math.h>   

int main(int argc, const char * argv[])
{   
    int n = 100;
    /* 
    * a代表百位, b代表十位, c代表个位
    * a = n / 100 商的结果即为百位
    * b = n / 10 % 10 商后余数即为十位
    * c = n % 10 余数即为个位
    */
    int a, b, c;

    while (n <= 999) {
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;

//        if (a*a*a + b*b*b + c*c*c == n) {
        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == n) {
            printf("%d\n", n);
        }
        n++;
    }

    return 0;
}  

