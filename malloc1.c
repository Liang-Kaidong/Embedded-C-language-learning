#include <stdio.h>
#include <stdlib.h>

struct student {
    char *name;
    char sex;
    int age;
    int score;
};

typedef struct student STU;

int main(int argc, char *argv[]) 
{
    STU *p;
    /*
     * p要初始化，使用malloc申请内存
     * sizeof(STU)结构体所占的字节
     * malloc(sizeof(STU))要申请的内存大小
     * malloc返回的是void *类型，需要强制类型转换为STU *类型
     * 这里结构体相当于数据类型，只不过是自定义的
     */
    p = (STU *)malloc(sizeof(STU));

    (*p).name = "lkd";
    (*p).sex = 'm';
    (*p).age = 18;
    (*p).score = 90;
    printf("name = %s, sex = %c, age = %d, score = %d\n", (*p).name, (*p).sex, (*p).age, (*p).score);

    /* 释放内存 */
    free(p);
    
    return 0;
}