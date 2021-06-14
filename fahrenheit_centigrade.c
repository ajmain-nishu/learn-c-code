//write a program that input a fahrenheit value and prints the centigrade value
#include <stdio.h>
int main ()
{
    float f , c ;

    printf("Enter a fahrenheit value: ");
    scanf("%f", &f);

    c = ( f - 32 ) / 1.8 ;

    printf("The Centigrade value is: %f", c);

    return 0;
}
