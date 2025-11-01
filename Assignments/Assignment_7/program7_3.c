/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter
        Initialize it to -no
        Repeat until counter is less than or equal to no
            Display counter 
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
//  Description     : It is used to display number line of given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)                                           // Input
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)                       // Business logic
    {
        printf("%d\t", iCnt);
    }
}   // End of Display

// Time complexity : O(N)

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

    Display(iValue);                                              // Function call

    return 0;
}   // End of main

//  Testcases successfully handled by the application
//
//  Input : 3       Output : -3   -2   -1   0   1   2   3
//  Input : 5       Output : -5   -4   -3   -2   -1   0   1   2   3   4   5
//  
/////////////////////////////////////////////////////////////////////