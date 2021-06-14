/*
write a program that input 2 integer numbers and print their
summation, average, minus, multiplication, division, reminder
*/
#include <stdio.h>
int main ()
{

    int num1, num2, result;
    float abc;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    result = num1 % num2 ;
    printf("Reminder is : %d\n", result);

    result = num1 + num2 ;
    abc = (float)result;
    printf("Summation is : %f\n", abc);

    result = num1 + num2;
    abc = (float)result / 2;
    printf("Average is : %f\n", abc);

    result = num1 - num2 ;
    abc = (float)result;
    printf("Minus is : %f\n", abc);

    result = num1 * num2 ;
    abc = (float)result;
    printf("Multiplication is : %f\n", abc);

    result = num1 / num2 ;
    abc = (float)result;
    printf("Division is : %f\n", abc);


    getch ();
}

