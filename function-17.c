//write a program that input a number and prints factorial recursion using function
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = fact (num);
    printf("Factorial of 5: %d", result);
}

int fact (int n)
{
    if (n == 1)
        return 1;
    else
        return n*fact(n-1);
}
