//write a program that input decimal number and prints octal number
#include <stdio.h>
int main ()
{
    int num;

    printf("Enter any decimal number: ");
    scanf("%d", &num);

    printf("The octal number is: %o", num);

    getch ();
}

