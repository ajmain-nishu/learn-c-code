//write a program that input values prints passing variable to function using structure
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[100];
    int age;
    float salary;
};

void display (struct Person p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %.2f\n", p.salary);
}

int main ()
{
    struct Person person1;

    strcpy(person1.name, "Ajmain Nishu");
    person1.age = 21;
    person1.salary = 15500.50;

    display (person1);


    return 0;
}
