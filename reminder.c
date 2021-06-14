//write a program that input 2 integer numbers and print their reminder
#include <stdio.h>
int main ()
{

    int num1, num2 , rem;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    rem = num1 % num2 ;
    printf("Reminder is: %d", rem);


    getch ();
}
