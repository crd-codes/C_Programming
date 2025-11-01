/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive 
        Take one counter 
        Initialize it to no / 2
        Repeat until cnt is greater than or equal to 1
        If the remainder of no divided by cnt is zero 
        Then display cnt as factor 
        Decrement cnt by 1  
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
//  Function Name   : FactRev  
//  Description     : It is used to print factors of given number in reverse order
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void FactRev(int iNo)                                            // Input
{
    int iCnt = 0;
    
    if(iNo <= 0)                                                // Updater
    {
        iNo = -iNo;
    }

    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)                     // Business logic
    {
        if (iNo % iCnt == 0)
        {
            printf("%d \t ", iCnt);
        }
    }
    printf("\n");
}   // End of FactRev

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

    FactRev(iValue);                                           // Function call

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 24       Output : 12       8       6       4       3       2       1
//  Input2 : 14       Output : 7        2       1
//  
/////////////////////////////////////////////////////////////////////
