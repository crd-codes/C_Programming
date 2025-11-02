/*
    Algorithm

    START
        Accept start and end numbers from the user as Start and End
        If start is greater than end then display invalid range message
        If any range is negative then display invalid message
        Otherwise
            Repeat from Start to End
                If the number is even
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
//  Function Name   : RangeSumEven
//  Description     : It displays addition of all even numbers between given range
//  Input           : int, int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int RangeSumEven(
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
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
            iSum = iSum + iCnt;
        }
        
    }

    
    return iSum;
}   // End of RangeSumEven

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

    iRet = RangeSumEven(iValue1, iValue2);                         // Function call

    printf("The Addition is %d", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 23 30
//  Output :  The Addition is 108
//  
//  Input  : -10 2
//  Output : Invalid range
//
//  Input  : 90 18
//  Output : Invalid Range
//
/////////////////////////////////////////////////////////////////////
