//write a program that input a integer number and prints even or odd
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even");
    if (num % 2 != 0)
        printf("Odd");

    return 0;
}
