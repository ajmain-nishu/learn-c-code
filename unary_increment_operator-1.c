//write a program that prints a unary postfix increment operator
#include <stdio.h>
int main ()
{
    int x = 6 ;
    int y = x++;

    printf("Unary postfix increment x value is: %d\n", x);
    printf("Unary postfix increment y value is: %d", y);

    return 0;
}
