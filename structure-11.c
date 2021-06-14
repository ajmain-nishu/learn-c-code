//write a program that prints size using structure
#include <stdio.h>

struct text1
{
    int x,y;
};

struct text2
{
    char ch;
    int x;
};

struct text3
{
    char name [20];
    double d;
};

int main ()
{
    struct text1 t1;
    struct text2 t2;
    struct text3 t3;

    printf("Size of text1 : %d\n",sizeof(t1));
    printf("Size of text2 : %d\n",sizeof(t2));
    printf("Size of text3 : %d\n",sizeof(t3));


    return 0;
}
