/*
    Algorithm

    START
        Accept a character from the user as ch
        If the character is 'A', 'E', 'I', 'O', 'U'
        Or the character is 'a', 'e', 'i', 'o', 'u'
        Then it is a vowel
        Otherwise it is not a vowel
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
//  Function Name   : ChkVowel  
//  Description     : It is used to convert the case of an alphabet character   
//  Input           : char
//  Output          : void
//  Author          : Chakradhar Rawaji Dugade
//  Date            : 31/10/2025
//
/////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)                                                      // Input
{
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
       ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')       // Business logic
    {
        return TRUE;
    }   
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';                                                     // To accept user input
    BOOL bRet = FALSE;                                                      // To store result

    printf("Enter a character: \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);                                                // Function call
    
    if(bRet == TRUE)
    {
        printf("It is a vowel\n");
    }
    else
    {
        printf("It is not a vowel\n");
    }

    return 0;
}   // End of main 

/////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 : A      Output : It is a vowel
//  Input2 : e      Output : It is a vowel
//  Input3 : k      Output : It is not a vowel
//  Input4 : @      Output : It is not a vowel
//
/////////////////////////////////////////////////////////////////////