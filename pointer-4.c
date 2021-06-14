//write a program that prints swapping values with function using pointer
#include <stdio.h>

void swapping (int *ptr1, int *ptr2)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
};

int main ()
{
    int x = 5, y = 10;

    printf("Before Swapping: x = %d, y = %d\n", x, y);

    swapping (&x, &y);

    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}
