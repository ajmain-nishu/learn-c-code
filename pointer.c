//write a program that prints values using pointer
#include <stdio.h>
int main ()
{
    int x = 5;

    int *ptr;
    ptr = &x;

    printf("Value of X: %d\n", x);
    printf("Address of X: %d\n", &x);
    printf("Pointer of X: %d\n", ptr);
    printf("Value of Pointer: %d\n", *ptr);
    printf("Address of Pointer: %d\n", &ptr);

    return 0;
}
