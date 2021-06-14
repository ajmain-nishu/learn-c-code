//write a program that prints their summation using function
#include <stdio.h>

int sum (int a, int b)
{
    return a+b;
}


int main ()
{
    int result = sum(20, 10);

    printf("Sum 1 is: %d\n", result);

    result = sum(40, 10);

    printf("Sum 2 is: %d\n", result);
}
