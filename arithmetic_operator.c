//write a program that input 2 floating numbers and print their summation, average, minus, multiplication, division
#include <stdio.h>
int main ()
{

    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter second number: ");
    scanf("%f",&num2);

    result = num1 + num2 ;
    printf("Summation is : %.2f\n", result);

    result = (num1 + num2) / 2 ;
    printf("Average is : %.2f\n", result);

    result = num1 - num2 ;
    printf("Minus is : %.2f\n", result);

    result = num1 * num2 ;
    printf("Multiplication is : %.2f\n", result);

    result = num1 / num2 ;
    printf("Division is : %.2f\n", result);


    getch ();
}
