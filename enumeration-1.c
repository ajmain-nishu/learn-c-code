//write a program that prints difference values using enumeration
#include <stdio.h>

enum days_of_weeks
{
    Sun, Mon, Tue, Wed, Thu, Sat
};

int main ()
{
    enum days_of_weeks day1, day2;

    day1 = Sun;
    day2 = Thu;

    int diff = Sun-Thu;
    printf("Day Difference: %d\n", diff);

    return 0;
}
