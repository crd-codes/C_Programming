/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Take one counter 
        Repeat until cnt is less than no
        If the remainder of no divided by cnt is not zero 
        Then display cnt as non factor 
        Increment cnt by 1  
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
//  Function Name   : NonFact  
//  Description     : It is used to print non factors of given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void NonFact(int iNo)                                           // Input
{
    int iCnt = 0;
    
    if(iNo < 0)                                                 // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo ; iCnt++)                        // Business logic
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\t ", iCnt);
        }
    }
    printf("\n");
}   // End of NonFact

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

    NonFact(iValue);                                           // Function call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12       Output : 5        7       8       9       10      11
//  Input2 : 13       Output : 2        3       4       5       6       7       8       9       10      11      12
//  
/////////////////////////////////////////////////////////////////////
