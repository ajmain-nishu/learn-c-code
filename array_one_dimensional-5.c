//write a program that prints their sum using one dimensional array
#include <stdio.h>
int main ()
{
    int num[5], i, sum=0;

    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    for (i=0; i<5; i++)
    {
        sum = sum + num[i];
    }
    printf("The Sum is: %d\n", sum);

    return 0;
}
