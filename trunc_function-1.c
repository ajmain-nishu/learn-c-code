/*
write a program that prints trunc result
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x = 9.5;

    double result = trunc(x);

    printf("Trunc (%lf) Result is: %lf", x, result);

    return 0;

}

