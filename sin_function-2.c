/*
write a program that input a number and prints sin value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a sin value: ");
    scanf("%lf", &x);

    double result = sin(x);

    printf("Sin (%lf) Value is: %lf", x, result);

    return 0;

}
