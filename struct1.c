#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    //int age;
    int i;
    struct student {
        char name[20];
        char sex;
        int age;    /* 结构体的变量名不受外部变量的影响 */
        float score;
    } stu[2] = {{"lzh", 'M', 21, 100}, {"zsy", 'M', 21, 100}};

    typedef struct student STU; /* 给结构体起一个别名 */
    for (i = 0; i < 2; i++ ) {
        STU s = stu[i];    /* 第i个元素是结构体赋值给结构体stu */
        printf("stu[%d].name = %s\n", i, s.name);
        printf("stu[%d].sex = %c\n", i, s.sex);
        printf("stu[%d].age = %d\n", i, s.age);
        printf("stu[%d].score = %.1f\n", i, s.score);
        puts(" ");
    }

    return 0;
}