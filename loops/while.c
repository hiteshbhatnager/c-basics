#include <stdio.h>

int main()
{
    // int i = 0;
    // while (i <= 10)
    // {
    //     printf("hitesh\n");
    //     i++;
    // }

    // sum 382292 with while loop

    int digit = 382292;
    int i;
    double sum;
    while (digit != 0)
    {
        i = digit % 10;
        printf("last digit : %d\n", i);
        digit = digit / 10;
        sum = sum + i;
    }
    printf("Sum of digits: %lf\n", sum);
}