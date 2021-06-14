//write a program that input numbers and display matrix using array
#include <stdio.h>
int main ()
{
    int row, col, A[3] [4];

    printf("Enter matrix numbers:\n");

    for (row=0; row<3; row++)
    {
        for (col=0; col<4; col++)
        {
            printf("A[%d][%d] = ", row, col);
            scanf("%d", &A[row] [col]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix Result:\n");

    for (row=0; row<3; row++)
    {
        printf("\t");
        for (col=0; col<4; col++)
        {
            printf("%d ", A[row] [col]);
        }
        printf("\n");
    }

    return 0;
}
