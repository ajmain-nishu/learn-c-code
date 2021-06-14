//write a program that prints their values using structure
#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main ()
{
    struct Person person1 = {21, 2122.50}, person2 = {25, 125750.50};

    printf("Person 1\n");
    printf("Age : %d\n", person1.age);
    printf("Salary : %.2f\n", person1.salary);


    printf("\nPerson 2\n");
    printf("Age : %d\n", person2.age);
    printf("Salary : %.2f\n", person2.salary);

    return 0;
}
