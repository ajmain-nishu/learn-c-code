/*
write a program that input a number and prints the floor value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a floor value: ");
    scanf("%lf", &x);

    double result = floor(x);

    printf("Floor (%lf) Result is: %lf", x, result);

    return 0;

}
