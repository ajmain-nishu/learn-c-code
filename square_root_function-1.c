//write a program that input a number and prints square root value
#include <stdio.h>
int main ()
{

    float x;

    printf("Enter a value: ");
    scanf("%f", &x);

    double result = sqrt(x);

    printf("Square Root Value is: %lf", result);

    return 0;

}
