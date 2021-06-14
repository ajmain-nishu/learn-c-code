//write a program that input numbers and display A and B matrix using two dimensional array
#include <stdio.h>
int main ()
{
    int row, col, A[3] [4], B[3] [4];

    printf("Enter A matrix numbers:\n");

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
    printf("A Matrix Result:\n");

    for (row=0; row<3; row++)
    {
        printf("\t");
        for (col=0; col<4; col++)
        {
            printf("%d ", A[row] [col]);
        }
        printf("\n");
    }



    printf("\n\n\n");




    printf("Enter B matrix numbers:\n");

    for (row=0; row<3; row++)
    {
        for (col=0; col<4; col++)
        {
            printf("A[%d][%d] = ", row, col);
            scanf("%d", &B[row] [col]);
        }
        printf("\n");
    }

    printf("\n");
    printf("B Matrix Result:\n");

    for (row=0; row<3; row++)
    {
        printf("\t");
        for (col=0; col<4; col++)
        {
            printf("%d ", B[row] [col]);
        }
        printf("\n");
    }

    return 0;
}
