//write a program that input octal number and prints decimal number
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter any octal number: ");
    scanf("%o", &num);

    printf("The decimal number is: %d", num);

    getch ();
}

