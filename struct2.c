#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    int i;
    struct student {
        char name[20];
        char sex;
        int age;    /* 结构体的变量名不受外部变量的影响 */
        float score;
    } stu[2] = {{"lzh", 'M', 21, 100}, {"zsy", 'M', 21, 100}};

    typedef struct student STU; /* 给结构体起一个别名 */

    STU *p; /* 定义一个指向结构体的指针 */
    for (i = 0; i < 2; i++ ) {
        STU s = stu[i];    /* 第i个元素是结构体赋值给结构体stu */
        p = &s; /* 结构体变量的地址赋值给指针变量p */

        printf("stu[%d].name = %s\n", i, p -> name);
        printf("stu[%d].sex = %c\n", i, p -> sex);
        printf("stu[%d].age = %d\n", i, p -> age);
        printf("stu[%d].score = %.1f\n", i, p -> score);
        puts(" ");
    }

    return 0;
}