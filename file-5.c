//write a program that input characters and prints these characters using file
#include <stdio.h>
#include <string.h>
int main ()
{
    FILE *file;
    char name[100];
    int age;

    file = fopen("text.txt", "w");

    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file, "Name: %s, Age: %d\n",name, age);
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;
}
