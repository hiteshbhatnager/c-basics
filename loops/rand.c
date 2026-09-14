#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 100;
    printf("%d", number);

    int guess;
    printf("guess the number");

    do
    {
        scanf("%d", &guess);

        if (number < guess)
        {
            printf("number is too large");
        }
        else if (number > guess)
        {
            printf("number is too small");
        }
        else if (number = guess)
        {
            printf("you guess correct number");
        }

    } while (guess != number);
    return 0;
}