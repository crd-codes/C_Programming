/*
    Algorithm

    START
        Accept a character from the user as ch
        If the character is between 'a' and 'z'
            Then subtract 32 to convert it into uppercase
        Or the character is between 'A' and 'Z'
            Then add 32 to convert it into lowercase
        Display the converted character
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
//  Function Name   : DisplayConvert  
//  Description     : It is used to convert the case of an alphabet character   
//  Input           : char
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue1)                               // Input
{
    if(cValue1 >= 'a' && cValue1 <= 'z')                        // Business logic
    {
        printf("%c", cValue1 - 32);
    }
    else if(cValue1 >= 'A' && cValue1 <= 'Z')
    {
        printf("%c", cValue1 + 32);
    }
    else
    {
        printf("Invalid character");
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';                                         // To accept user input

    printf("Enter a character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);                                     // Function call
    
    return 0;
}   // End of main 

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : a     Output : A
//  Input2 : Z     Output : z
//  Input3 : @     Output : Invalid character
//
/////////////////////////////////////////////////////////////////////
