/*
    Algorithm

    START
        Accept number from user as no   
        If the input is negative then convert it to positive
        Check if input is divisible by 5
        Then display correct message     
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name   : IsDivisibleByFive  
//  Description     : It is used to check if given number is divisible by 5
//  Input           : int
//  Output          : bool
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 02/11/2025
//
/////////////////////////////////////////////////////////////////////

bool IsDivisibleByFive(int iNo)                                      // Input
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}   // End of IsDivisibleByFive

// Time complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                                // To accept user input 
    bool bRet = false;                                             // To store result

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet = IsDivisibleByFive(iValue);                              // Function call

    if(bRet == true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 24       Output : Number is not divisible by 5
//  Input2 : 15       Output : Number is divisible by 5
//  
/////////////////////////////////////////////////////////////////////
