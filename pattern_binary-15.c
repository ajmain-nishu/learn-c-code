//write a program that input a number and display reverse binary triangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=n; row>=1; row--)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for (col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }

    return 0;
}
