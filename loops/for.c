#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 3)
            continue; // skip element
        if (i == 8)
            break; // stop the loop
        printf("%d\n", i);
    }
}