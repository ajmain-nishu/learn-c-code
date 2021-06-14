//write a program that input marks and prints result
#include <stdio.h>
int main ()
{
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);


    if (marks >= 80)
        printf("Your Result: A+");
    else if (marks >= 70)
        printf("Your Result: A");
    else if (marks >= 60)
        printf("Your Result: A-");
    else if (marks >= 50)
        printf("Your Result: B+");
    else if (marks >= 40)
        printf("Your Result: B");
    else if (marks >= 34)
        printf("Your Result: B-");
    else
        printf("Your Result is Fail");


    return 0;
}

