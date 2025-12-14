#include <stdio.h>

int StrlenX(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        StrlenX(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter your string : ");
    scanf("%[^\n]s", Arr);

    iRet = StrlenX(Arr);

    printf("Number of characters are :%d", iRet);

    return 0;
}