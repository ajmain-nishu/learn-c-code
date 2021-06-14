//write a program that input any uppercase letter and print the lowercase letter without function
#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter any uppercase letter: ");
    scanf("%c", &ch);

    printf("The lowercase letter is: %c", ch+32);

    getch ();
}
