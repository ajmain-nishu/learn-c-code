//write a program that input any ascii character and prints the ascii value
#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter ascii character: ");
    scanf("%c", &ch);

    printf("The ascii value is: %d", ch);

    getch ();
}

