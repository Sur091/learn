#include <stdio.h>

int main() 
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("The number is 0");
    }
    else if (number > 0)
    {
        printf("%d is positive", number);
    }
    else 
    {
        printf("%d is negative", number);
    }
}