#include <stdio.h>

int main()
{
    int a = 10, b = 3;
    float ans = a / b;

    printf("%f\n", ans); // not giving precise value

    float ans2 = (float)a / b; // explicit conversion

    printf("%f", ans2);
}