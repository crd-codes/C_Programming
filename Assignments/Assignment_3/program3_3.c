/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then return 
        Take one counter 
        Repeat until cnt is less than or equal to no/2
        If the remainder of no divided by cnt is zero 
        And cnt is even
        Then display cnt as even factor 
        Increament cnt by 1  
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
//  Function Name   : DisplayEvenFactors  
//  Description     : It is used to print even factors of given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;                                              // Input
    
    if(iNo <= 0)                                               // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)                    // Business logic
    {
        if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d ", iCnt);
        }
    }
}   // End of DisplayEvenFactors

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             // To accept user input              

    printf("Enter a number\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);                                 // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 24       Output : 2  4  6  8  12
//  Input1 : 14       Output : 2  
//  
/////////////////////////////////////////////////////////////////////
