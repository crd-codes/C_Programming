/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter 
        Repeat until cnt is less than or equal to no / 2
        If the remainder of no divided by cnt is zero 
            Multiply cnt with multiplication variable
        Increment cnt by 1  
        End loop     
        Return the multiplication result
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
//  Function Name   : MultFact  
//  Description     : It is used to return multiplication of factors of given number 
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int MultFact(int iNo)                                               // Input
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)                          // Business logic
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}   // End of MultFact

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                 // To accept user input
    int iRet = 0;                                                   // To store result

    printf("Enter a number");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);                                        // Function call

    printf("%d", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12       Output : 144
//  Input2 : 13       Output : 1
//  
/////////////////////////////////////////////////////////////////////
