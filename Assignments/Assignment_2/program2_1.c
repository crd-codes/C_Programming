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
//  Function Name   : Display 
//  Description     : It is used to print the stars
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 27/10/2025
//
/////////////////////////////////////////////////////////////////////


void Display(int iNo)                               // Input
{
    int iCnt = 0;

    if(iNo < 0)                                     // Updater
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)                               // Loop to print stars
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}   // End of Display

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 // To accept user input

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1   : 3     Output  : ***
//  Input2   : 5     Output  : *****
//  
/////////////////////////////////////////////////////////////////////
