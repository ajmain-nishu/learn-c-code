//write a program that input mark and print pass or fail
#include <stdio.h>
int main ()
{
    int mark;

    printf("Enter your marks: ");
    scanf("%d", &mark);

    if (mark>100 || mark <0)
        printf("Invalid mark");

    else if (mark > 33 && mark <= 100)
        printf("Pass");

    else
        printf("Fail");


    return 0 ;
}
