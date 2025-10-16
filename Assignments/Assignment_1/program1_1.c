/*
    Algorithm

    START
        Accept first number as no1 
        Accept second number as no2
        If the inputs are negative convert them as postive
        Perform division of no1 and no2
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
//  Function Name   : Divide  
//  Description     : It is used to divide two numbers
//  Input           : int, int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 16/10/2025
//
/////////////////////////////////////////////////////////////////////

int Divide( 
                int iNo1,                       // First input
                int iNo2                        // Second input
          )
{
    int iAns = 0;                               // To store result
    
    if(iNo1 < 0)                                // Updater
    {
        iNo1 = -iNo1;
    }
    if(iNo2 < 0)                                // Updater
    {
        iNo2 = -iNo2;
    }

    if(iNo2 == 0)
    {
        printf("Division by zero is not allowed");
    }
    iAns = iNo1/iNo2;                           // Business Logic

    return iAns;
}   // End of Divide

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;              // To accept user input
    int iRet = 0;                               // To store result

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);
    
    iRet = Divide(iValue1,iValue2);             // Function call

    printf("The division is %d",iRet);
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10      Input2 : 2       Output : The division is 5
//  Input1 : -10     Input2 : 2       Output : The division is 5
//  Input1 : 10      Input2 : -2      Output : The division is 5
//  Input1 : -10     Input2 : -2      Output : The division is 5
//  
/////////////////////////////////////////////////////////////////////
