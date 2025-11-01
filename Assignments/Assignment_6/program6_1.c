/*
    Algorithm

    START
        Accept name from the user as str
        Display the entered name
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
//  Function Name   : DisplayName  
//  Description     : It is used to accept and display a name entered by the user
//  Input           : char[]
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 01/11/2025
//
/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    char Name[50];                                                // To store user name

    printf("Please enter full name: ");
    scanf("%[^\n]s", Name);                                            // Accept input

    printf("Your name is: %s\n", Name);                                               
    return 0;
}   // End of main

// Time Complexity : O(1)

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : Chakradhar Dugade      Output : Your name is: Chakradhar Dugade
//  Input2 : Varun Kadam            Output : Your name is: Varun Kadam
//  
/////////////////////////////////////////////////////////////////////
