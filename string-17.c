//write a program that input characters and display two string  character concatenation using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[100], s2[100];

    printf("Enter your first name: ");
    gets(s1);

    printf("Enter your last name: ");
    gets(s2);

    strcat (s1, s2);

    printf("Concatenation: %s\n", s1);

    return 0;
}
