/*
    Algorithm

    START
        Accept distance from user in kilometers as KM
        Convert it to meters using formula: 1 Kilometer = 1000 meters
        Display the result
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
//  Function Name   : KMtoMeter  
//  Description     : It is used to convert distance from kilometers to meters
//  Input           : int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)                                             // Input
{
    int iMeter = 0;

    iMeter = iNo * 1000;                                              // Business logic

    return iMeter;
}   // End of KMtoMeter

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);                                        // Function call

    printf("Distance in meters is: %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 5
//  Output : Distance in meters is: 5000
//
//  Input  : 12
//  Output : Distance in meters is: 12000
//
/////////////////////////////////////////////////////////////////////
