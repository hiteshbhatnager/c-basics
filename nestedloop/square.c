#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int n = 0; n <= 5 - i; n++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
