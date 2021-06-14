//write a program that input a number and prints absolute value
#include <stdio.h>
int main ()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);


    int result=abs(x);

    printf("Absolute Value is: %d", result);

    return 0;

}
