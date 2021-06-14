//write a program that calculates the area of a rectangle
#include <stdio.h>
int main ()
{

    float length, width, area;

    printf("Enter length value: ");
    scanf("%f", &length);

    printf("Enter width value: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area of a Rectangle is: %f", area);


    return 0;
}
