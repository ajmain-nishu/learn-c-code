/*
write a program that input a number and
display the series (even-odd) using parallel section
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

    printf("Result (Even - Odd) = %d", even-odd);

    return 0;
}
