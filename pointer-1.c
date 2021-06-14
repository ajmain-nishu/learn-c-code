//write a program that prints values using pointer
#include <stdio.h>
int main ()
{
    int x = 5, y = 10, z = 20;

    int *ptr;
    ptr = &x;

    printf("X : %d\n", *ptr);

    ptr = &y;
    printf("X : %d\n", *ptr);

    ptr = &z;
    printf("X : %d\n", *ptr);

    return 0;
}
