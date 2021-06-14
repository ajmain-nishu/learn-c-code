/*
write a program that input a number and prints the ceil value
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    double x;

    printf("Enter a ceil value: ");
    scanf("%lf", &x);

    double result = ceil(x);

    printf("Ceil (%lf) Result is: %lf", x, result);

    return 0;

}
