//write a program that input a number and prints positive or negative or zero value
#include <stdio.h>
int main ()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0)
        printf("Positive Value");

    else if (num < 0)
        printf("Negative Value");

    else
        printf("Zero Value");


    return 0;
}

