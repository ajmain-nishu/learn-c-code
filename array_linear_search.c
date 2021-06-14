//write a program input a number that prints the value is found or nor using linear search array
#include <stdio.h>
int main ()
{
    int num[]={10, 0, 20, 15, 2, 40, 50}, position=-1, value, i;

    printf("Enter the value you want to search: ");
    scanf("%d", &value);

    for (i=0; i<7; i++)
    {
        if (value == num[i])
        {
            position = i+1;
            break;
        }
    }

    if (position == -1)
        printf("Item is not found");
    else
        printf("The value is found %d position", position);

    return 0;
}
