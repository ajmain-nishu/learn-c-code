//write a program that prints their summation using function
#include <stdio.h>

int sum (int a, int b, int c)
{
    return a+b+c;
}


int main ()
{

    printf("Sum 1 is: %d\n", sum(10, 20, 40));

    printf("Sum 2 is: %d\n", sum(10, 40, 5));
}
