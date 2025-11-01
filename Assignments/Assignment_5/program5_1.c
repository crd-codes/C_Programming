/*
    Algorithm

    START
        Accept number as no
        Divide no by 2
        If the remainder is 0 then the number is Even
        Otherwise the number is Odd
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
//  Function Name   : ChkEvenOdd  
//  Description     : It is used to check whether the number is even or odd
//  Input           : int
//  Output          : bool
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

bool ChkEvenOdd(int iNo)                                    // Input
{
    if(iNo % 2 == 0)                                        // Business logic                                                
    {
        return true;
    }
    else
    {
        return false;
    }
}   // End of ChkEvenOdd

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                         // To Accept input
    bool bRet = false;                                      // To store result

    printf("Enter a number");
    scanf("%d", &iValue);

    bRet = ChkEvenOdd(iValue);                              // Function Call

    if(bRet == true)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10      Output : The number is even
//  Input2 : 13      Output : The number is odd
//  Input3 : -11     Output : The number is odd
//  Input4 : -4      Output : The number is even
//   
/////////////////////////////////////////////////////////////////////
