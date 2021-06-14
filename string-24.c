//write a program that input characters and display swapping using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[1000], s2[1000], temp[1000];

    printf("Enter first any letter: ");
    gets(s1);

    printf("Enter second any letter: ");
    gets(s2);

    printf("\n\n");

    printf("Before Swapping:\n");
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);

    printf("\n\n");

    strcpy (temp, s1);
    strcpy (s1, s2);
    strcpy (s2, temp);

    printf("After Swapping:\n");
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);


    return 0;
}
