//write a program that read characters using file
#include <stdio.h>
int main ()
{
    FILE *file;
    char name[20];

    file = fopen("text.txt", "r");

    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");

        fscanf(file,"%s",&name);
        printf("%s\n",name);
        fclose(file);
    }
    return 0;
}
