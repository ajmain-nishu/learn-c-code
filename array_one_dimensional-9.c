//write a program input numbers that prints their sum and average using one dimensional array
#include <stdio.h>
int main ()
{
    int num[100], i, sum=0, n;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("The numbers are: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i=0; i<n; i++)
    {
        sum = sum + num[i];
    }
    printf("The Sum is: %d\n", sum);
    printf("The Average is: %.2f\n", (float) sum/n);

    return 0;
}
