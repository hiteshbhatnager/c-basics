#include <stdio.h>

int main()
{
    int a = 50, b = 20;
    printf("%d\n", (a == b));
    printf("%d\n", (a < b));
    printf("%d\n", (a > b));
    printf("%d\n", (a != a));

    printf("%d\n", (a > b && a != b)); // 1
    printf("%d\n", (a > b && a == b)); // 0
    printf("%d\n", (a > b || a != b)); // 1
    printf("%d\n", (a > b || a == b)); // 1
}