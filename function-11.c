//write a program that input number and prints area of a triangle using function
#include <stdio.h>
double triangleArea (double a, double b);
int main ()
{
    double base, height;
    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter height: ");
    scanf("%lf", &height);

    double area = triangleArea(base, height);

    printf("Area of a Triangle: %.4lf\n", area);
}

double triangleArea (double a, double b)
{
    return 0.5 * a * b;
}
