//write a program that input multiple numbers and prints reverse number
#include <stdio.h>
int main ()
{
   int num, temp, rem, sum=0;

   printf("Enter multiple numbers: ");
   scanf("%d", &num);

   temp = num;

   while (temp !=0)
   {
       rem = temp % 10;
       sum = sum*10 + rem;
       temp = temp / 10;
   }

   printf("Reverse of Number is: %d", sum);

    return 0;
}

