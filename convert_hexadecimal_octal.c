//write a program that input hexadecimal value and prints octal value
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter any hexadecimal number: ");
    scanf("%x", &num);

    printf("The octal number is: %o", num);

    getch ();
}

