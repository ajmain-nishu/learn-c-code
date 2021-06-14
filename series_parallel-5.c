//write a program that input a number and display the series  2 + 4 + 6 + 8 + ....... using parallel section
#include <stdio.h>
int main ()
{
    int n, a=2, sum=0;

    printf("Enter the last number of the series: ");
    scanf("%d", &n);

    printf("2 + 4 + 6 + ....... + %d", n);
    while (a<=n)
    {
        sum = sum + a;
        a=a+2;
    }

    printf(" = %d", sum);

    return 0;
}
