/*
write a program that input two numbers and
display the series 1*3 + 2*5 + 3*7 + 4*9 + 5*11 + ....... using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int num1, num2, sum=0, a=1, b=3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("1*3 + 2*5 + 3*7 + ....... %d*%d = ", num1, num2);

    while (a<=num1 && b<=num2)
    {
        sum = sum + a*b;
        a = a + 1;
        b = b + 2;
    }

    printf("%d", sum);

    return 0;
}
