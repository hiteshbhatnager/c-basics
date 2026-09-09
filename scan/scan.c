#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first integer value :");
    scanf("%d", &a);
    printf("Enter second integer value :");
    scanf("%d", &b); // & , address , empercet help give input in variable

    // printf("Sum of %d and %d is  %d \n", a, b, a + b);
    // printf("Product of %d and %d is %d \n", a, b, a * b);
    // printf("subtraction of %d and %d is %d \n", a, b, a - b);
    // printf("division of %d and %d is %d \n", a, b, a / b);
    // printf("modules of %d and %d is %d \n", a, b, a % b);

    // swaping question

    printf("befor swaping %d nad %d \n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("after swaping %d and %d", a, b);
}