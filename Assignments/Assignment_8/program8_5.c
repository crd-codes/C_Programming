/*
    Algorithm

    START
        Accept a number from the user as no
        If the input is negative then convert it to positive
        Take one counter initialized to 10
        Repeat until counter is less than or equal to 1
            Display multiplication of no with counter
            Decrement counter by 1
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
//  Function Name   : TableRev  
//  Description     : It displays table of given number in reverse order
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void TableRev(int iNo)                                              // Input
{
    int iCnt = 0;

    if(iNo < 0)                                                     // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)                               // Business Logic
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}   // End of TableRev

// Time Complexity : O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                  // To accept user input

    printf("Enter a number : ");
    scanf("%d", &iValue);

    TableRev(iValue);                                                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 2
//  Output : 20      18      16      14      12      10      8       6       4       2
//
//  Input  : -5
//  Output : 50      45      40      35      30      25      20      15      10      5
//
/////////////////////////////////////////////////////////////////////
