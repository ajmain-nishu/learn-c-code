//write a program that input octal value and prints hexadecimal value
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter any octal number: ");
    scanf("%o", &num);

    printf("The hexadecimal number is: %x", num);

    getch ();
}

