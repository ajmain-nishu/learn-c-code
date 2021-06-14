//write a program that input characters and display two string character equal or not using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[1000], s2[1000];

    printf("Enter any string characters: ");
    gets(s1);

    printf("Enter another any string characters: ");
    gets(s2);

    int n = strcmp (s1, s2);

    if (n==0)
        printf("\nStrings are equal\n");
    else
        printf("\nStrings are not equal\n");

    return 0;
}
