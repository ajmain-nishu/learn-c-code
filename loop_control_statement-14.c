/*
write a program that input two numbers and
prints greatest common divisor and least common multiple
*/
#include <stdio.h>
int main ()
{
    int num1, num2, n1, n2, gcd, lcm, rem;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    n1 = num1;
    n2 = num2;

    while (n2 !=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    gcd = n1;
    lcm = (num1 * num2) / gcd ;

    printf("Greatest Common Divisor(GCD): %d\n", gcd);
    printf("Least Common Multiple(LCM): %d", lcm);

    return 0;
}
