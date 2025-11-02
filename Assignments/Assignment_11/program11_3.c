/*
    Algorithm

    START
        Accept start and end numbers from the user as Start and End
        If start is greater than end then display invalid range message
        If any range is negative then display invalid message
        Otherwise
            Repeat from Start to End
                Display the current number
                Display the addition of all numbers
            End loop
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
//  Function Name   : RangeSum
//  Description     : It displays addition of all numbers between given range
//  Input           : int, int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int RangeSum(
                    int iStart,                                    // Input1
                    int iEnd                                       // Input2
                )
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0 || iEnd < 0))
    {
        printf("Invalid range\n");
        return 0;
    }
    

    if(iStart > iEnd)                                              
    {
        printf("Invalid range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)                       // Business logic
    {
        printf("%d\t", iCnt);
        iSum = iSum + iCnt;
    }

    
    return iSum;
}   // End of RangeSum

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;                                  // To accept range
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);                                // Function call

    printf("The Addition is %d", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 23 30
//  Output : The Addition is 212
//  
//  Input  : -10 2
//  Output : Invalid range
//
//  Input  : 90 18
//  Output : Invalid Range
//
/////////////////////////////////////////////////////////////////////
