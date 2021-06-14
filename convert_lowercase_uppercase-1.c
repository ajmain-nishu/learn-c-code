//write a program that input any lowercase letter and print the uppercase letter with function
#include <stdio.h>
int main ()
{
    char lower,upper ;

    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower);

    printf("The uppercase letter is: %c", upper);

    getch ();
}

