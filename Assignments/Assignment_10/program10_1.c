/*
    Algorithm

    START
        Accept radius of circle from user as r
        Calculate area using formula : Area = PI * r * r
        Display the area
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
//  Function Name   : CircleArea
//  Description     : It calculates area of a circle using radius
//  Input           : float
//  Output          : double
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)                                     // Input
{
    float PI = 3.14;
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;                              // Business logic
   
    return dArea;
}   // End of CircleArea

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;                                            // To accept user input
    double dRet = 0.0f;                                             // To store result

    printf("Enter radius of circle: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);                                      // Function call

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5.3      Output : Area of circle is: 88.202609
//  Input : 10.4     Output : Area of circle is: 339.622386
//
/////////////////////////////////////////////////////////////////////
