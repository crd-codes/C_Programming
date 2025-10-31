/*
    Algorithm

    START
        Accept first number as no1 
        Accept second number as no2
        Display the first number in second number of times
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
//  Description     : It is used to display first number in second number of times
//  Input           : int
//  Output          : void
//  Author          : Charkradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////

void Display(
                int iNo,                                    // First input
                int iFreqency                               // Second input
            )
{
    int iCnt = 0;

    if(iFreqency < 0)                                       // Updater
    {
        iFreqency = - iFreqency;
    }

    for(iCnt = 1; iCnt <= iFreqency; iCnt++)                // Business Logic
    {
        printf("%d\t", iNo);
    }    
}   // End of Display

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                         // To accept number
    int iCount = 0;                                         // To accept frequency

    printf("Enter a number");
    scanf("%d", &iValue);

    printf("Enter a freqency");
    scanf("%d", &iCount);

    Display(iValue, iCount);                                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10      Input2 : 2       Output : 10   10
//  Input1 : -2      Input2 : 3       Output : -2   -2   -2
//  Input1 : 21      Input2 : -3      Output : 21   21   21
//  Input1 : -2      Input2 : 0       Output : 
//  
/////////////////////////////////////////////////////////////////////
