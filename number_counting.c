//write a program that input numbers and prints under total number of digits
#include <stdio.h>
int main ()
{
    int num, count;

    printf("Enter any numbers: ");
    scanf("%d", &num);

    while (num !=0)
    {
        num = num / 10;
        ++count;
    }

    printf("Total Number of Digits: %d", count);

    return 0;
}
