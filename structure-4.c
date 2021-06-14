//write a program that input values and prints their values using structure
#include <stdio.h>

struct Person
{
    int age;
    float salary;
};



int main ()
{
    struct Person person1, person2;

    printf("Enter information of person 1\n");

    printf("Age: ");
    scanf("%d", &person1.age);

    printf("Salary: ");
    scanf("%f", &person1.salary);

    printf("\nPerson 1\n");
    printf("Age : %d\n", person1.age);
    printf("Salary : %.2f\n", person1.salary);

    printf("\n\nEnter information of person 2\n");

    printf("Age: ");
    scanf("%d", &person2.age);

    printf("Salary: ");
    scanf("%f", &person2.salary);

    printf("\nPerson 2\n");
    printf("Age : %d\n", person2.age);
    printf("Salary : %.2f\n", person2.salary);

    return 0;
}
