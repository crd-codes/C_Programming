/*
    START 
        Accept number store as no
        Divide no by 2
        If the remainder is 0
            then display as even
        Otherwise 
            Display as odd
    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}