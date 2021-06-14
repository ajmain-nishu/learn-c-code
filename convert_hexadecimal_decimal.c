//write a program that input hexadecimal value and prints decimal value
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter any hexadecimal number: ");
    scanf("%x", &num);

    printf("The decimal number is: %d", num);

    getch ();
}
