//write a program that input a number and display reverse alphabetic right angle triangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=n; row>=1; row--)
    {
        for (col=1; col<=row; col++)
        {
            printf("%c ",col+96);
        }
        printf("\n");
    }

    return 0;
}

