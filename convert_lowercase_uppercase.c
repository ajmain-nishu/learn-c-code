//write a program that input any lowercase letter and print the uppercase letter without function
#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter any lowercase letter: ");
    scanf("%c", &ch);

    printf("The uppercase letter is: %c", ch-32);

    getch ();
}
