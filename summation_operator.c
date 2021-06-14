//write a program that input two integer numbers and prints their summation
#include <stdio.h>
int main ()
{

    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    sum = num1 + num2 ;

    printf("The summation is: %d", sum);

    getch ();
}
