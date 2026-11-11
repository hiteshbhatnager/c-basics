#include <stdio.h>
#include <math.h>

int main()
{
    int g = 9, a = 10, b = 100, c = 2, d = 2;

    printf("floor = %lf\n", floor(8.6));
    printf("ceil = %lf\n", ceil(8.6));
    printf("square root = %.2lf\n", sqrt(b));
    printf("square root = %.1lf\n", sqrt(g));
    printf("power = %.1lf\n", pow(c, d));
    printf("round = %.1lf\n", round(7.452));
}