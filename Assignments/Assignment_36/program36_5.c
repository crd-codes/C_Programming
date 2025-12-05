#include<stdio.h>

int CountWhite(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50] ={'\0'}; 

    printf("Enter string : \n");
    scanf("%[^\n]s", Arr); 

    iRet = CountWhite(Arr);

    printf("The count of white space is : %d\n", iRet);

    return 0;
}
