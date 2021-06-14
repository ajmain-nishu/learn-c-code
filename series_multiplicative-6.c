/*
write a program that input a number and
display the series 1 * 3 * 5 * 7 * ........  using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int num, i, result=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("1 * 3 * 5 * %d = ", num);

    for (i=1; i<=num; i=i+2)
    {
        result = result * i;
    }

    printf ("%d", result);

    return 0;
}
