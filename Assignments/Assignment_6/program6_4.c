/*
    Algorithm

    START
        Accept three numbers from the user as no1, no2, and no3
        If any number is 0
            Then return 0
        Otherwise multiply all three numbers
        Display the multiplication result
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
//  Function Name   : Multiply  
//  Description     : It is used to return multiplication of three given numbers
//  Input           : int, int, int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int Multiply(
                int iNo1,                                       // Input 1
                int iNo2,                                       // Input 2
                int iNo3                                        // Input 3
            )
{
    int iMult = 0;

    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)                     // Updater                 
    {
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;                                 // Business Logic 

    return iMult;
}   // End of Multiply

//  Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;                   // To accept user inputs
    int iRet = 0;                                                // To store result

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);                  // Function call

    printf("Multiplication of three numbers is : %d\n", iRet);
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 2   3   4     Output : 24
//  Input : 5   1   0     Output : 0
//  Input : 10  2   3     Output : 60
//  
/////////////////////////////////////////////////////////////////////
