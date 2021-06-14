//write a program that input a single digit and display it's spelling
#include <stdio.h>
int main ()
{
    int digit;

    printf("Enter a single digit: ");
    scanf("%d", &digit);


    switch (digit)
    {
    case 0:
        printf("It's spelling is: Zero\n");
        break;

    case 1:
        printf("It's spelling is: One\n");
        break;

    case 2:
        printf("It's spelling is: Two\n");
        break;

    case 3:
        printf("It's spelling is: Three\n");
        break;

    case 4:
        printf("It's spelling is: Four\n");
        break;

    case 5:
        printf("It's spelling is: Five\n");
        break;

    case 6:
        printf("It's spelling is: Six\n");
        break;

    case 7:
        printf("It's spelling is: Seven\n");
        break;

    case 8:
        printf("It's spelling is: Eight\n");
        break;

    case 9:
        printf("It's spelling is: Night\n");
        break;

    default:
        printf("Not a Single Digit");
    }

}
