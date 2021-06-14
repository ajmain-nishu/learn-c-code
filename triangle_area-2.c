//write a program that calculates the area of length of a triangle
#include <stdio.h>
int main ()
{

    double a, b, c, s, area;

    printf("Enter first length value: ");
    scanf("%lf", &a);

    printf("Enter second length value: ");
    scanf("%lf", &b);

    printf("Enter third length value: ");
    scanf("%lf", &c);

    s = (a+b+c) / 2 ;

    area = sqrt (s*(s-a)*(s-b)*(s-c));

    printf("Area of Length of Triangle is: %lf", area);


    getch ();
}
