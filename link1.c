#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    struct student {
        char *name;  
        char sex;
        int age; 
        float score;
        struct student *next;   /* 指向自身的指针 */
    };

    typedef struct student STU; 

    STU *p, *q, *r; 

    p = (STU *)malloc(sizeof(STU));
    q = (STU *)malloc(sizeof(STU));
    
    (*p).name = "lzh";
    (*p).sex = 'M';
    (*p).age = 21;
    (*p).score = 100.0;
    (*p).next = q;  /* 将q的地址赋给p的next指针 */

    (*q).name = "zsz";
    (*q).sex = 'W';
    (*q).age = 20;
    (*q).score = 99.0;
    (*q).next = NULL;   /* q指向空地址NULL */

    r = p; /* 将r指向p的起始地址 */
    while (r != NULL) { /* 指向空地址NULL */
        printf("name = %s, sex = %c, age = %d, score = %.1f\n", (*r).name, (*r).sex, (*r).age, (*r).score);
        r = (*r).next;  /* 指向下一个的起始地址 */
    }
    printf("遍历链表结束，%s与%s甜蜜蜜。\n", (*p).name, (*q).name);

    free(p);
    free(q);
    //free(r);  /* r指向空地址NULL，不能free */

    return 0;
}