//write a program that input 2 floating numbers and print their average
#include <stdio.h>
int main ()
{

    float num1, num2, avg;

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter second number: ");
    scanf("%f",&num2);


    avg = (num1 + num2) / 2;

    printf("The average is: %f",avg);

    getch ();
}
