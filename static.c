#include <stdio.h>

void fun() {
    static int a = 10;
    a++;
    printf("%d %p\n", a, &a);
}

int main(int argc, const char *argv[])
{ 
    int i = 0;
    while (i < 5) {
        fun();
        i++;
    }

    return 0;
}
