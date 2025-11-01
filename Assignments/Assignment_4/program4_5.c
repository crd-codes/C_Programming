/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Take one counter 
        Repeat until cnt is less than no
        If the remainder of no divided by cnt is zero 
            Then add cnt to sum of factors
        Otherwise 
            Add cnt to sum of non-factors 
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
//  Function Name   : FactDiff  
//  Description     : It is used to return difference between summation of factors and non-factors of a given number
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)                                             // Input
{
    int iCnt = 0;
    int iSumNonFact = 0;
    int iSumfact = 0;
    int iDiff = 0;
    if(iNo < 0)                                                   // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo ; iCnt++)                         
    {
        if ( iNo % iCnt == 0)
        {
            iSumfact = iSumfact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        
    }

    iDiff = iSumfact - iSumNonFact;                                 // Business logic

    return iDiff;
}   // End of FactDiff

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                 // To accept user input 
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);                                       // Function call

    printf("%d\n", iRet);

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12       Output : -34
//  Input2 : 10       Output : -29
//  
/////////////////////////////////////////////////////////////////////
