/*
    Algorithm

    START
        Accept single digit number from user as no  
        If no is less than 0
            Then convert it to positive
        Use switch case to display its word
            Case 0 : Display "Zero"
            Case 1 : Display "One"
            Case 2 : Display "Two"
            Case 3 : Display "Three"
            Case 4 : Display "Four"
            Case 5 : Display "Five"
            Case 6 : Display "Six"
            Case 7 : Display "Seven"
            Case 8 : Display "Eight"
            Case 9 : Display "Nine"
            Default : Display "Invalid Number"
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
//  Function Name   : Display  
//  Description     : It is used to display word of a single digit number
//  Input           : int
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)                                        // Input
{
    if(iNo < 0)                                                  // Updater
    {
        iNo = -iNo;                                              
    }

    switch(iNo)                                                  // Business logic
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid Number\n");
            break;
    }
}   // End of Display

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                           // To accept user input

    printf("Enter a single digit number: ");
    scanf("%d", &iValue);

    Display(iValue);                                          // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 9     Output : Nine
//  Input : 0     Output : Zero
//  Input : 12    Output : Invalid Number
//  Input : -7    Output : Seven
//  
/////////////////////////////////////////////////////////////////////
