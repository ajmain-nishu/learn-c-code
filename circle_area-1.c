//write a program that calculates the area of a circle
#include <stdio.h>
int main ()
{

    float radius, area, PI=3.1416;

    printf("Enter radius value: ");
    scanf("%f", &radius);


    area = PI * radius * radius;

    printf("Area of circle is: %f", area);


    return 0;
}
