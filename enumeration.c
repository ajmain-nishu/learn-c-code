//write a program that prints values using enumeration
#include <stdio.h>

enum days_of_weeks
{
    Sun, Mon, Tue, Wed, Thu, Sat
};

int main ()
{
    enum days_of_weeks day1, day2;

    day1 = Sun;
    printf("Day1: %d\n", day1);

    day2 = Thu;
    printf("Day2: %d\n", day2);

    return 0;
}
