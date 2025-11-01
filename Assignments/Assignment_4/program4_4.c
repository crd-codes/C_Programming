/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Take one counter 
        Repeat until cnt is less than no
        If the remainder of no divided by cnt is not zero 
        Then display cnt as non factor 
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
//  Function Name   : SumNonFact  
//  Description     : It is used to return sumation of non factors of given number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)                                         // Input
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)                                                 // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo ; iCnt++)                        // Business logic
    {
        if (iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}   // End of SumNonFact

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                             // To accept user input 
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);                                  // Function call

    printf("%d\n", iRet);

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12       Output : 50
//  Input2 : 10       Output : 37
//  
/////////////////////////////////////////////////////////////////////
