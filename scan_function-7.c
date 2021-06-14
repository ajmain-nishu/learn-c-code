/*
write a program that input integer number, floating number
and prints that all values
*/
#include <stdio.h>
int main ()
{
     int num1;
     float num2;

     printf("Enter integer and float numbers: ");
     scanf("%d %f", &num1, &num2);

     printf("Integer and float values are: %d %f", num1, num2);

    getch ();
}

