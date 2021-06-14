//write a program that display character using string
#include <stdio.h>
int main ()
{
    char s1[]= "Nishu";

    int i = 0;

    while (s1[i] != '\0')
    {
        printf("%c\n", s1[i]);
        i++;
    }

    return 0;
}
