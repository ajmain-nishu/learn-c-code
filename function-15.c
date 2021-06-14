//write a program that prints maximum value using function
#include <stdio.h>
int main ()
{
    int value, num[] = {10, 20, 30, 40, 50};
    value = maximum (num);
    printf("Maximum: %d\n", value);
}

int maximum (int x[])
{
    int i, max=x[i];
    for (i=1; i<5; i++)
    {
        if (max<x[i])
            max = x[i];
    }
    return max;
}
