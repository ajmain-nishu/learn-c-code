//write a program that prints size using union
#include <stdio.h>

union text1
{
    int x,y;
};

union text2
{
    char ch;
    int x;
};

union text3
{
    char name [20];
    double d;
};

int main ()
{
    union text1 t1;
    union text2 t2;
    union text3 t3;

    printf("Size of text1 : %d\n",sizeof(t1));
    printf("Size of text2 : %d\n",sizeof(t2));
    printf("Size of text3 : %d\n",sizeof(t3));


    return 0;
}
