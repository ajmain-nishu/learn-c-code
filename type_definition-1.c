//write a program that change data type name using type definition
#include <stdio.h>

struct book
{
    char name [50];
    int price;
};


int main ()
{
    typedef struct book boi;

    boi b = {"C Programming", 730};

    printf("Book Name: %s\n",b.name);
    printf("Book Price: %d\n", b.price);


    return 0;
}
