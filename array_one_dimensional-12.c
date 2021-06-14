//write a program that display copy all element of an array to another array using one dimensional array
#include <stdio.h>
int main ()
{
    int array1[5]={10, 20, 30, 40, 50}, array2[5], i;

    printf("Array 1: ");

    for (i=0; i<5; i++)
    {
        printf("%d ", array1[i]);
    }

    for (i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nArray 2: ");

    for (i=0; i<5; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}
