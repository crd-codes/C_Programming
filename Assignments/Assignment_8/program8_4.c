/*
    Algorithm

    START
        Accept a number from the user as no
        If the input is negative then convert it to positive
        Take one counter initialized to 1
        Repeat until counter is less than or equal to 10
            Display multiplication of no with counter
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
//  Function Name   : Table  
//  Description     : It displays table of given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void Table(int iNo)                                                 // Input
{
    int iCnt = 0;

    if(iNo < 0)                                                     // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)                               // Business Logic
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}   // End of Table

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                 // To accept user input

    printf("Enter a number : ");
    scanf("%d", &iValue);

    Table(iValue);                                                  // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 2
//  Output : 2       4       6       8       10      12      14      16      18      20
//
//  Input  : -5
//  Output : 5       10      15      20      25      30      35      40      45      50
/////////////////////////////////////////////////////////////////////
