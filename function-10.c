//write a program that input an integer number and prints their square using function
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    int square = value(num);

    printf("Square is: %d\n", square);
}

int value (int num)
{
    return num*num;
}
