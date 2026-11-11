#include <stdio.h>

int main()
{
    int a = 3, b = 5; // this format is also possible
    int sum = a + b;
    int product = a * b;
    int sub = b - a;
    int div = a / b;
    int mod = a % b;

    printf("Sum = %d\n", sum);

    printf("Product of %d and %d is %d \n", a, b, product);
    printf("subtraction of %d and %d is %d \n", a, b, sub);
    printf("division of %d and %d is %d \n", a, b, div);
    printf("modules of %d and %d is %d \n", a, b, mod);
}