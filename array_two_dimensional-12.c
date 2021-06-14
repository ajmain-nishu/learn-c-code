//write a program that input numbers and  prints sum of upper and lower triangle matrix using two dimensional array
#include <stdio.h>
int main ()
{
    int A[200][200], i, j, upperSum=0, lowerSum=0, n;

    printf("How many element you want: ");
    scanf("%d", &n);

    printf("\nEnter elements of the matrix:\n");
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

    printf("\nUpper Triangle Elements: ");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(i<j)
            {
                printf("%d  ", A[i][j]);
                upperSum = upperSum + A[i][j];
            }
        }
    }

    printf("\n");

    printf("\nLower Triangle Elements: ");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(i>j)
            {
                printf("%d  ", A[i][j]);
                lowerSum = lowerSum + A[i][j];
            }
        }
    }

    printf("\n");


    printf("\nSum Of Upper Triangle Elements: %d\n", upperSum);
    printf("\nSum Of Lower Triangle Elements: %d", lowerSum);


    getch ();
}
