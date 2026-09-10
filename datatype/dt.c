#include <stdio.h>

int main()
{
    int number = 1;        // store integer
    float dec = 2.4344994; // store single prcise num
    double decDec = 5422.359292;
    char ch = 'a';

    printf("integer = %d\n", number);
    printf("float = %f\n", dec);
    printf("dobule = %lf\n", decDec);
    printf("Char = %c\n", ch);

    int a = 2;
    int b = -23;
    int c = +214;
    int d = 3902;

    printf("%05d\n", a); // 00002
    printf("%+3d\n", b); //-23
    printf("%+4d\n", c); // +214
    printf("%1d\n", d);  // 3902
}