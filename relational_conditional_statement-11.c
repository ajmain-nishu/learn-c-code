//write a program that input a letter and prints vowel or consonant
#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if(ch == 'a')
        printf("Vowel");
    else if(ch == 'A')
        printf("Vowel");

    else if (ch == 'e')
        printf("Vowel");
    else if (ch == 'E')
        printf("Vowel");

    else if (ch == 'i')
        printf("Vowel");
    else if (ch == 'I')
        printf("Vowel");

    else if (ch == 'o')
        printf("Vowel");
    else if (ch == 'O')
        printf("Vowel");

    else if (ch == 'u')
        printf("Vowel");
    else if (ch == 'U')
        printf("Vowel");

    else
        printf("Consonant");

    return 0;
}

