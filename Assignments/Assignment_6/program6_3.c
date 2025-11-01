/*
    Algorithm

    START
        Accept two numbers from the user as no1 and no2
        If both numbers are equal
            Then display Equal
        Otherwise display Not Equal
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
//  Function Name   : ChkEqual  
//  Description     : It checks whether two given numbers are equal or not
//  Input           : int, int
//  Output          : bool
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

bool ChkEqual(
                int iNo1,                                        // Input 1
                int iNo2                                         // Input 2
             )
{
    if(iNo1 == iNo2)                                             
    {
        return true;
    }
    else
    {
        return false;
    }
}   // End of ChkEqual

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;                               // To accept user inputs
    bool bRet = false;                                          // To store return value

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    bRet = ChkEqual(iValue1, iValue2);                          // Function call

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10   Input2 : 10    Output : Equal
//  Input1 : 25   Input2 : 30    Output : Not Equal
//  
/////////////////////////////////////////////////////////////////////
