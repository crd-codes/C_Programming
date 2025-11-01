/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter 
        Initialize it to 1
        Repeat until counter is less than or equal to 5
            Display first five multiples
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
//  Function Name   : MultipleDisplay  
//  Description     : It is used to display first five multiples of a given number.
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)                                     // Input
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 5; iCnt++)                          // Business logic
    {
        printf("%d\t", iCnt * iNo);
    }
}   // End of MultipleDisplay

// Time complexity O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                               // To accept user input

    printf("Enter a number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);                                      // Function call

    return 0;
}   // End of main

//  Testcases successfully handled by the application
//
//  Input : 3       Output : 3    6    9    12    15
//  Input : 5       Output : 5    10   15   20   25
//
/////////////////////////////////////////////////////////////////////
