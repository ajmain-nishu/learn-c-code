//write a program that input any ascii value and prints the ascii character
#include <stdio.h>
int main ()
{
    int n;

    printf("Enter ascii value: ");
    scanf("%d", &n);

    printf("The ascii character is: %c", n);

    getch ();
}
