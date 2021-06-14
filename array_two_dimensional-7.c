/*
write a program that input numbers and
display two matrix addition and subtraction using two dimensional array
*/
#include <stdio.h>
int main ()
{
    int row, col, A[10] [10], B[10] [10], C[10] [10], numberOfRows, numberOfColumns;

    printf("Enter numbers of rows: ");
    scanf("%d", &numberOfRows);

    printf("Enter numbers of columns: ");
    scanf("%d", &numberOfColumns);

    printf("\nEnter A matrix numbers:\n");

    for (row=0; row<numberOfRows; row++)
    {
        for (col=0; col<numberOfColumns; col++)
        {
            printf("A[%d][%d] = ", row, col);
            scanf("%d", &A[row] [col]);
        }
        printf("\n");
    }

    printf("\nEnter B matrix numbers:\n");

    for (row=0; row<numberOfRows; row++)
    {
        for (col=0; col<numberOfColumns; col++)
        {
            printf("A[%d][%d] = ", row, col);
            scanf("%d", &B[row] [col]);
        }
        printf("\n");
    }


    printf("\nA Matrix Result:\n");

    for (row=0; row<numberOfRows; row++)
    {
        printf("\t");
        for (col=0; col<numberOfColumns; col++)
        {
            printf("%d ", A[row] [col]);
        }
        printf("\n");
    }


    printf("\nB Matrix Result:\n");

    for (row=0; row<numberOfRows; row++)
    {
        printf("\t");
        for (col=0; col<numberOfColumns; col++)
        {
            printf("%d ", B[row] [col]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (row=0; row<numberOfRows; row++)
    {
        for (col=0; col<numberOfColumns; col++)
        {
            C [row] [col] = A [row] [col] + B [row] [col];
        }
    }

    printf("\A matrix (+) B matrix:\n");

    for (row=0; row<numberOfRows; row++)
    {
        printf("\t");
        for (col=0; col<numberOfColumns; col++)
        {
            printf("%d ", C[row] [col]);
        }
        printf("\n");
    }

    for (row=0; row<numberOfRows; row++)
    {
        for (col=0; col<numberOfColumns; col++)
        {
            C [row] [col] = A [row] [col] - B [row] [col];
        }
    }


    printf("\nA matrix (-) B matrix:\n");

    for (row=0; row<numberOfRows; row++)
    {
        printf("\t");
        for (col=0; col<numberOfColumns; col++)
        {
            printf("%d ", C[row] [col]);
        }
        printf("\n");
    }

    return 0;
}
