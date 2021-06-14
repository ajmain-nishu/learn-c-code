//write a program that change data type name using type definiton
#include <stdio.h>
int main ()
{
    typedef char Letter;

    Letter ch,ch1;

    ch = 'N';

    printf("ch: %c\n", ch);

    ch1 = 'R';

    printf("ch: %c\n", ch1);

    return 0;
}
