/*
write a program that input integer number, floating number, double number
and prints that all values
*/
#include <stdio.h>
int main ()
{
     int num1;
     float num2;
     double num3;

     printf("Enter integer number: ");
     scanf("%d", &num1);

     printf("Enter floating number: ");
     scanf("%f", &num2);

     printf("Enter double number: ");
     scanf("%lf", &num3);

     printf("Integer value is: %d\n", num1);
     printf("Float value is: %.3f\n", num2);
     printf("Double value is: %.8lf", num3);

    getch ();
}
