/*
    Algorithm

    START
        Accept number from user as no
        If the input is negative
            Convert it to positive
        Initialize factorial as 1
        Take one counter iCnt
        Repeat from 1 to no
            If counter is even
            Multiply evenfact by counter
            Otherwise
            Multiply oddfact by counter
        End loop
        Calculate difference and display
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
//  Function Name   : FactorialDiff  
//  Description     : It is used to calculate difference between even factorial and odd factorial of given number
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)                                         // Input
{
    int iCnt = 0;
    int iEvenFact = 1;               
    int iOddFact = 1;

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                              
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                             // Business logic
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}   // End of FactorialDiff

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input
    int iRet = 0;                                                  // To store result

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);                                  // Function call

    printf("Factorial Difference is %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output : Factorial Difference is -7
//  Input : -5      Output : Factorial Difference is -7
//  Input : 10      Output : Factorial Difference is 2895
//  
/////////////////////////////////////////////////////////////////////
