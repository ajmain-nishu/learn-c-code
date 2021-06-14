/*
write a program that input an operator and two values and
prints result
*/
#include <stdio.h>
int main ()
{
    float num1, num2;
    char op;

    printf("Choose an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter first value: ");
    scanf("%f", &num1);

    printf("Enter second value: ");
    scanf("%f", &num2);


    switch (op)
    {
    case '+' :
        {
            printf("%f + %f : %f\n", num1, num2, num1+num2);
            break;
        }

    case '-' :
        {
            printf("%f - %f : %f\n", num1, num2, num1-num2);
            break;
        }

    case '*' :
        {
            printf("%f * %f : %f\n", num1, num2, num1*num2);
            break;
        }

    case '/' :
        {
            printf("%f / %f : %f\n", num1, num2, num1/num2);
            break;
        }

    default:
        printf("Not a Valid Operator");

    }


    return 0;

}
