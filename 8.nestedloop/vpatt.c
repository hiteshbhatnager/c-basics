#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s <= 10; s++)
        {
            if (i == s || i + s == 10)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}