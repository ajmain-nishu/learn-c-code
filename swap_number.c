//write a program that prints swap two numbers with temp variable
#include <stdio.h>
int main ()
{
    int num1 = 5;
    int num2 = 10;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 is: %d\n", num1);
    printf("num2 is: %d", num2);

    return 0;
}

