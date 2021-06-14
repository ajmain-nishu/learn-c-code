//write a program that prints their summation and subtraction using function
#include <stdio.h>

void sum (int a, int b, int c)
{
    printf("Summation is: %d\n", a+b+c);
}

void sub (int a, int b)
{
    printf("Subtraction is: %d\n", a-b);
}


int main ()
{

    sum (10, 20, 30);

    sub (20, 5);
}
