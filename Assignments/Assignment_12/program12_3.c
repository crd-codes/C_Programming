/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Take one counter
        Take variable sum initialize it to 0
        Repeat until cnt is less than or equal to no/2
            If the remainder of no by cnt is zero 
                Then display cnt as factor
                Add cnt in sum 
            Increment cnt by 1
        End loop
        Display sum     
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
//  Function Name   : SumOfFactors  
//  Description     : It is used to calculate sum of all positive factors of given number
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int SumOfFactors(int iNo)                                          // Input
{
    int iCnt = 0;
    int iFactSum = 0;
    
    if(iNo < 0)                                                    // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)                        // Business logic
    {
        if (iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
    }
    return iFactSum;
}   // End of SumOfFactors

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

    iRet = SumOfFactors(iValue);                                   // Function call

    printf("%d\n", iRet);

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 24       Output : 36
//  Input2 : 14       Output : 10
//  
/////////////////////////////////////////////////////////////////////
