/*
    Algorithm

    START
        Accept start and end numbers from the user as Start and End
        If start is greater than end, then display invalid range message
        Otherwise
            Repeat from End to Start
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
//  Function Name   : RangeDisplayRev
//  Description     : It displays all numbers between given range in reverse order
//  Input           : int, int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

void RangeDisplayRev(
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

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)                       // Business logic
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}   // End of RangeDisplayRev

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

    RangeDisplayRev(iValue1, iValue2);                                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 23 35
//  Output : 35      34      33      32      31      30      29      28      27      26      25      24      23
//
//  Input  : -10 2
//  Output : 2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10
//
//  Input  : 90 18
//  Output : Invalid Range
//
/////////////////////////////////////////////////////////////////////
