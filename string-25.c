//write a program that input characters and display upper and lower using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[1000];

    printf("Enter any characters: ");
    gets(s1);

    strupr (s1);
    printf("\nUppercase: %s\n", s1);

    strlwr (s1);
    printf("\nLowercase: %s\n", s1);


    return 0;
}
