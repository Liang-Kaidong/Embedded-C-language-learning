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
        struct date {
            int year;
            int mon;
            int day;
        } birthday;
    } stu[2] = {{"lzh", 'M', 21, 100,{2023, 10, 1}}, {"zsy", 'M', 20, 99,{2023, 10, 2}}};

    typedef struct student STU; 
    typedef struct date DATE; /* 对应结构体 */

    STU *p; 
    DATE *d;

    for (i = 0; i < 2; i++ ) {
        p = &stu[i];    /* p = stu error,始终指向stu[0]*/
        d = &(*p).birthday; /* d = &stu[i].birthday */

        printf("stu[%d].name = %s\n", i, (*p).name);   
        printf("stu[%d].sex = %c\n", i, (*p).sex);  
        printf("stu[%d].age = %d\n", i, (*p).age);
        printf("stu[%d].score = %.1f\n", i, (*p).score);
        printf("stu[%d].birthday.year = %d\n", i, (*d).year);
        printf("stu[%d].birthday.mon = %d\n", i, (*d).mon);
        printf("stu[%d].birthday.day = %d\n", i, (*d).day);

        puts(" ");
    }

    return 0;
}