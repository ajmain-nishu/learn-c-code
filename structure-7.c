//write a program that prints equal or not using structure
#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main ()
{
    struct Person person1 = {21, 2122.50}, person2 = {25, 125750.50}, person3;

    person3 = person2;

    if (person1.age == person2.age && person1.salary == person2.salary)
        printf("Person1 equal Person2\n");
    else
        printf("Person1 is not equal Person2\n");

    return 0;
}
