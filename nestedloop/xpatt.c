#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        for (int a = 1; a <= 6 - i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}