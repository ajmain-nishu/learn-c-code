/*
write a program that input a number and prints the log value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a log value: ");
    scanf("%lf", &x);

    double result = log(x);

    printf("Log (%lf) Result is: %lf", x, result);

    return 0;

}
