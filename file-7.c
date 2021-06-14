//write a program that read characters using file
#include <stdio.h>
int main ()
{
    FILE *file;
    char ch [40];

    file = fopen("text.txt", "r");

    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");

        while (!feof(file))
        {
            fgets(ch, 39,file);
            printf("%s\n", ch);
        }
        fclose(file);
    }
    return 0;
}
