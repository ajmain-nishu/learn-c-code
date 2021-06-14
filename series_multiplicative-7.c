/*
write a program that input a number and
display the series 1^3 * 2^3 * 3^3 * 4^3 * ........  using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int n, i, result = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1^3 * 2^3 * 3^3 * 4^3 * ........ %d^2 = ", n);

    for (i=1; i<=n; i++)
    {
        result = result * i*i*i;
    }

    printf("%d", result);

    return 0;
}
