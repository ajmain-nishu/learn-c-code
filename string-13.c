//write a program that display duplicate character using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char source[] = "C Programming";
    char target[20];

    strcpy (target, source);

    printf("Original: %s\n", source);
    printf("Duplicate: %s\n", target);

    return 0;
}
