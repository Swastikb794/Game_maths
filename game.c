#include <stdio.h>

int main()
{
    char numberString[6];
    int digits[5];

    printf("Enter a 5-digit number between 1 and 7 : ");
    scanf("%5s", numberString);

    for (int i = 0; i < 5; i++)
    {
        digits[i] = numberString[i] - '0';
    }

    printf("Your Number is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", digits[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        digits[i] += 2;
    }

    printf("The Magical answer for your number is : 2");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", digits[i]);
    }
    printf("\nRemember your magical number!!!!\n");

    char numberString2[6];
    char numberString3[6];
    int digits3[5];
    int digits2[5];

    printf("Enter your 2nd 5-digit number: ");
    scanf("%5s", numberString2);

    for (int i = 0; i < 5; i++)
    {
        digits2[i] = numberString2[i] - '0';
    }

    for (int i = 0; i < 5; i++)
    {
        digits3[i] = 10 - digits2[i];
    }

    printf("Your 3rd 5-digit number is : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", digits3[i]);
    }
    printf("\n");

    char numberString4[6];
    char numberString5[6];
    int digits4[5];
    int digits5[5];

    printf("Enter your 4th 5-digit number: ");
    scanf("%5s", numberString4);

    for (int i = 0; i < 5; i++)
    {
        digits4[i] = numberString4[i] - '0';
    }

    for (int i = 0; i < 5; i++)
    {
        digits5[i] = 10 - digits4[i];
    }

    printf("Your 5th 5-digit number is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", digits5[i]);
    }
    printf("\n");

    printf("Magic is that the magical number that i gave is same as the sum of all the five 5digit numbers : Check yourself\n");

    return 0;
}
