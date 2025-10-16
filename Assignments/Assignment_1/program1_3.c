/*
    Algorithm

    START
        Print 5 to 1 in descending order
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
//  Description     : It is used to print 5 to 1 in descending order
//  Input           : void
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 16/10/2025
//
/////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;

    iCnt = 5;                                       

    while(iCnt >= 1)                            // Business Logic
    {
        printf("%d\t", iCnt);
        iCnt--;
    }
    printf("\n");
}   // End of Display

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{                   
    Display();                                  // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcase successfully handled by the application
//
//  5   4   3   2   1
//   
/////////////////////////////////////////////////////////////////////
