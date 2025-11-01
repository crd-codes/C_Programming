/*
    Algorithm

    START
        Accept number from the user as no
        If it is greater than 100 
        Then display greater
        Otherwise smaller
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
//  Function Name   : ChkGreater  
//  Description     : It checks whether a given number is greater than 100 or not
//  Input           : int
//  Output          : bool
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)                                    // Input
{
    if(iNo > 100)                  
    {
        return true;
    }
    else
    {
        return false;
    }
}   // End of ChkGreater

// Time complexity O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                            // To accept user input
    bool bRet = false;                                         // To store return value

    printf("Enter a number : ");
    scanf("%d", &iValue);          

    bRet = ChkGreater(iValue);                                 // Function call

    if(bRet == true)
    {
        printf("Greater \n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;                      
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 23         Output : Smaller
//  Input2 : 112        Output : Greater
//  
/////////////////////////////////////////////////////////////////////

