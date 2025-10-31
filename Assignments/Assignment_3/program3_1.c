/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then return 
        Take one counter as cnt
        And first even number as num
        Print num until cnt is less than or equal to no
            Print num
            Increment num by 2
            Increment cnt by 1
        End Loop        
        Display that number of even numbers
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
//  Function Name   : PrintEven  
//  Description     : It is used to print even numbers as input times
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////


void PrintEven(int iNo)                                     // Input
{
    int iCnt = 0;
    int iNum = 2;

    if(iNo <= 0)                                            // Filter
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)                      // Business logic
    {
        printf("%d\t", iNum);
        iNum += 2;
    }

}   // End of PrintEven

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                         // To Accept user input

    printf("Enter a number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);                                      // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 7       Output : 2  4  6  8  10  12  14
//  Input1 : 3       Output : 2  4  6
//  
/////////////////////////////////////////////////////////////////////
