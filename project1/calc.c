#include <stdio.h>

void max();
void min();
void sum();
void factorial();
void evenodd();

int main()
{
    printf("----------personalize calc------------");
    int opt;
    printf("press the numbers for continue........");
    printf("1. for sum\n 2. for min\n 3. for max\n 4. for factorial\n 5. to find number is even or od\n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        sum();
        break;

    case 2:
        min();
        break;
    case 3:
        max();
        break;
    case 4:
        factorial();
        break;
    case 5:
        evenodd();
        break;
    case 6:
        printf("you exit the program");
    }
}

void max()
{
    int a, b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    printf("maximum is %d\n", a > b ? a : b);
}

void min()
{
    int a, b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    printf("minimum is %d\n", a < b ? a : b);
}

void sum()
{
    int a, b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("enter second number :");
    scanf("%d", &b);
    printf("sum %d and %d is %d\n", a, b, (a + b));
}

void factorial()
{
    double a;
    printf("enter number :");
    scanf("%lf", &a);
    double fac = 1;
    for (int i = 1; i <= a; i++)
    {
        fac = fac * i;
    }
    printf("factorial of %lf is %lf\n", a, fac);
}

void evenodd()
{
    int a;
    printf("enter number :");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
}