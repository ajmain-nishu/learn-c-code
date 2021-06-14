//write a program that input a number and display the series  1 + 3 + 5 + 7 + 9 + ...... using parallel section
#include <stdio.h>
int main ()
{
    int n, a=1, sum=0;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    printf("1 + 3 + 5 + ....... + %d", n);
    while (a<=n)
    {
        sum = sum + a;
        a=a+2;
    }

    printf(" = %d", sum);

    return 0;
}
