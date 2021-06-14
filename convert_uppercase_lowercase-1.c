//write a program that input any uppercase letter and print the lowercase letter with function
#include <stdio.h>
int main ()
{
    char upper, lower;

    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper);

    printf("The lowercase letter is: %c", lower);

    getch ();
}

