/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter
        Repeat until counter is less than or equal to no
            Display $ and * 
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
//  Function Name   : Pattern  
//  Description     : It is used to display pattern of ($ *) for given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void Pattern(int iNo)                                           // Input
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)                          // Business logic
    {
        printf("$\t*\t");
    }
}   // End of Pattern

// Time complexity O(N)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                               // To accept user input

    printf("Enter a number");
    scanf("%d", &iValue);

    Pattern(iValue);                                              // Function call

    return 0;
}   // End of main

//  Testcases successfully handled by the application
//
//  Input : 3       Output : $   *   $   *   $   *   
//  Input : 5       Output : $   *   $   *   $   *   $   *   $   *   
//  
/////////////////////////////////////////////////////////////////////
