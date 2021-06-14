/*
write a program that prints exponencial value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x = 10;

    double result = exp(x);

    printf("Exponencial (%lf) Result is: %lf", x, result);

    return 0;

}

