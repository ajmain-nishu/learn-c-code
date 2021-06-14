//write a program that input multiple numbers and prints armstrong or not
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
       sum = sum + rem * rem * rem;
       temp = temp / 10;
   }

   if (num == sum)
    printf("Armstrong Number");

   else
    printf("Not Armstrong Number");


    return 0;
}

