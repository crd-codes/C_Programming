//////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>                           // For Input Output
#include<stdbool.h>                         // For bool datatype

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check even or odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Chakradhar Rawaji Dugade
//  Date :          10/10/2025
//
//////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

//////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even number", iValue);    }
    else
    {   printf("%d is Odd number", iValue);     }
    
    return 0;
}