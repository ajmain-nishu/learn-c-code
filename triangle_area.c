//write a program that calculates the area of a triangle
#include <stdio.h>
int main ()
{

    float base, height, area;

    printf("Enter base value: ");
    scanf("%f", &base);

    printf("Enter height value: ");
    scanf("%f", &height);

    area = (float) 1 / 2 * base * height;

    printf("Triangle area: %f", area);


    getch ();
}

