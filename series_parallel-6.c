//write a program that input a number and display the series 1 + 2 + 3 + 4 + 5 + ........  using parallel section
#include <stdio.h>
int main ()
{
    int n, i, sum = 0;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    for (i=1; i<=n; i=i+1)
    {
        printf("%d ", i);
        sum = sum + i;
    }

    printf("\nSum = %d", sum);

    return 0;
}
