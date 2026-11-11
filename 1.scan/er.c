#include <stdio.h>

int main()
{
    // in this first scanf for a go in buffer and take value of a
    // but do not take  charchter value because when we click enter c take it as a character \n
    // so in second scanf it take \n as a character and not take the value of b
    // int a;
    // char b;

    // printf("Enter integer :");
    // scanf("%d", &a);
    // printf("Enter character :");
    // scanf("%c", &b);

    // printf("integer is %d and character is %c", a, b);

    // solution

    int num;
    char ch;

    // we use getchar that empty the buffer
    printf("enter int :");
    scanf("%d", &num);
    getchar();
    printf("enter char :");
    scanf("%c", &ch); // we can also use space befor %c for this

    printf("int is %d and char is %c", num, ch);
}