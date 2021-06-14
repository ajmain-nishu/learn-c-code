//write a program that write new line and added old line using file
#include <stdio.h>
#include <string.h>
int main ()
{
    FILE *file;
    char name[20] = "Ajmain Nishu";
    int length = strlen (name);
    int i;

    file = fopen("text.txt", "a");   //a = apand new thing

    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");
        for (i=0; i<length; i++)
        {
            fputc(name[i], file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }
    return 0;
}
