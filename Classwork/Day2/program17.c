#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number", iValue);
    }
    else
    {
        printf("%d is Odd number", iValue);
    }

    
    return 0;
}