//write a program that input matrix numbers and prints transpose matrix using two dimensional array
#include <stdio.h>
int main ()
{
    int A[10][10], row, col, i, j, transpose[10][10];

    printf("Enter numbers of rows and columns for the matrix: ");
    scanf("%d %d", &row, &col);

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }


    printf("\nOriginal Matrix:\n");
    for (i=0; i<row; i++)
    {
        printf("\t");
        for (j=0; j<col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }



    printf("\nTranspose Matrix:\n");
    for (i=0; i<col; i++)
    {
        printf("\t");
        for (j=0; j<row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
