//write a program that input floating number and prints the value
#include <stdio.h>
int main ()
{
    float num;

    printf("Enter an floating value: ");

    scanf("%f", &num);

    printf("The value is : %.4f", num);

    getch ();
}

