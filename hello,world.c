//引入头文件,如果不写,后面的printf,编译时会引起报警
//stdio.h代表输入输出头文件,拓展名.h的文件叫做头文件
#include <stdio.h>

//main代表主函数,C语言程序的入口,有且仅有1个,不能是其他名字
int main() 
{   //左括号和右括号是对应的,括号中叫函数体,里面可以写多条语句
    printf("Hello, world!\n"); 
    //printf代表打印的意思,能在屏幕上输出要显示的内容,是个库函数可以直接调用
    //\n代表换行,表示输出完之后换行显示
    printf("Welcome to Beijing.\n"); 
    printf("It's a beautiful day.\n"); 

    return 0; //返回了一个0,对应了main函数前面的int
} 
