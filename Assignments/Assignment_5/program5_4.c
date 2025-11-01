/*
    Algorithm

    START
        Accept number from user as no   
        If the number is greater than 0
            Then display Positive Number
        If the number is less than 0
            Then display Negative Number
        Otherwise
            Display Zero
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
//  Function Name   : CheckNumberType  
//  Description     : It is used to check whether given number is positive, negative or zero
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)                                    // Input
{
    if(iNo > 0)                                                  // Business logic
    {
        printf("Positive Number\n");
    }
    else if(iNo < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}   // End of CheckNumberType

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                              // To accept user input

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumberType(iValue);                                           // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10       Output : Positive Number
//  Input2 : -5       Output : Negative Number
//  Input3 : 0        Output : Zero
//  
/////////////////////////////////////////////////////////////////////
