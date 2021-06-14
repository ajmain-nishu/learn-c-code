/*
write a program that input 2 integer numbers and print their
summation, average, minus, multiplication, division, reminder
*/
#include <stdio.h>
int main ()
{

    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    result = num1 % num2 ;
    printf("Reminder is : %d\n", result);

    result = num1 + num2 ;
    printf("Summation is : %d\n", result);

    result = (num1 + num2) / 2;
    printf("Average is : %d\n", result);

    result = num1 - num2 ;
    printf("Minus is : %d\n", result);

    result = num1 * num2 ;
    printf("Multiplication is : %d\n", result);

    result = num1 / num2 ;
    printf("Division is : %d\n", result);


    getch ();
}
