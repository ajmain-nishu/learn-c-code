//write a program that input characters and display character length using string
#include <stdio.h>
int main ()
{
    char s1[1000];

    printf("Enter your name: ");
    gets(s1);

    int i=0, len=0;

    while (s1[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length: %d\n", len);

    return 0;
}
