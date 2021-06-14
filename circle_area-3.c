//write a program that calculates the circumference of the circle
#include <stdio.h>
#include <math.h>
int main ()
{

    float radius, area;

    printf("Enter radius value: ");
    scanf("%f", &radius);


    area = 2 * M_PI * radius ;

    printf("The Circumference Of a Circle is: %f", area);


    return 0;
}

