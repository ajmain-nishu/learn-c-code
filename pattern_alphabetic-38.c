//write a program that input a number and display alphabetic square pattern
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
            printf("%c ", row+96);
        }

        printf("\n");
    }

    return 0;
}
