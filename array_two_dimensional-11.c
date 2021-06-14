//write a program that input numbers and  prints sum of diagonal matrix using two dimensional array
#include <stdio.h>
int main ()
{
    int A[500][500], i, j, sum=0, n;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("\nOriginal Matrix:\n");
    for (i=0; i<n; i++)
    {
        printf("\t");
        for (j=0; j<n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Elements: ");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(i==j)
            {
                printf("%d  ", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    printf("\nSum Of Diagonal Elements: %d", sum);


    getch ();
}
