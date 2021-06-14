//write a program that calculates the area of a circle
#include <stdio.h>
#include <math.h>
int main ()
{

    float radius, area;

    printf("Enter radius value: ");
    scanf("%f", &radius);


    area = M_PI * radius * radius;

    printf("Area of circle is: %f", area);


    return 0;
}

