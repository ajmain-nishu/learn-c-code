//write a program input numbers that prints fibonacci series using one dimensional array
#include <stdio.h>
int main ()
{
    int num[100], n, i;

    printf("How many fibonacci numbers: ");
    scanf("%d", &n);

    printf("The Fibonacci Numbers are: ");
    printf("\n");

    num[0] = 0;
    num[1] = 1;

    for (i=2; i<n; i++)
    {
        num[i] = num[i-1] + num[i-2];
    }

    for (i=0; i<n; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}
