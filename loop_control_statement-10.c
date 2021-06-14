//write a program that display odd numbers using for loop
#include <stdio.h>
int main ()
{
    int a;

    printf("Enter a number under 50: ");
    scanf("%d", &a);

    for (a; a<=50; a=a+2)
        printf("%d\n", a);

    return 0;
}

