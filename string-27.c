//write a program that input numbers and prints X to the power Y using string
#include <stdio.h>
#include <string.h>
int main ()
{
    double base, exp, result;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exp);

    result = pow (base,exp);

    printf("X to the Power Y is: %.4lf\n", result);

    return 0;
}
