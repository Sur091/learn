#include <stdio.h>
int main()
{
    char operator;
    float a, b;
    printf("Enter two numbers");
    scanf("%f%f", &a, &b);
    printf("What operation would you like to perform the numbers [+,-,*,/]?: ");
    scanf(" %c", &operator);
    switch (operator)
    {
        case '+': printf("%.2f %c %.2f = %.2f", a, operator, b, a + b); break;
        case '-': printf("%.2f %c %.2f = %.2f", a, operator, b, a - b); break;
        case '*': printf("%.2f %c %.2f = %.2f", a, operator, b, a * b); break;
        case '/': printf("%.2f %c %.2f = %.2f", a, operator, b, a / b); break;
        default: printf("Please enter a valid operation.");
    }
    return 0;
}