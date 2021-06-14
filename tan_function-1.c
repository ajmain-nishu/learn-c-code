/*
write a program that prints tan result
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x = 45;

    double result = tan(x);

    printf("Tan (%lf) Result is: %lf", x, result);

    return 0;

}
