//write a program that input characters and display original and reverse using string
#include <stdio.h>
int main ()
{
    char s1[1000];

    printf("Enter any string characters: ");
    gets(s1);
    printf("\nOriginal: %s\n", s1);

    strrev (s1);

    printf("\nReverse: %s\n", s1);

    return 0;
}
