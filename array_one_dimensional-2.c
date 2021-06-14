//write a program that prints their summation using one dimensional array
#include <stdio.h>
int main ()
{
    int num[5],sum;

    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

   sum = num[0] + num[1] + num[2] + num[3] + num[4];

   printf("The Sum is: %d\n", sum);

    return 0;
}
