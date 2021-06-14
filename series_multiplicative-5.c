/*
write a program that input a number and
display the series 1 * 2 * 3 * 4 * ........  using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int num, i, result=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("1 * 2 * 3 * %d = ", num);

    for (i=1; i<=num; i++)
    {
        result = result * i;
    }

    printf ("%d", result);

    return 0;
}

