/*
write a program that input a number and prints round value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a round value: ");
    scanf("%lf", &x);

    double result = round(x);

    printf("Round (%lf) Result is: %lf", x, result);

    return 0;

}
