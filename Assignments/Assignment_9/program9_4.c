/*
    Algorithm

    START
        Accept number from user as no
        If the input is negative
            Convert it to positive
        Initialize factorial as 1
        Take one counter iCnt
        Repeat from 1 to no
            If counter is odd
            Multiply factorial by counter
        End loop
        Display the Odd factorial
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
//  Function Name   : OddFactorial  
//  Description     : It is used to calculate odd factorial of given number
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)                                         // Input
{
    int iCnt = 0;
    int iFact = 1;                                                 // To store factorial result

    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;                                              
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                             // Business logic
    {
        if(iCnt % 2 != 0)
        {
          iFact = iFact * iCnt;
        }
    }

    return iFact;
}   // End of OddFactorial

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

    iRet = OddFactorial(iValue);                                  // Function call

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output : Odd Factorial of number is 15
//  Input : -5      Output : Odd Factorial of number is 15
//  Input : 10      Output : Odd Factorial of number is 945
//  
/////////////////////////////////////////////////////////////////////
