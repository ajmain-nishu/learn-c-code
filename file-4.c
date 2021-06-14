//write a program that input characters and prints these characters using file
#include <stdio.h>
int main ()
{
    FILE *file;
    char name[100];

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

        fputs(name,file);
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;
}
