#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter number one :");
    scanf("%d", &a);
    printf("Enter number one :");
    scanf("%d", &b);
    printf("Enter number one :");
    scanf("%d", &c);
    printf("Enter number one :");
    scanf("%d", &d);

    if (a % 2 == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("% is odd number");
    }
    if (b % 2 == 0)
    {
        printf("b is even number");
    }
    else
    {
        printf("b is odd number");
    }
    if (c % 2 == 0)
    {
        printf("c is even number");
    }
    else
    {
        printf("c is odd number");
    }
    if (d % 2 == 0)
    {
        printf("d is even number");
    }
    else
    {
        printf("d is odd number");
    }
}