/*
write a program that prints round result
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x = 8.4;

    double result = round(x);

    printf("Round (%lf) Result is: %lf", x, result);

    return 0;

}

