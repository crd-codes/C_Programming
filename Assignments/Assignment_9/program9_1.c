/*
    Algorithm

    START
        Accept a number from the user as no
        If the input is negative then convert it to positive
        Take one counter initialized to 1
        Repeat until counter is less than or equal to no
            Display that number of * 
        End loop
        Again repeat until counter is less than or equal to no
            Diplay that number of  #
            Increment counter by 1
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
//  Function Name   : Display
//  Description     : It displays given number of * and then # on screen
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)                                               // Input
{
    int iCnt = 0;

    if(iNo < 0)                                                     // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                              // Business Logic
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)                              // Business Logic
    {
        printf("#\t");
    }
    printf("\n");
}   // End of Display

// Time Complexity : O(2N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number to display pattern: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 5
//  Output : *       *       *       *       *       #       #       #       #       #
//
//  Input  : -3
//  Output : *       *       *       #       #       #
//
/////////////////////////////////////////////////////////////////////
