#include <stdio.h>

int main()
{
    double a, b, c;

    printf("Enter number one : ");
    scanf("%lf", &a);
    printf("Enter number two : ");
    scanf("%lf", &b);
    printf("Enter number three : ");
    scanf("%lf", &c);

    if ((a > b) && (a > c))
    {
        printf("biggest number is %0lf\n", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("biggest number is %0lf\n", b);
    }
    else
    {
        printf("biggest number is %0lf\n", c);
    }
}