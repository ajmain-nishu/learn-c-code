//write a program that input two numbers and prints their summation using function
#include <stdio.h>

int sum (int a, int b)
{
    return a+b;
}


int main ()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum is: %d\n", sum(num1, num2));
}
