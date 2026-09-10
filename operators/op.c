#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    // int / int must give value in int

    printf("increment %d\n", a++);
    printf("a mid %d\n", a);
    printf("increment second :%d\n", ++a);

    printf("decriment %d\n", a--);
    printf("a mid %d\n", a);
    printf("decriment second :%d\n", --a);
    // printf("int/int = %d\n", (a / b));

    // float c = 10;
    // float d = 3;

    // printf("flot/float give full value : %d", (c / d));
}