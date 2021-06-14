//write a program that display two string  character concatenation using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[] = "My name is ";
    char s2[] = "Ajmain Nishu";

    strcat (s1, s2);

    printf("Concatenation: %s\n", s1);

    return 0;
}
