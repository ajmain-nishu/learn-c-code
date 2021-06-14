/*
write a program that input a number and prints the trunc value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a trunc value: ");
    scanf("%lf", &x);

    double result = trunc(x);

    printf("Trunc (%lf) Result is: %lf", x, result);

    return 0;

}
