/*
write a program that input a number and prints exponencial value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a value: ");
    scanf("%lf", &x);

    double result = exp(x);

    printf("Exponencial (%lf) Result is: %lf", x, result);

    return 0;

}

