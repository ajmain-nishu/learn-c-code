//write a program and print the size of integer, float, double, character values
#include <stdio.h>
int main ()
{
     int i;
     float f;
     double d;
     char c;

     printf("The integer value size: %d bytes\n", sizeof(i));
     printf("The float value size: %d bytes\n", sizeof(f));
     printf("The double value size: %d bytes\n", sizeof(d));
     printf("The character value size: %d bytes", sizeof(c));

    getch ();
}

