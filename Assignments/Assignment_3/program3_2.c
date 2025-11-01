/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Take one counter 
        Repeat until cnt is less than or equal to no/2
        If the remainder of no divided by cnt is zero 
        Then display cnt as factor 
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
//  Function Name   : DisplayFactors  
//  Description     : It is used to print factors of given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)                                     // Input
{
    int iCnt = 0;
    
    if(iNo < 0)                                                 // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)                     // Business logic
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}   // End of DisplayFactor

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

    DisplayFactor(iValue);                                      // Function call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 24       Output : 1  2  3  4  6  8  12
//  Input2 : 14       Output : 1  2  7
//  
/////////////////////////////////////////////////////////////////////
