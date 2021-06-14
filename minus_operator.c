//write a program that input 2 integer numbers and print their minus
#include <stdio.h>
int main ()
{

    int num1, num2, minus;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);


    minus = num1 - num2;

    printf("The minus is: %d",minus);

    getch ();
}
