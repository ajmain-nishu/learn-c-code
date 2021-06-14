//write a program that input numbers and display row and column values using two dimensional array
#include <stdio.h>
int main ()
{
    int row, col, array[3] [4];

    printf("Enter row and column numbers:\n");

    for (row=0; row<3; row++)
    {
        for (col=0; col<4; col++)
        {
            printf("A[%d][%d] = ", row, col);
            scanf("%d", &array[row] [col]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Results:\n");

    for (row=0; row<3; row++)
    {
        for (col=0; col<4; col++)
        {
            printf("%d ", array[row] [col]);
        }
        printf("\n");
    }

    return 0;
}
