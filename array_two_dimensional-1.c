//write a program that display row and column values using two dimensional array
#include <stdio.h>
int main ()
{
    int row, col;
    int array[3] [4] = { {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };

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
