/*
    Algorithm

    START
        Accept number from user as no
        If the input is negative
            Convert it to positive
        Initialize factorial as 1
        Take one counter iCnt
        Repeat from 1 to no
            Multiply factorial by counter
        End loop
        Display the factorial
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : Factorial  
//  Description     : It is used to calculate factorial of given number
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int Factorial(int iNo)                                           // Input
{
    int iCnt = 0;
    int iFact = 1;                                               // To store factorial result

    if(iNo < 0)                                                  // Updater
    {
        iNo = -iNo;                                              
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                           // Business logic
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}   // End of Factorial

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                              // To accept user input
    int iRet = 0;                                                // To store result

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);                                    // Function call

    printf("%d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output : 120
//  Input : 4       Output : 24
//  Input : 0       Output : 1
//  Input : -3      Output : 6
//  
/////////////////////////////////////////////////////////////////////
