//write a program that input a number and prints its factorial
#include <stdio.h>
int main ()
{
    int fact=1, a, b;

    printf("Enter any positive number: ");
    scanf("%d", &a);

    for (b=1; b<=a; b++)
    {
        fact = fact * b;
        printf("%d\n", fact);
    }

    return 0;
}
