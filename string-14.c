//write a program that input character display duplicate character using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char source[1000];
    char target[1000];

    printf("Enter your name: ");
    gets(source);

    strcpy (target, source);

    printf("\nOriginal: %s\n", source);
    printf("\nDuplicate: %s\n", target);

    return 0;
}
