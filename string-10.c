//write a program that input character and display character length using string
#include <stdio.h>
#include <string.h>
int main ()
{
    char s1[1000];

    printf("Enter your name: ");
    gets(s1);

    int len = strlen(s1);

    printf("Length: %d\n", len);

    return 0;
}
