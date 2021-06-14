/*
write a program that input a number and
display the series 1^2 + 2^2 + 3^2 + 4^2 + ........  using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1^2 + 2^2 + 3^2 + 4^2 + ........ %d^2 = ", n);

    for (i=1; i<=n; i++)
    {
        sum = sum + i*i;
    }

    printf("%d", sum);

    return 0;
}
