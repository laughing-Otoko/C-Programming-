#include <stdio.h>
#include <assert.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double sol;
    char sym = 247;


    printf("\nEnter required operation(+,-,*,/): ");
    scanf("%c", &operator);
    
    assert(operator != '+' || operator != '-' || operator != '*' || operator != '/');

    printf("\nEnter first number: ");
    scanf("%lf", &num1);

    printf("\nEnter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        sol = num1 + num2;
        printf("\n\t%.1lf", num1);
        printf("\n+\t%.1lf", num2);
        printf("\n----------------");
        printf("\n\t%.1lf", sol);
        break;
    case '-':
        sol = num1 - num2;
        printf("\n\t%.1lf", num1);
        printf("\n-\t%.1lf", num2);
        printf("\n----------------");
        printf("\n\t%.1lf", sol);
        break;
    case '*':
        sol = num1 * num2;
        printf("\n\t%.1lf", num1);
        printf("\n*\t%.1lf", num2);
        printf("\n----------------");
        printf("\n\t%.1lf", sol);
        break;
    case '/':
        sol = num1 + num2;
        printf("\n\t%.1lf", num1);
        printf("\n%c\t%.1lf", sym, num2);
        printf("\n----------------");
        printf("\n\t%.1lf", sol);
        break;
    default:
        printf("Error: only +, - , *, / allowed!");
        break;
    }

    return 0;
}