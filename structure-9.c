//write a program that input values prints values with array using structure
#include <stdio.h>

struct Person
{
    char name[100];
    int age;
    float salary;
};

int main ()
{
    struct Person person [4];
    int i;

    for (i=0; i<4; i++)
    {
        printf("\nEnter information of person %d\n", i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);
        printf("Enter Salary: ");
        scanf("%f", &person[i].salary);
    }

    for (i=0; i<4; i++)
    {
        printf("\n\nInformation of Person %d\n", i+1);
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %f\n", person[i].salary);
    }


    return 0;
}
