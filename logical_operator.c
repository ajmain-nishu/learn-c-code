//write a program that input a letter and prints vowel or consonant
#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        printf("Vowel");

    else
        printf("Consonant");

    return 0;
}
