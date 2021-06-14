/*
write a program that input a number and prints the log10 value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a log10 value: ");
    scanf("%lf", &x);

    double result = log10(x);

    printf("Log10 (%lf) Result is: %lf", x, result);

    return 0;

}
