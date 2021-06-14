//write a program that input values and write these values using file
#include <stdio.h>
int main ()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,num,i;

    file = fopen("student.txt","a");

    if (file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened\n");

        printf("How many students you want: ");
        scanf("%d",&num);

        for (i=1; i<=num; i++)
        {
            printf("Enter student name: ");
            scanf("%s", &name);

            printf("Enter student age: ");
            scanf("%d", &age);

            printf("Enter student phone number: ");
            scanf("%d", &phoneNumber);

            fprintf(file,"\n%s\t\t%d\t%d\n", name, age, phoneNumber);
        }

        fclose(file);
    }

    return 0;
}
