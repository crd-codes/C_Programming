/*
    Algorithm

    START
        Accept width and height of rectangle from user
        Calculate area using formula: Area = Width * Height
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
//  Function Name   : RectArea  
//  Description     : It is used to calculate area of a rectangle
//  Input           : float, float
//  Output          : double
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

double RectArea(
                float fWidth,                                      // width
                float fHeight                                      // Height
            )                              
{
    double dArea = 0;

    dArea = fWidth * fHeight;                                      // Business Logic

    return dArea;
}   // End of RectArea

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);                              // Function call

    printf("Area of Rectangle is: %lf\n", dRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1  : 5.3   Input2  : 9.78 
//  Output  : Area of Rectangle is: 51.834000
//  
//  Input1  : 4.5   Input2  : 1.8 
//  Output  : Area of Rectangle is: 8.100000
//
/////////////////////////////////////////////////////////////////////
