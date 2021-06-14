//write a program that prints string using function
#include <stdio.h>
int main ()
{
    char str[] = "Nishu";
    display(str);
}

void display (char s1[])
{
    int i=0;
    while (s1[i] != '\0')
    {
        printf("%c", s1[i]);
        i++;
    }
}
