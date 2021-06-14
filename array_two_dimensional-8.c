//write a program that input matrix numbers and prints multiplication using two dimensional array
#include <stdio.h>
int main ()
{
    int row1, row2, col1, col2, i, j, k, first[10][10], second[10][10], result[10][10], sum=0;

    printf("Enter rows for first matrix: ");
    scanf("%d", &row1);

    printf("Enter columns for first matrix: ");
    scanf("%d", &col1);

    printf("Enter rows for second matrix: ");
    scanf("%d", &row2);

    printf("Enter columns for second matrix: ");
    scanf("%d", &col2);

    while (col1 != row2)
    {
        printf("Error !! column of first matrix are not equal to row of second matrix\n");


        printf("again enter rows for first matrix: ");
        scanf("%d", &row1);

        printf("again enter columns for first matrix: ");
        scanf("%d", &col1);

        printf("again enter rows for second matrix: ");
        scanf("%d", &row2);

        printf("again enter columns for second matrix: ");
        scanf("%d", col2);

    }

    printf("\nEnter elements for first matrix:\n");
    for (i=0; i<row1; i++)
    {
        for (j=0; j<col1; j++)
        {
            printf("first[%d][%d] = ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("\nEnter elements for second matrix:\n");
    for (i=0; i<row2; i++)
    {
        for (j=0; j<col2; j++)
        {
            printf("second[%d][%d] = ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    for (i=0; i<row1; i++)
    {
        for (j=0; j<col2; j++)
        {
            for (k=0; k<col1; k++)
            {
                sum = sum + first [i][k] * second [k][j];
            }
            result [i][j] = sum;
            sum = 0;
        }
    }

    printf("\nFirst Matrix:\n");
    for (i=0; i<row1; i++)
    {
        printf("\t");
        for (j=0; j<col1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for (i=0; i<row2; i++)
    {
        printf("\t");
        for (j=0; j<col2; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    printf("\nFirst Matrix * Second Matrix:\n");
    for (i=0; i<row1; i++)
    {
        printf("\t");
        for (j=0; j<col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
