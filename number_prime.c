//write a program that input a positive number and prints prime or not
#include <stdio.h>
int main ()
{
    int num, i, count=0;

    printf("Enter any positive number: ");
    scanf("%d", &num);

    for (i=2; i<num; i++)
    {
        if(num%i==0)
            count++;
            break;
    }
    if (count==0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
