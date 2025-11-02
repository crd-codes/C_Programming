/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter 
        Take one variable sum
        Repeat until counter is less than or equal to no
            Add counter to sum
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
//  Function Name   : SumOfNaturalNum  
//  Description     : It is used to display sum of first N natural numbers 
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

int SumOfNaturalNum(int iNo)                                       // Input
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)                             // Business logic
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;
}   // End of SumOfNaturalNum

// Time complexity : O(N)

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

    iRet = SumOfNaturalNum(iValue);                                 // Function call

    printf("Sum of First N natural numbers is %d\n", iRet);
    return 0;
}   // End of main

//  Testcases successfully handled by the application
//
//  Input : 13       Output : Sum of First N natural numbers is 91
//  Input : 5        Output : Sum of First N natural numbers is 15  
//  
/////////////////////////////////////////////////////////////////////
