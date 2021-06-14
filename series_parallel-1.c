//write a program that input a number and display the series 1 + 2 + 3 + 4 + 5 + 6 + ...... using parallel section
#include <stdio.h>
int main ()
{
    int n, i, sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + ....... + %d", n);

    for (i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    printf(" = %d", sum);

    return 0;
}
