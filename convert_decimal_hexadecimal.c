//write a program that input decimal value and prints hexadecimal value
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter any decimal number: ");
    scanf("%d", &num);

    printf("The hexadecimal number is: %x", num);

    getch ();
}
