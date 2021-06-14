//write a program that input multiple numbers and prints sum of digits
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
       sum = sum + rem;
       temp = temp / 10;
   }

   printf("Sum Of Digits: %d", sum);

    return 0;
}
