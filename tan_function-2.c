/*
write a program that input a number and prints the tan value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a tan value: ");
    scanf("%lf", &x);

    double result = tan(x);

    printf("Tan (%lf) Result is: %lf", x, result);

    return 0;

}

