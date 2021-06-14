//write a program that input three numbers and prints quadratic equation value
#include <stdio.h>
int main ()
{
    double a, b, c, d, x1, x2;

    printf("Enter first value: ");
    scanf("%lf", &a);

    printf("Enter second value: ");
    scanf("%lf", &b);

    printf("Enter third value: ");
    scanf("%lf", &c);


    d = sqrt(b * b - 4 * a *c);

    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);

    printf("x1 is: %lf\n", x1);
    printf("x2 is: %lf", x2);

    return 0;

}
