#include <stdio.h>

int sum(int a, int b);
void maxnum(int c, int d, int e);
void swap(int num1, int num2);

int main()
{
    printf("sum = %d\n", sum(5, 6));
    maxnum(28, 59, 45);
    swap(69, 96);
};

int sum(int a, int b)
{
    return a + b;
};

void maxnum(int d, int c, int e)
{
    printf("max number is :%d\n", (d > c) ? (d > e ? d : e) : (c > d ? c : d));
};

void swap(int num1, int num2)
{
    int x;
    x = num1;
    num1 = num2;
    num2 = x;

    printf("%d %d", num1, num2);
}