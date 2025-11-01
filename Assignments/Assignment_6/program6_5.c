/*
    Algorithm

    START
        Accept total marks and obtained marks from user as total and obtained
        If total marks are 0
            Then return error because total can not be 0
        Calculate percentage (obtained / total) * 100
        Display the calculated percentage
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
//  Function Name   : Percentage  
//  Description     : It calculates percentage based on total and obtained marks
//  Input           : float, float
//  Output          : float
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

float Percentage(
                    float fNo1,                                 // Input1
                    float fNo2                                  // Input2  
                )          
{
    float fPercent = 0.0;

    if(fNo1 == 0)                                               // Updater
    {
        printf("Total marks cannot be zero.\n");
        return 0.0;
    }

    fPercent = (fNo2 / fNo1) * 100;                             // Business Logic

    return fPercent;
}   // End of Percentage

//  Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    float fTotal = 0.0, fObtained = 0.0;                         // To accept user input
    float fRet = 0.0;                                            // To store result

    printf("Enter total marks : ");
    scanf("%f", &fTotal);

    printf("Enter obtainded marks : ");
    scanf("%f", &fObtained);

    fRet = Percentage(fTotal, fObtained);                        // Function call

    printf("Percentage is : %f%%\n", fRet);
  

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 500    Input2 : 345    Output : 69.00%
//  Input1 : 1000   Input2 : 745    Output : 74.50%
//
/////////////////////////////////////////////////////////////////////
