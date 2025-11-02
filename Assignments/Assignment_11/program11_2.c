/*
    Algorithm

    START
        Accept start and end numbers from the user as Start and End
        If start is greater than end, then display invalid range message
        Otherwise
            Repeat from Start to End
                If the number is even
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
//  Function Name   : RangeDisplayEven
//  Description     : It displays all even numbers between given range
//  Input           : int, int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

void RangeDisplayEven(
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
        if(iCnt % 2 == 0)
        printf("%d\t", iCnt);
    }

    printf("\n");
}   // End of RangeDisplayEven

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

    RangeDisplayEven(iValue1, iValue2);                                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 23 35
//  Output : 24      26      28      30      32      34
//
//  Input  : -10 2
//  Output : -10     -8      -6      -4      -2      0       2
//
//  Input  : 90 18
//  Output : Invalid Range
//
/////////////////////////////////////////////////////////////////////
