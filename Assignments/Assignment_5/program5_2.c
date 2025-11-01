/*
    Algorithm

    START
        Accept numbers from user as no1 and no2   
        If first number is less than second
        Then Second number is maximum
        Otherwise first number is maximum
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
//  Function Name   : FindMax  
//  Description     : It is used to find maximum of given two numbers
//  Input           : int, int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int FindMax(
                int iNo1,                                       // Input 1
                int iNo2                                        // Input 2
            )                                         
{
    if(iNo1 < iNo2)                                             // Updater
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}   // End of FindMax

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0,                                             // To accept user input1
        iValue2 = 0;                                             // To accept user input2 
    int iRet = 0;                                                // To store result

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);


    iRet = FindMax(iValue1, iValue2);                            // Function call

    printf("The Maximum number is %d\n", iRet);

    return 0;

}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 12       Input2 : 25       Output : The Maximum number is 25
//  Input1 : 10       Input2 : 37       Output : The Maximum number is 37
//  
/////////////////////////////////////////////////////////////////////
