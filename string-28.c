//write a program that input numbers and prints X to the power Y using string
#include <stdio.h>
int main ()
{
    double base, exp, result=1, i;
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exp);

    for (i=1; i<=exp; i++)
    {
        result = result * base;
    }
    printf("X to the Power Y is: %.4lf\n", result);

    return;
}
