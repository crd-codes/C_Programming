/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter
        Take one variable sum
        Repeat until counter is less than or equal to no
                Add (counter * 2) to sum
            Increment counter by 1       
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
//  Function Name   : SumOfEvenNaturalNum  
//  Description     : It is used to display sum of first N even natural numbers 
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int SumOfEvenNaturalNum(int iNo)                                   // Input
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)                             // Business logic
    {
        iSum = iSum + (2 * iCnt);
    }
    
    return iSum;
}   // End of SumOfEvenNaturalNum

// Time complexity O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = SumOfEvenNaturalNum(iValue);                            // Function call

    printf("Sum of First N even natural numbers is %d", iRet);
    return 0;
}   // End of main

//  Testcases successfully handled by the application
//
//  Input : 13       Output : Sum of First N natural even numbers is 182
//  Input : 5        Output : Sum of First N natural even numbers is 30  
//  
/////////////////////////////////////////////////////////////////////
