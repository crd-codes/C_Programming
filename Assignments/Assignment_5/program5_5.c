/*
    Algorithm

    START
        Accept three numbers from user as no1, no2, and no3   
        If no1 is greater than both no2 and no3
            Then no1 is the largest
        If no2 is greater than both no1 and no3
            Then no2 is the largest
        Otherwise
            no3 is the largest
        Display the largest number
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
//  Function Name   : FindLargest  
//  Description     : It is used to find largest among three given numbers
//  Input           : int, int, int
//  Output          : int
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)                     // Input
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))                          // Business logic
    {
        return iNo1;
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}   // End of FindLargest

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;                    // To accept user input
    int iRet = 0;                                                 // To store result

    printf("Enter three numbers: \n");
    scanf("%d%d%d", &iValue1,&iValue2,&iValue3);
    
    iRet = FindLargest(iValue1, iValue2, iValue3);                // Function call

    printf("The Largest number is %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : 10   25   15     Output : The Largest number is 25
//  Input2 : 5    5    5      Output : The Largest number is 5
//  Input3 : -3   -9   -1     Output : The Largest number is -1
//  
/////////////////////////////////////////////////////////////////////

