/*
write a program that prints log10 result
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x = 10.5;

    double result = log10(x);

    printf("Log10 (%lf) Result is: %lf", x, result);

    return 0;

}

