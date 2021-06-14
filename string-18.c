//write a program that input characters and display two string character concatenation using string
#include <stdio.h>
int main ()
{
    char s1[1000], s2[1000];

    printf("Enter your first name: ");
    gets(s1);

    printf("Enter your last name: ");
    gets(s2);

    int i=0, j=0, len=0;

    while (s1[i] != '\0')
    {
        i++;
        len++;
    }

    while (s2[j] != '\0')
    {
        s1[len+j] = s2[j];
        j++;
    }

    printf("\nConcatenation: %s\n", s1);

    return 0;
}
