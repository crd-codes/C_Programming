/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter
        Repeat until counter is less than or equal to no
            If counter is odd
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
//  Function Name   : PrintOddNumbers  
//  Description     : It is used to display Odd numbers from 1 to given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

void PrintOddNumbers(int iNo)                                         // Input
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)                             // Business logic
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}   // End of PrintOddNumbers

// Time complexity O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int limit = 0;                                                 // To accept user input

    printf("Enter a number : ");
    scanf("%d", &limit);

    PrintOddNumbers(limit);                                           // Function call

    return 0;
}   // End of main

//  Testcases successfully handled by the application
//
//  Input : 13       Output : 1       3       5       7       9       11      13
//  Input : 5        Output : 1       3       5  
//  
/////////////////////////////////////////////////////////////////////
