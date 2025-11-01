/*
    Algorithm

    START
        Accept the number from user as no  
        If no is less than 50
            Then display small
        If no is greater than 50 and less than 100
            Then display medium
        If it is greater than 100
            Then display large
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
//  Function Name   : Number  
//  Description     : It is used to classify the given number as Small, Medium, or Large
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void Number(int iNo)                                          // Input
{
    if(iNo < 50)                                              // Business logic
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}   // End of Number

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                          // To accept user input

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    Number(iValue);                                          // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 25      Output : Small
//  Input : 50      Output : Medium
//  Input : 75      Output : Medium
//  Input : 150     Output : Large
//  
/////////////////////////////////////////////////////////////////////
