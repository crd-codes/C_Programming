/*
    Algorithm

    START
        Accept year from user as year
        If the year is divisible by 4
            Then it is a Leap Year
        Otherwise
            It is not a Leap Year
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
//  Function Name   : CheckLeapYear
//  Description     : It is used to check whether a given year is a leap year or not
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)                                        // Input
{
    if(iYear % 4 == 0)                                           // Business logic
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}   // End of CheckLeapYear

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                              // To accept user input

    printf("Enter year: ");
    scanf("%d", &iValue);

    CheckLeapYear(iValue);                                             // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 2024     Output : Leap Year
//  Input2 : 2023     Output : Not a Leap Year
//
/////////////////////////////////////////////////////////////////////
