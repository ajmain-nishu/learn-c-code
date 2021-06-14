//write a program that input characters and display reverse using string
#include <stdio.h>
int main ()
{
    char s1[1000], s2[1000];

    printf("Enter any string characters: ");
    gets(s1);

    int i=0, j, len=0;

    while (s1[i] != '\0')
    {
        i++;
        len++;
    }

    for (j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j] = s1[i];
    }
    s2[j] = '\0';

    printf("\nReverse: %s\n", s2);

    return 0;
}
