#include <stdio.h>

int main() // day name
{
    int num;
    printf("Enter num to check month :");
    scanf("%d", &num);

    switch (num) // work with only int and char
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        // brake need if you do not want to run next case
    case 4:
        printf("thrusday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("satarday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("nothing");
    }

    // nestion is allowed
    int val;
    printf("enter value here we are testing nesting :");
    scanf("%d", &val);

    switch (val)
    {
    case 1:
        printf("number is 1");
        switch (num)
        {
        case 2:
            printf("today is not tuseday");
            break;

        default:
            printf("this is default value");
            break;
        }
    }
}