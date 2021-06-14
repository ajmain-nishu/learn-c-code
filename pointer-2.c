//write a program that prints summation using pointer
#include <stdio.h>
int main ()
{
    int x = 5, y = 10, sum;

    int *ptr1 , *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;

    printf("Summation : %d\n", sum);

    return 0;
}
