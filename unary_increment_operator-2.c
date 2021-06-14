//write a program that input a number and prints unary prefix and postfix increment operator
#include <stdio.h>
int main ()
{
    int a ;

    printf("Enter a number: ");
    scanf("%d", &a);

    int b = a ;

    int c = ++b;
    int d = b++;

    printf("Unary prefix increment (++%d) value is: %d\n",a, c);
    printf("Unary postfix increment (%d++) first value is: %d\n",a, d);
    printf("Unary postfix increment (%d++) second value is: %d\n",a, b);

    return 0;
}
