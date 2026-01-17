#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* 函数声明 */
int calculate_lower_alpha(const char *p); /* const char *p = str, 常量指针 */
void swap_lower_to_upper(const char *p, char *ch); 

int main(int argc, const char *argv[]) {
    char str[100] = {0};  /* 注意初始化是{0}，"\0"代表仅赋与两个字符 */
    scanf("%s", str);  /* str本身就是地址，不需要&, %s可以传递字符串 */
    int n;  /* 获取calculate_lower_alpha的返回值 */
    n = calculate_lower_alpha(str);
    printf("lower alpha num: %d\n", n);

    char ch[100] = {0};
    swap_lower_to_upper(str, ch);
    printf("upper str: %s\n", ch);

    return 0;
}

int calculate_lower_alpha(const char *p) /* const char *p = str, 常量指针 */
{
    int num = 0;
    while (*p != '\0') {  /* while (*p) */
        if (islower(*p)) {
            num++;
        }
        p++; /* 指向下一个字符 */
    }

    return num;
}

void swap_lower_to_upper(const char *p, char *ch)
{
    strcpy(ch, p);  /* char *strcpy(char *restrict dst, const char *restrict src); */
    for (; *ch != '\0'; ch++) {
        if (islower(*ch)) {
            *ch = toupper(*ch);
        }
    }
}