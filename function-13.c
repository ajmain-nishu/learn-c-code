//write a program that input numbers and prints X to the power Y using function
#include <stdio.h>
int main ()
{
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exp);

    result (base,exp);

}

void result (double base, double exp)
{
    double result=1,i;

    for (i=1; i<=exp; i++)
    {
        result = result * base;
    }
    printf("X to the Power Y is: %.4lf\n", result);
}
