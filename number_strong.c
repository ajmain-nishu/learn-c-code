//write a program that input numbers and prints strong number or not
#include <stdio.h>
int main ()
{
    int num, temp, fact, rem, sum=0, i;

    printf("Enter any numbers: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;

        fact = 1;
        for (i=1; i<=rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum==num)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}

