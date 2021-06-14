/*
write a program that input two numbers and
display the series 1*2 + 2*3 + 3*4 + 4*5 + 5*6 + ....... using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int num1, num2, sum=0, a=1, b=2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("1*2 + 2*3 + 3*4 + 4*5 + ....... %d*%d = ", num1, num2);

    while (a<=num1 && b<=num2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 1;
    }

    printf("%d", sum);

    return 0;
}

