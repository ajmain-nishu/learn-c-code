//write a program that input numbers and prints power of Y using function
#include <stdio.h>
int main ()
{
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exp);

    calculatePower (base, exp);

}

void calculatePower (double base , double exp)
{
    double result=1, i;

    for (i=1; i<=exp; i++)
    {
        result = result * base;
    }

    printf("The Power is: %.4lf\n", result);
}
