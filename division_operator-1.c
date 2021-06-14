//write a program that input 2 integer numbers and print their division
#include <stdio.h>
int main ()
{

    float num1, num2, div;

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter second number: ");
    scanf("%f",&num2);


    div = num1 / num2;

    printf("The division is: %f",div);

    getch ();
}
