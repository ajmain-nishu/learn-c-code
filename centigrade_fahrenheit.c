//write a program that input a centigrade value and prints the fahrenheit value
#include <stdio.h>
int main ()
{
    float c , f ;

    printf("Enter a centigrade value: ");
    scanf("%f", &c);

    f = ( 1.8 * c ) + 32 ;

    printf("The Fahrenheit value is: %f", f);

    return 0;
}

