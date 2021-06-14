/*
write a program that input two numbers and
display the series 1*2*3*5 + 2*3*4*7 + 3*4*5*9 + 4*5*6*11 + 5*6*7*13 + ....... using multiplicative section
*/
#include <stdio.h>
int main ()
{
    int num1, num2, num3, num4, sum=0, a=1, b=2, c=3, d=5;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    printf("Enter fourth number: ");
    scanf("%d", &num4);

    printf("1*2*3*5 + 2*3*4*7 + 3*4*5*9 + 4*5*6*11 + ....... %d*%d*%d*%d = ", num1, num2,num3,num4);

    while (a<=num1 && b<=num2 && c<=num3 && d<=num4)
    {
        sum = sum + a*b*c*d;
        a = a + 1;
        b = b + 1;
        c = c + 1;
        d = d + 2;
    }

    printf("%d", sum);

    return 0;
}

