/*
    Algorithm

    START
        Accept Temperature in Fahrenheit 
        Convert it into celsius using formula( 1 celsius = (Fahrenheit-32) * (5/9))
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
//  Function Name   : FhToCs  
//  Description     : It is used to convert temprature from fahrenheit to celsius
//  Input           : float
//  Output          : double
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

double FhToCs(float fTemp)                                           // Input
{
    float fCelcius = 0.0f;

    fCelcius = (fTemp-32) * 5/9;                                        // Business logic

    return fCelcius;
}   // End of FhToCs

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

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);                                   // Function call

    printf("Temperature in Celsius is %lf\n", dRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10      Output : Temperature in Celsius is -12.222222
//  Input : 34      Output : Temperature in Celsius is 1.111111
//
/////////////////////////////////////////////////////////////////////
