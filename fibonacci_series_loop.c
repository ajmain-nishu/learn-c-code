//write a program that input a number and prints fibonacci series using loop
#include <stdio.h>
int main ()
{
    int first=0, second=1, count=0, fibo, num;

    printf("Enter range: ");
    scanf("%d", &num);

    while (count < num)
    {
        if (count <=1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d ", fibo);
        count++;
    }

    return 0;
}
