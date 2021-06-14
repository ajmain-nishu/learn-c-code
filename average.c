//write a program that input 2 integer numbers and print their average
#include <stdio.h>
int main ()
{

    int num1, num2, sum;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    sum = num1 + num2 ;

    avg = (float)sum / 2;   //type casting

    printf("The average is: %f",avg);

    getch ();
}
