/*
write a program that input numbers and
display copy all element of an array to another array using one dimensional array
*/
#include <stdio.h>
int main ()
{
    int num, array1[100], array2[100], i;

    printf("How many numbers you want: ");
    scanf("%d", &num);

    printf("Please input the numbers: ");
    for (i=0; i<num; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Array 1: ");

    for (i=0; i<num; i++)
    {
        printf("%d ", array1[i]);
    }

    for (i=0; i<num; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nArray 2: ");

    for (i=0; i<num; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}
