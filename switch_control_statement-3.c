/*
write a program that input a temperature value and
prints Fahrenheit to Celsius or Celsius to Fahrenheit temperature
*/
#include <stdio.h>
int main ()
{
    int choice;
    float temp, converttemp;

    printf("Temperature Conversion Menu\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        {
            printf("Enter Fahrenheit Temperature: ");
            scanf("%f", &temp);
            converttemp = (temp-32) / 1.8;
            printf("The Temperature in Celsius is: %f\n", converttemp);
            break;
        }

    case 2:
        {
            printf("Enter Celsius Temperature: ");
            scanf("%f", &temp);
            converttemp = (1.8 * temp) + 32;
            printf("The Temperature in Fahrenheit is: %f\n", converttemp);
            break;
        }

    default:
        printf("Not a Correct Option");
    }

    return 0;

}

