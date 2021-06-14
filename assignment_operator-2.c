//write a program that prints a assignment operator
#include <stdio.h>
int main ()
{
    int a = 5, b = 5, c = 5;
    a *= 2;   // a = a * 2
    b /= 2;   // b = b / 2
    c %= 2;   // c = c % 2

    printf("assignment (*=) value is: %d\n", a);
    printf("assignment (/=) value is: %d\n", b);
    printf("assignment (%=) value is: %d", c);

    return 0;
}
