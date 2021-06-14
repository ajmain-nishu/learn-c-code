//write a program that input multiple numbers and prints under all the armstrong numbers
#include <stdio.h>
int main ()
{
    int initialnum, finalnum, temp, rem, i, sum=0;

    printf("Enter initial number: ");
    scanf("%d", &initialnum);

    printf("Enter final number: ");
    scanf("%d", &finalnum);



    for (i=initialnum; i<finalnum; i++)
    {
        temp = i;

        while (temp !=0)
        {
            rem = temp % 10;
            sum = sum + rem * rem *rem ;
            temp = temp / 10;
        }

        if (sum == i)
        {

            printf("%d\n", i);
        }

        sum = 0;

    }

    return 0;
}
