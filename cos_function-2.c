/*
write a program that input a number and prints the cos value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a cos value: ");
    scanf("%lf", &x);

    double result = cos(x);

    printf("Cos (%lf) Result is: %lf", x, result);

    return 0;

}
