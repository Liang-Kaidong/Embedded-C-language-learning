#include <stdio.h>

int main()
{
    float score;
    printf("please input your socre:");
    scanf("%f", &score);

    if (score < 0 || score > 100) {
        printf("not in [0, 100]\n");
        return -1;
    } else if (score >= 90) {
        /* 
        * 这里可以不用框定<= 100的情况，
        * 因为依旧在上一个if的范围
        * 省略以精简代码
        */
        printf("A-excellent\n");
    } else if (score >= 70) {   //[70, 90)
        printf("B-good\n");
    } else if (score >= 60) {   //[60, 70)
        printf("C-pass\n");
    } else {                    //[0, 60)
        printf("D-not pass\n");
    }
    return 0;
}  
