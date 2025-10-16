/*
    Algorithm

    START
        Accept number as no
        Show that number of * on screen
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
//  Function Name   : PrintStars 
//  Description     : It is used to print the stars
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 16/10/2025
//
/////////////////////////////////////////////////////////////////////

void PrintStars(int iNo)                            // Input
{
    int iCnt = 0;
    if(iNo < 0)                                     // Updater
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)              // Loop to print stars
    {
        printf("*");
    }
    
    printf("\n");
    
}   // End of PrintStars

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // To accept user input
    
    printf("Enter your number : ");
    scanf("%d",&iValue);

    PrintStars(iValue);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input   : 4     Output  : ****
//  Input   : 7     Output  : *******
//  
/////////////////////////////////////////////////////////////////////
