#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt = 0, ifrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            ifrequency++;
        }
    }

    return ifrequency;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);

    printf("Number of factors are : %d",iRet);

    return 0;
}