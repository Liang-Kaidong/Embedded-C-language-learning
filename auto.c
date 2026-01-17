#include <stdio.h>

int main(int argc, const char *argv[])
{ 
    while (1) {
        auto int a;
        printf("a = %d\n", a);
    }
    //a++;  /* a出循环被销毁 */

    return 0;
}
