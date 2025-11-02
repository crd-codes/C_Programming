/*
    Algorithm

    START
        Accept start and end numbers from the user as Start and End
        If start is greater than end, then display invalid range message
        Otherwise
            Repeat from Start to End
                Display the current number
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
//  Function Name   : RangeDisplay
//  Description     : It displays all numbers between given range
//  Input           : int, int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

void RangeDisplay(
                    int iStart,                                    // Input1
                    int iEnd                                       // Input2
                )
{
    int iCnt = 0;

    if(iStart > iEnd)                                              
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)                       // Business logic
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}   // End of RangeDisplay

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;                                  // To accept range

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);                                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 23 35
//  Output : 23      24      25      26      27      28      29      30      31      32      33      34      35
//
//  Input  : -10 2
//  Output : -10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2
//  
//  Input  : 90 18
//  Output : Invalid Range
//
/////////////////////////////////////////////////////////////////////
