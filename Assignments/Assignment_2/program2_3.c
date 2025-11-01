/*
    Algorithm

    START
        Accept number as no
        If the input is less than 10
        Then show Hello
        Otherwise show Demo
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
//  Description     : It is used to show Hello if input is less than 10 otherwise Demo
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)                                         // Input
{
    if(iNo < 10)                                              // Business Logic
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}   // End of Display

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             // To accept user input 

    printf("Enter a number");
    scanf("%d",&iValue);

    Display(iValue);                                            // Function call

    return 0;
}   //End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10      Output : Demo
//  Input2 : 13      Output : Demo
//  Input3 : 3       Output : Hello
//  Input4 : 4       Output : Hello
//   
/////////////////////////////////////////////////////////////////////
