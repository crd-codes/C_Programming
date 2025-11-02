/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Take one counter
        Take factor count
        Repeat until cnt is less than or equal to no/2
        If the remainder of no by cnt is zero 
        Then increament Factor count by 1  
        Increment cnt by 1
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
//  Function Name   : CountFactors  
//  Description     : It is used to count positive factors of given number
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountFactors(int iNo)                                          // Input
{
    int iCnt = 0;
    int iFactCount = 0;
    
    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)                        // Business logic
    {
        if (iNo % iCnt == 0)
        {
            iFactCount++;
        }
    }
    return iFactCount;
}   // End of CountFactors

// Time complexity : O(N/2)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input 
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);                                   // Function call

    printf("%d\n", iRet);

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 24       Output : 7
//  Input2 : 14       Output : 3
//  
/////////////////////////////////////////////////////////////////////
