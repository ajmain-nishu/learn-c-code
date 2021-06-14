//write a program that input a number and display the series 1 + 3 + 5 + 7 + ....... using parallel section
#include <stdio.h>
int main ()
{
    int n, i, sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    printf("1 + 3 + 5 + ....... + %d", n);

    for (i=1; i<=n; i=i+2)
    {
        sum = sum + i;
    }

    printf(" = %d", sum);

    return 0;
}
