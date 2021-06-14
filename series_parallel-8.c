/*
write a program that input a number and
display the series (odd-even) using parallel section
*/
#include <stdio.h>
int main ()
{
    int num, i, even=0, odd=0;

    printf("Enter a number: ");
    scanf("%d", &num);



    for (i=1; i<=num; i++)
    {
        if (i%2==0)
            even = even + i;
        else
            odd = odd + i;
    }

    printf("Result (Odd - Even) = %d", odd-even);

    return 0;
}
