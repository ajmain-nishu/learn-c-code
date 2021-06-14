//write a program that create or overright a file using file
#include <stdio.h>
int main ()
{
    FILE *file;

    file = fopen("text.txt", "w");

    if (file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened");
        fclose(file);
    }
    return 0;
}
