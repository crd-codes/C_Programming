/*
    Algorithm

    START
        Accept amount in US Dollars from user as Dollar
        Convert it to Indian Rupees by multiplying with 70
        Display the result
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
//  Function Name   : DollarToINR  
//  Description     : It is used to convert amount from US Dollars to Indian Rupees
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int DollarToINR(int iDollar)                                           // Input
{
    int iRupees = 70;

    iRupees = iDollar * iRupees;                                        // Business logic

    return iRupees;
}   // End of DollarToINR

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                               // To accept user input
    int iRet = 0;                                                 // To store result

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);                                   // Function call

    printf("Value in INR is %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10      Output : Value in INR is 700
//  Input : 3       Output : Value in INR is 210
//  Input : 0       Output : Value in INR is 0
//
/////////////////////////////////////////////////////////////////////
