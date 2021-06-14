//write a program display goto statement
#include <stdio.h>
int main ()
{
    int a;

    a=1;

print:
    printf("%d\t", a);
    a++;

    if (a < 5)
        goto print;

    return 0;
}
