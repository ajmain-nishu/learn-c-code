//write a program that input three numbers and prints small number
#include <stdio.h>
int main ()
{
    float num1, num2, num3;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter third number: ");
    scanf("%f", &num3);


    if (num1<num2 && num1<num3)
        printf("Small Number: %.f", num1);

    else if (num2<num1 && num2<num3)
        printf("Small Number: %.f", num2);

    else if (num3<num1 && num3<num2)
        printf("Small Number: %.f", num3);

    else
        printf("Numbers are equal");

    return 0;
}

