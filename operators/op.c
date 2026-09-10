#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    // int / int must give value in int
    a++;
    printf("increment %d\n", a);
    a--;
    printf("int/int = %d\n", (a / b));

    float c = 10;
    float d = 3;

    printf("flot/float give full value : %d", (c / d));
}