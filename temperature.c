#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;
    char symbol = 248;  //using the ascii code numerical value for the degree symbol

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);

        temp = (temp * 9 / 5) + 32;

        printf("\nThe temp in Fahrenheit is: %.1f %cF", temp, symbol);

    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in Fahrenheit: ");
        scanf("%f", &temp);

        temp = (temp-32)* 5 / 9;

        printf("\nThe temp in Fahrenheit is: %.1f %cC", temp, symbol);
    }
    else
    {
        printf("Error: %c is not a valid unit of measurement!", unit);
    }

    return 0;
}