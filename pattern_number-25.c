//write a program that input a number and display number triangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n; col++)
        {
            if (col==1 || row==n || col==row)
                printf("%d", col);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
