/*
write a program that input a number and to the power for the number
and prints the result
*/
#include <stdio.h>
int main ()
{

    float x, y;

    printf("Enter a value: ");
    scanf("%f", &x);

    printf("Enter to the power value: ");
    scanf("%f", &y);


    double result = pow(x,y);

    printf("Result is: %lf", result);

    return 0;

}
