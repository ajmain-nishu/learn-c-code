/*
write a program that input characters and
display vowel, consonant, capital, small, digit, word and others using string
*/
#include <stdio.h>
int main ()
{
    char s1[1000],ch;
    int i, vowel, consonant, capital, small, digit, word, other;

    printf("Enter any string characters: ");
    gets(s1);

    i=vowel=consonant=capital=small=digit=word=other=0;

    while ((ch=s1[i]) != '\0')
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            consonant++;

        if (ch >= 65 && ch <= 90)
            capital++;

        if (ch >= 97 && ch <= 122)
            small++;

        else if (ch >= '0' && ch <= '9')
            digit++;

        else if (ch==' ')
            word++;

        else
            other++;

        i++;
    }
    word++;

    printf("\n\n");

    printf("Number of Vowels: %d\n", vowel);
    printf("Number of Consonants: %d\n", consonant);
    printf("Number of Capital Letters: %d\n", capital);
    printf("Number of Small Letters: %d\n", small);
    printf("Number of Digits: %d\n", digit);
    printf("Number of Words: %d\n", word);
    printf("Number of Others: %d\n", other);


    return 0;
}
