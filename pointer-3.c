//write a program that prints swapping values using pointer
#include <stdio.h>
int main ()
{
    int x = 5, y = 10, temp;

    int *ptr1 , *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    printf("Original Values:\n");
    printf("X: %d\n", *ptr1);
    printf("Y: %d\n", *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("\nSwapping Values:\n");
    printf("X: %d\n", *ptr1);
    printf("Y: %d\n", *ptr2);

    return 0;
}
