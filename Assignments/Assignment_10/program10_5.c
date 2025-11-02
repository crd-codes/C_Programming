/*
    Algorithm

    START
        Accept area in square feet 
        Convert it into square meter using (1 square feet = 0.0929 square meter)
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
//  Function Name   : SquareMeter  
//  Description     : It is used to convert square feet to square meter
//  Input           : float
//  Output          : double
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

double SquareMeter(float fSqFeet)                                           // Input
{
    double dSqMeter = 0.0;

    dSqMeter = fSqFeet * 0.0929;

    return dSqMeter;

}   // End of SquareMeter

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;                                               // To accept user input
    double dRet = 0.0;                                                 // To store result

    printf("Enter area in square feet: ");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);                                   // Function call

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output : Area in square meter is 0.464500
//  Input : 7       Output : Area in square meter is 0.650300
//
/////////////////////////////////////////////////////////////////////
