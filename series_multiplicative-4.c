/*
write a program that input a number and
display the series 1/1 + 1/2 + 1/3 + 1/4 + ........  using multiplicative section
*/
#include <stdio.h>
int main ()
{
    double n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%lf", &n);

    for (i=1; i<=n; i++)
    {
        sum = sum + (1/i);

        if (i==1)
            printf("1 + ");
        else if (i==n)
            printf("(1/%.lf)", i);
        else
            printf("(1/%.lf) + ", i);
    }

    printf(" = %lf", sum);


    return 0;
}
