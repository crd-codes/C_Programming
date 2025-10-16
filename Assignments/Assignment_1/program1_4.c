/*
    Algorithm

    START
        Accept number as no
        If the input is negative then convert it into positive
        Check number is Divisible by 5
        Display the Result
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckDivisibleBy5  
//  Description     : It is used to check given number is divisible by 5 or not
//  Input           : int
//  Output          : bool
//  Author          : CR
//  Date            : 16/10/2025
//
/////////////////////////////////////////////////////////////////////

bool CheckDivisibleBy5(int iNo)                     // Input
{
    if(iNo < 0)                                     // Updater
    {
        iNo = -iNo;
    }
    if((iNo % 5) == 0)                              // Business logic
    {
        return true;
    }
    else 
    {
        return false;
    }
}   // End of CheckDivisibleBy5

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // To accept user input
    bool bRet = false;                              // To store result

    printf("Enter your number :");
    scanf("%d",&iValue);

    bRet = CheckDivisibleBy5(iValue);               // Function call

    if(bRet == true)
    {
        printf("It is divisible by 5\n");
    }
    else
    {
        printf("It is not divisible by 5\n");
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10      Output : It is divisible by 5
//  Input1 : 13      Output : It is not divisible by 5
//  Input1 : -13     Output : It is not divisible by 5
//  Input1 : -10     Output : It is divisible by 5
//   
/////////////////////////////////////////////////////////////////////
